#include <algorithm>
#include <cmath>
#include <chrono>
#include <memory>
#include <optional>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

#include "rclcpp/rclcpp.hpp"

#include "interface_package/msg/control_command.hpp"
#include "interface_package/msg/path_preview.hpp"
#include "interface_package/msg/robot_state.hpp"
#include "interface_package/msg/robot_target.hpp"
#include "interface_package/msg/world_state.hpp"
#include "interface_package/srv/get_navigation_config.hpp"
#include "interface_package/srv/send_robot_command.hpp"

#include "grsim/framework/navigation/navigation_module.h"

using interface_package::msg::ControlCommand;
using interface_package::msg::NavigationConfig;
using interface_package::msg::PathPreview;
using interface_package::msg::RobotState;
using interface_package::msg::RobotTarget;
using interface_package::msg::WorldState;
using interface_package::srv::GetNavigationConfig;
using interface_package::srv::SendRobotCommand;
using grsim::framework::NavigationModule;
using grsim::framework::Pose2D;

namespace {
constexpr double kEpsilon = 1e-6;

double normalize_angle(double angle) {
  while (angle > M_PI) {
    angle -= 2.0 * M_PI;
  }
  while (angle < -M_PI) {
    angle += 2.0 * M_PI;
  }
  return angle;
}
}  // namespace

class NavigationNode : public rclcpp::Node {
 public:
  NavigationNode() : Node("navigation_node") {
    target_timeout_s_ = declare_parameter<double>("target_timeout_s", 0.5);
    const auto world_topic =
        declare_parameter<std::string>("world_topic", "vision/world_state");
    const auto target_topic =
        declare_parameter<std::string>("target_topic", "behavior/robot_target");
    robot_service_name_ = declare_parameter<std::string>(
        "robot_command_service", "/robot_commander/send_robot_command");
    nav_service_name_ = declare_parameter<std::string>(
        "navigation_get_service", "/navigation_manager/get_navigation_config");
    const auto path_topic =
        declare_parameter<std::string>("path_preview_topic", "navigation/path_preview");

    world_sub_ = create_subscription<WorldState>(
        world_topic, rclcpp::SensorDataQoS(),
        std::bind(&NavigationNode::on_world, this, std::placeholders::_1));
    target_sub_ = create_subscription<RobotTarget>(
        target_topic, rclcpp::SystemDefaultsQoS(),
        std::bind(&NavigationNode::on_target, this, std::placeholders::_1));

    command_client_ = create_client<SendRobotCommand>(robot_service_name_);
    nav_client_ = create_client<GetNavigationConfig>(nav_service_name_);
    path_preview_pub_ = create_publisher<PathPreview>(path_topic, 10);

    config_timer_ = create_wall_timer(
        std::chrono::seconds(1),
        std::bind(&NavigationNode::refresh_navigation_config, this));
  }

 private:
  struct TargetEntry {
    RobotTarget target;
    rclcpp::Time last_update;
  };

  void refresh_navigation_config() {
    if (config_ready_) {
      if (config_timer_) {
        config_timer_->cancel();
      }
      return;
    }
    if (!nav_client_->service_is_ready()) {
      RCLCPP_WARN_THROTTLE(
          get_logger(), *get_clock(), 5000,
          "Navigation config service '%s' unavailable.", nav_service_name_.c_str());
      return;
    }
    auto request = std::make_shared<GetNavigationConfig::Request>();
    auto future = nav_client_->async_send_request(
        request, std::bind(&NavigationNode::on_nav_config, this, std::placeholders::_1));
    (void)future;
  }

  void on_nav_config(rclcpp::Client<GetNavigationConfig>::SharedFuture future) {
    try {
      auto response = future.get();
      nav_config_ = response->config;
      config_ready_ = true;
      for (auto &entry : modules_) {
        entry.second->SetNavigationConfig(nav_config_);
      }
      RCLCPP_INFO(get_logger(), "Navigation config synced.");
    } catch (const std::exception &ex) {
      RCLCPP_WARN(get_logger(), "Failed to fetch navigation config: %s", ex.what());
    } catch (...) {
      RCLCPP_WARN(get_logger(), "Failed to fetch navigation config (unknown error).");
    }
  }

  void on_target(const RobotTarget::SharedPtr msg) {
    if (!msg) {
      return;
    }
    TargetEntry entry;
    entry.target = *msg;
    entry.last_update = now();
    targets_[msg->robot_id] = entry;
  }

  void on_world(const WorldState::SharedPtr msg) {
    if (!msg || !config_ready_) {
      return;
    }
    prune_targets();
    for (auto &pair : targets_) {
      const auto robot_id = pair.first;
      const RobotState *state = find_robot(*msg, robot_id);
      if (state == nullptr) {
        continue;
      }
      if (!state->visible) {
        continue;
      }
      const auto command = compute_command(*state, pair.second.target, *msg);
      if (!command) {
        continue;
      }
      send_command(robot_id, *command);
    }
  }

  void prune_targets() {
    const rclcpp::Time now_time = now();
    for (auto it = targets_.begin(); it != targets_.end();) {
      const double age = (now_time - it->second.last_update).seconds();
      if (age > target_timeout_s_) {
        it = targets_.erase(it);
      } else {
        ++it;
      }
    }
  }

  const RobotState *find_robot(const WorldState &world, uint32_t robot_id) const {
    const auto finder = [robot_id](const std::vector<RobotState> &robots) -> const RobotState * {
      for (const auto &robot : robots) {
        if (robot.id == robot_id) {
          return &robot;
        }
      }
      return nullptr;
    };
    if (const RobotState *friendly = finder(world.friendly)) {
      return friendly;
    }
    return finder(world.opponent);
  }

  std::optional<ControlCommand> compute_command(const RobotState &state,
                                                const RobotTarget &target,
                                                const WorldState &world) {
    if (target.target.x == 0.0 && target.target.y == 0.0 &&
        std::abs(target.target.theta) <= kEpsilon) {
      // Minimal target info, nothing to do.
      return std::nullopt;
    }
    NavigationModule &module = module_for_robot(state.id);
    module.SetAllowGoalArea(target.allow_goal_area);
    module.SetAvoidBallObstacle(target.avoid_ball);

    Pose2D goal = target.target;
    const double delta_x = goal.x - state.pose.x;
    const double delta_y = goal.y - state.pose.y;
    const double distance = std::hypot(delta_x, delta_y);

    if (distance <= nav_config_.stop_distance) {
      ControlCommand hold;
      hold.has_velocity = true;
      hold.velocity.vx = 0.0;
      hold.velocity.vy = 0.0;
      hold.velocity.omega = 0.0;
      hold.kick = false;
      hold.dribbler = false;
      return hold;
    }

    std::vector<Pose2D> direct_path;
    std::vector<Pose2D> path =
        module.BuildPath(state.pose, goal, world, distance, target.force_path, &direct_path);
    publish_path_preview(state.id, path, direct_path);
    Pose2D lookahead = goal;
    if (path.size() >= 2) {
      lookahead = path[1];
    } else if (!direct_path.empty()) {
      lookahead = direct_path.back();
    }

    const double step_dx = lookahead.x - state.pose.x;
    const double step_dy = lookahead.y - state.pose.y;
    const double step_dist = std::hypot(step_dx, step_dy);
    if (step_dist < kEpsilon) {
      return std::nullopt;
    }

    const double dir_x = step_dx / step_dist;
    const double dir_y = step_dy / step_dist;
    const double desired_speed =
        std::min(nav_config_.max_speed, nav_config_.linear_gain * distance);

    ControlCommand command;
    command.has_velocity = true;
    command.velocity.vx = dir_x * desired_speed;
    command.velocity.vy = dir_y * desired_speed;

    const double target_theta = std::atan2(goal.y - state.pose.y, goal.x - state.pose.x);
    double diff = normalize_angle(target_theta - state.pose.theta);
    double omega = diff * nav_config_.angular_gain;
    omega = std::clamp(omega, -nav_config_.max_angular_speed,
                       nav_config_.max_angular_speed);
    command.velocity.omega = omega;
    command.kick = false;
    command.dribbler = false;
    return command;
  }

  NavigationModule &module_for_robot(uint32_t robot_id) {
    auto it = modules_.find(robot_id);
    if (it == modules_.end()) {
      auto module = std::make_unique<NavigationModule>(robot_id, nav_config_);
      it = modules_.emplace(robot_id, std::move(module)).first;
    }
    return *it->second;
  }

  void send_command(uint32_t robot_id, const ControlCommand &command) {
    if (!command_client_->service_is_ready()) {
      if (!command_client_->wait_for_service(std::chrono::milliseconds(10))) {
        RCLCPP_WARN_THROTTLE(
            get_logger(), *get_clock(), 2000,
            "Robot command service '%s' unavailable.", robot_service_name_.c_str());
        return;
      }
    }
    auto request = std::make_shared<SendRobotCommand::Request>();
    request->robot_id = robot_id;
    request->command = command;
    command_client_->async_send_request(request);
  }

  void publish_path_preview(uint32_t robot_id,
                            const std::vector<Pose2D> &path,
                            const std::vector<Pose2D> &direct) {
    if (!path_preview_pub_) {
      return;
    }
    PathPreview msg;
    msg.robot_id = robot_id;
    msg.path = path;
    msg.direct = direct;
    path_preview_pub_->publish(msg);
  }

  rclcpp::Subscription<WorldState>::SharedPtr world_sub_;
  rclcpp::Subscription<RobotTarget>::SharedPtr target_sub_;
  rclcpp::Client<SendRobotCommand>::SharedPtr command_client_;
  rclcpp::Client<GetNavigationConfig>::SharedPtr nav_client_;
  rclcpp::TimerBase::SharedPtr config_timer_;
  rclcpp::Publisher<PathPreview>::SharedPtr path_preview_pub_;

  std::unordered_map<uint32_t, TargetEntry> targets_;
  std::unordered_map<uint32_t, std::unique_ptr<NavigationModule>> modules_;
  NavigationConfig nav_config_{};
  bool config_ready_{false};
  double target_timeout_s_{0.5};
  std::string robot_service_name_;
  std::string nav_service_name_;
};

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<NavigationNode>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
