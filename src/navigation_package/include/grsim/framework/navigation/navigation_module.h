#pragma once

#include <cstdint>
#include <vector>

#include "interface_package/msg/navigation_config.hpp"
#include "interface_package/msg/world_state.hpp"

#include "grsim/framework/planning/path_planner.h"
#include "grsim/framework/planning/trajectory_optimizer.h"

namespace grsim::framework {

using NavigationConfig = interface_package::msg::NavigationConfig;
using WorldState = interface_package::msg::WorldState;
using RobotState = interface_package::msg::RobotState;
using Pose2D = interface_package::msg::Pose2D;
using FieldDimensions = interface_package::msg::FieldDimensions;

class NavigationModule {
 public:
  NavigationModule(std::uint32_t robot_id, const NavigationConfig& config);

  void SetNavigationConfig(const NavigationConfig& config);
  void SetAllowGoalArea(bool allow) { allow_goal_area_ = allow; }
  void SetAvoidBallObstacle(bool avoid) { avoid_ball_obstacle_ = avoid; }

  std::vector<Pose2D> BuildPath(const Pose2D& start, const Pose2D& goal,
                                const WorldState& world,
                                double distance_estimate, bool force_path,
                                std::vector<Pose2D>* direct_path) const;

  static double DistancePointToSegment(const Pose2D& start, const Pose2D& end,
                                       const Pose2D& point);

  bool HasObstacleNearSegment(const Pose2D& start, const Pose2D& end,
                              const WorldState& world, double radius) const;

  Pose2D ClampGoalOutsideGoalArea(const Pose2D& goal,
                                  const FieldDimensions& field) const;

 private:
  std::vector<Pose2D> use_buffered_or(const std::vector<Pose2D>& fallback) const;
  mutable Pose2D buffered_goal_{};

  std::uint32_t robot_id_ = 0;
  NavigationConfig config_{};
  double stop_distance_ = 0.0;
  double linear_gain_ = 0.0;
  double max_speed_ = 0.0;
  double max_angular_speed_ = 0.0;
  double angular_gain_ = 0.0;

  mutable AStarPlanner planner_;
  mutable TrajectoryOptimizer optimizer_;
  mutable std::vector<Pose2D> buffered_path_;
  mutable bool has_buffered_path_ = false;
  bool allow_goal_area_ = true;
  bool avoid_ball_obstacle_ = true;
};

}  // namespace grsim::framework
