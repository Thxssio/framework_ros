#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"

#include "interface_package/msg/navigation_config.hpp"
#include "interface_package/srv/get_navigation_config.hpp"
#include "interface_package/srv/set_navigation_config.hpp"

using interface_package::msg::NavigationConfig;
using interface_package::srv::GetNavigationConfig;
using interface_package::srv::SetNavigationConfig;

class NavigationManager : public rclcpp::Node {
public:
  NavigationManager() : Node("navigation_manager") {
    config_ = default_config();
    declare_config_parameters();

    get_service_ = create_service<GetNavigationConfig>(
        "~/get_navigation_config",
        [this](const std::shared_ptr<GetNavigationConfig::Request> /*request*/,
               std::shared_ptr<GetNavigationConfig::Response> response) {
          response->config = config_;
        });

    set_service_ = create_service<SetNavigationConfig>(
        "~/set_navigation_config",
        [this](const std::shared_ptr<SetNavigationConfig::Request> request,
               std::shared_ptr<SetNavigationConfig::Response> response) {
          config_ = request->config;
          response->ok = true;
          response->message = "Navigation config updated.";
          RCLCPP_INFO(get_logger(), "Navigation config updated via service call.");
        });

    RCLCPP_INFO(get_logger(), "Navigation manager ready with services '%s' and '%s'.",
                get_service_->get_service_name(), set_service_->get_service_name());
  }

private:
  NavigationConfig default_config() {
    NavigationConfig cfg;
    cfg.stop_distance = 0.2;
    cfg.linear_gain = 2.0;
    cfg.max_speed = 1.0;
    cfg.max_angular_speed = 3.0;
    cfg.angular_gain = 4.0;
    cfg.planner_resolution = 0.1;
    cfg.planner_clearance = 0.15;
    cfg.collision_threshold = 0.25;
    cfg.optimizer_weight_smooth = 0.1;
    cfg.optimizer_weight_jerk = 0.05;
    cfg.optimizer_weight_obstacle = 0.5;
    cfg.optimizer_step_size = 0.1;
    cfg.optimizer_iterations = 40;
    cfg.optimizer_clearance = 0.25;
    cfg.force_path_planning = false;
    cfg.max_segment_length = 2.0;
    return cfg;
  }

  void declare_config_parameters() {
    auto set_double = [this](const std::string &name, double value) {
      this->declare_parameter(name, value);
      return this->get_parameter(name).as_double();
    };
    auto set_int = [this](const std::string &name, int value) {
      this->declare_parameter(name, value);
      return this->get_parameter(name).as_int();
    };
    auto set_bool = [this](const std::string &name, bool value) {
      this->declare_parameter(name, value);
      return this->get_parameter(name).as_bool();
    };

    config_.stop_distance = set_double("stop_distance", config_.stop_distance);
    config_.linear_gain = set_double("linear_gain", config_.linear_gain);
    config_.max_speed = set_double("max_speed", config_.max_speed);
    config_.max_angular_speed = set_double("max_angular_speed", config_.max_angular_speed);
    config_.angular_gain = set_double("angular_gain", config_.angular_gain);
    config_.planner_resolution = set_double("planner_resolution", config_.planner_resolution);
    config_.planner_clearance = set_double("planner_clearance", config_.planner_clearance);
    config_.collision_threshold = set_double("collision_threshold", config_.collision_threshold);
    config_.optimizer_weight_smooth =
        set_double("optimizer_weight_smooth", config_.optimizer_weight_smooth);
    config_.optimizer_weight_jerk =
        set_double("optimizer_weight_jerk", config_.optimizer_weight_jerk);
    config_.optimizer_weight_obstacle =
        set_double("optimizer_weight_obstacle", config_.optimizer_weight_obstacle);
    config_.optimizer_step_size =
        set_double("optimizer_step_size", config_.optimizer_step_size);
    config_.optimizer_iterations =
        set_int("optimizer_iterations", config_.optimizer_iterations);
    config_.optimizer_clearance =
        set_double("optimizer_clearance", config_.optimizer_clearance);
    config_.force_path_planning =
        set_bool("force_path_planning", config_.force_path_planning);
    config_.max_segment_length =
        set_double("max_segment_length", config_.max_segment_length);
  }

  NavigationConfig config_;
  rclcpp::Service<GetNavigationConfig>::SharedPtr get_service_;
  rclcpp::Service<SetNavigationConfig>::SharedPtr set_service_;
};

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<NavigationManager>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}

