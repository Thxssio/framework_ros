#include "grsim/framework/navigation/navigation_module.h"

#include <algorithm>
#include <cmath>
#include <limits>

namespace grsim::framework {

namespace {
constexpr double kDefaultFieldLength = 9.0;
constexpr double kDefaultPenaltyDepth = 0.5;
constexpr double kDefaultPenaltyWidth = 1.35;
constexpr double kGoalAreaClearance = 0.095;
}  // namespace

NavigationModule::NavigationModule(std::uint32_t robot_id,
                                   const NavigationConfig& config)
    : robot_id_(robot_id),
      config_(config),
      stop_distance_(config.stop_distance),
      linear_gain_(config.linear_gain),
      max_speed_(config.max_speed),
      max_angular_speed_(config.max_angular_speed),
      angular_gain_(config.angular_gain),
      planner_(config.planner_resolution, config.planner_clearance, true),
      optimizer_(config.optimizer_weight_smooth, config.optimizer_weight_jerk,
                 config.optimizer_weight_obstacle, config.optimizer_step_size,
                 config.optimizer_iterations, config.optimizer_clearance) {}

void NavigationModule::SetNavigationConfig(const NavigationConfig& config) {
  config_ = config;
  stop_distance_ = config.stop_distance;
  linear_gain_ = config.linear_gain;
  max_speed_ = config.max_speed;
  max_angular_speed_ = config.max_angular_speed;
  angular_gain_ = config.angular_gain;
  planner_ = AStarPlanner(config.planner_resolution, config.planner_clearance,
                          true);
  optimizer_ = TrajectoryOptimizer(
      config.optimizer_weight_smooth, config.optimizer_weight_jerk,
      config.optimizer_weight_obstacle, config.optimizer_step_size,
      config.optimizer_iterations, config.optimizer_clearance);
  buffered_path_.clear();
  has_buffered_path_ = false;
  buffered_goal_ = Pose2D();
}

double NavigationModule::DistancePointToSegment(const Pose2D& start,
                                                const Pose2D& end,
                                                const Pose2D& point) {
  const double vx = end.x - start.x;
  const double vy = end.y - start.y;
  const double segment_len_sq = vx * vx + vy * vy;
  if (segment_len_sq <= 1e-6) {
    return std::hypot(point.x - start.x, point.y - start.y);
  }
  const double t =
      std::clamp(((point.x - start.x) * vx + (point.y - start.y) * vy) /
                     segment_len_sq,
                 0.0, 1.0);
  const double proj_x = start.x + t * vx;
  const double proj_y = start.y + t * vy;
  return std::hypot(point.x - proj_x, point.y - proj_y);
}

bool NavigationModule::HasObstacleNearSegment(
    const Pose2D& start, const Pose2D& end, const WorldState& world,
    double radius) const {
  const auto check_ball = [&]() {
    if (!avoid_ball_obstacle_ || !world.ball.visible) {
      return false;
    }
    return DistancePointToSegment(start, end, world.ball.pose) < radius;
  };

  const auto check = [&](const std::vector<RobotState>& robots) {
    for (const auto& robot : robots) {
      if (robot.id == robot_id_) {
        continue;
      }
      if (DistancePointToSegment(start, end, robot.pose) < radius) {
        return true;
      }
    }
    return false;
  };
  return check(world.friendly) || check(world.opponent) || check_ball();
}

std::vector<Pose2D> NavigationModule::BuildPath(
    const Pose2D& start, const Pose2D& goal, const WorldState& world,
    double distance_estimate, bool force_path,
    std::vector<Pose2D>* direct_path) const {
  (void)distance_estimate;
  Pose2D planning_goal = goal;
  if (!allow_goal_area_) {
    planning_goal = ClampGoalOutsideGoalArea(goal, world.field);
  }
  double planning_distance =
      std::hypot(planning_goal.x - start.x, planning_goal.y - start.y);

  if (direct_path) {
    direct_path->clear();
    direct_path->push_back(start);
    direct_path->push_back(planning_goal);
  }

  const double max_segment = std::max(0.0, config_.max_segment_length);
  if (max_segment > 0.0 && planning_distance > max_segment) {
    const double ratio = max_segment / planning_distance;
    planning_goal.x = start.x + (planning_goal.x - start.x) * ratio;
    planning_goal.y = start.y + (planning_goal.y - start.y) * ratio;
    planning_distance = max_segment;
    if (direct_path) {
      (*direct_path)[1] = planning_goal;
    }
  }

  std::vector<Pose2D> fallback;
  fallback.push_back(start);
  fallback.push_back(planning_goal);

  const auto store_buffer =
      [&](const std::vector<Pose2D>& path) {
        buffered_path_ = path;
        if (!buffered_path_.empty()) {
          buffered_goal_ = planning_goal;
          has_buffered_path_ = true;
        } else {
          has_buffered_path_ = false;
        }
      };

  const auto run_plan =
      [&](const Pose2D& from, const Pose2D& to)
      -> std::pair<std::vector<Pose2D>, bool> {
    std::vector<RobotState> friendly = world.friendly;
    std::vector<RobotState> opponent = world.opponent;
    if (avoid_ball_obstacle_ && world.ball.visible) {
      RobotState obstacle_ball;
      obstacle_ball.id = std::numeric_limits<std::uint32_t>::max();
      obstacle_ball.pose = world.ball.pose;
      friendly.push_back(obstacle_ball);
    }
    std::vector<Pose2D> raw;
    const double seg_dist = std::hypot(to.x - from.x, to.y - from.y);
    const double plan_duration =
        std::max(seg_dist / std::max(0.1, max_speed_), 0.5);
    const auto plan =
        planner_.Plan(from, to, world.field, friendly, opponent, robot_id_,
                      plan_duration, !allow_goal_area_);
    if (plan.valid) {
      raw.reserve(plan.points.size());
      for (const auto& point : plan.points) {
        raw.push_back(point.pose);
      }
    } else {
      raw.push_back(from);
      raw.push_back(to);
    }
    auto optimized = optimizer_.Optimize(raw, world.friendly, world.opponent,
                                         robot_id_);
    if (optimized.empty()) {
      optimized = raw;
    }
    return {optimized, plan.valid};
  };

  const bool need_path =
      force_path || config_.force_path_planning ||
      HasObstacleNearSegment(start, planning_goal, world,
                             config_.collision_threshold);
  if (!need_path) {
    return fallback;
  }

  auto [direct_segment, direct_valid] = run_plan(start, planning_goal);
  if (direct_valid) {
    store_buffer(direct_segment);
    return direct_segment;
  }

  const double segment_limit =
      std::max(0.2, config_.max_segment_length);

  const auto make_pose = [](double x, double y, double theta) {
    Pose2D pose;
    pose.x = x;
    pose.y = y;
    pose.theta = theta;
    return pose;
  };

  const Pose2D center = make_pose(0.0, 0.0, planning_goal.theta);
  const Pose2D axis_x = make_pose(planning_goal.x, start.y, planning_goal.theta);
  const Pose2D axis_y = make_pose(start.x, planning_goal.y, planning_goal.theta);
  const double length = world.field.length > 0.0 ? world.field.length : 9.0;
  const double width = world.field.width > 0.0 ? world.field.width : 6.0;
  const double margin = 1.0;
  const double half_x = length / 2.0 + margin;
  const double half_y = width / 2.0 + margin;

  const Pose2D corner_bl = make_pose(-half_x, -half_y, planning_goal.theta);
  const Pose2D corner_br = make_pose(half_x, -half_y, planning_goal.theta);
  const Pose2D corner_tr = make_pose(half_x, half_y, planning_goal.theta);
  const Pose2D corner_tl = make_pose(-half_x, half_y, planning_goal.theta);
  const Pose2D limit_x_pos = make_pose(segment_limit, start.y, planning_goal.theta);
  const Pose2D limit_x_neg = make_pose(-segment_limit, start.y, planning_goal.theta);
  const Pose2D limit_y_pos = make_pose(start.x, segment_limit, planning_goal.theta);
  const Pose2D limit_y_neg = make_pose(start.x, -segment_limit, planning_goal.theta);

  const std::vector<std::vector<Pose2D>> waypoint_sets = {
      {center},
      {axis_x},
      {axis_y},
      {limit_x_pos},
      {limit_x_neg},
      {limit_y_pos},
      {limit_y_neg},
      {corner_bl},
      {corner_br},
      {corner_tr},
      {corner_tl},
      {center, limit_x_pos},
      {center, limit_x_neg},
      {center, limit_y_pos},
      {center, limit_y_neg},
      {limit_x_pos, center},
      {limit_x_neg, center},
      {limit_y_pos, center},
      {limit_y_neg, center},
      {corner_bl, center},
      {corner_br, center},
      {corner_tr, center},
      {corner_tl, center}};

  for (const auto& waypoints : waypoint_sets) {
    std::vector<Pose2D> composed;
    Pose2D last = start;
    bool ok = true;
    for (const auto& waypoint : waypoints) {
      auto [segment, valid] = run_plan(last, waypoint);
      if (!valid) {
        ok = false;
        break;
      }
      if (composed.empty()) {
        composed = segment;
      } else {
        composed.insert(composed.end(), segment.begin() + 1, segment.end());
      }
      last = waypoint;
    }
    if (!ok) {
      continue;
    }
    auto [final_segment, final_valid] = run_plan(last, planning_goal);
    if (!final_valid) {
      continue;
    }
    if (composed.empty()) {
      composed = final_segment;
    } else {
      composed.insert(composed.end(), final_segment.begin() + 1,
                      final_segment.end());
    }
    store_buffer(composed);
    return composed;
  }

  return use_buffered_or(fallback);
}

std::vector<Pose2D> NavigationModule::use_buffered_or(
    const std::vector<Pose2D>& default_path) const {
  if (default_path.empty()) {
    return default_path;
  }
  if (!has_buffered_path_ || buffered_path_.size() < 2) {
    return default_path;
  }
  const double goal_delta =
      std::hypot(buffered_goal_.x - default_path.back().x,
                 buffered_goal_.y - default_path.back().y);
  if (goal_delta > std::max(0.5, config_.collision_threshold * 3.0)) {
    return default_path;
  }

  const Pose2D& start = default_path.front();
  std::size_t closest_index = 0;
  double closest_dist = std::numeric_limits<double>::infinity();
  for (std::size_t i = 0; i < buffered_path_.size(); ++i) {
    const double dist =
        std::hypot(buffered_path_[i].x - start.x, buffered_path_[i].y - start.y);
    if (dist < closest_dist) {
      closest_dist = dist;
      closest_index = i;
    }
  }

  std::vector<Pose2D> reused;
  reused.reserve(buffered_path_.size() - closest_index + 1);
  reused.push_back(start);
  reused.insert(
      reused.end(),
      buffered_path_.begin() +
          static_cast<std::vector<Pose2D>::difference_type>(closest_index),
      buffered_path_.end());
  if (!reused.empty()) {
    reused.back() = default_path.back();
  }
  return reused;
}

Pose2D NavigationModule::ClampGoalOutsideGoalArea(
    const Pose2D& goal, const FieldDimensions& field) const {
  Pose2D adjusted = goal;
  const double length = field.length > 0.0 ? field.length : kDefaultFieldLength;
  const double penalty_depth = kDefaultPenaltyDepth;
  const double penalty_width = kDefaultPenaltyWidth;
  const double half_penalty_width = penalty_width / 2.0;
  const double positive_boundary = length / 2.0 - penalty_depth;
  const double negative_boundary = -length / 2.0 + penalty_depth;
  const double positive_clamp =
      std::max(-length / 2.0, positive_boundary - kGoalAreaClearance);
  const double negative_clamp =
      std::min(length / 2.0, negative_boundary + kGoalAreaClearance);

  if (goal.x > positive_boundary &&
      std::abs(goal.y) <= half_penalty_width + kGoalAreaClearance) {
    adjusted.x = positive_clamp;
  } else if (goal.x < negative_boundary &&
             std::abs(goal.y) <= half_penalty_width + kGoalAreaClearance) {
    adjusted.x = negative_clamp;
  }
  return adjusted;
}

}  // namespace grsim::framework
