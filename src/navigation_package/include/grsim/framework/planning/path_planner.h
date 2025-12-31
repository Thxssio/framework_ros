#pragma once

#include <cstdint>
#include <optional>
#include <queue>
#include <utility>
#include <vector>

#include "interface_package/msg/field_dimensions.hpp"
#include "interface_package/msg/robot_state.hpp"
#include "interface_package/msg/world_state.hpp"

namespace grsim::framework {

using Pose2D = interface_package::msg::Pose2D;
using RobotState = interface_package::msg::RobotState;
using FieldDimensions = interface_package::msg::FieldDimensions;
using WorldState = interface_package::msg::WorldState;

struct PathPoint {
  Pose2D pose;
  double time_sec = 0.0;
};

struct PlanResult {
  bool valid = false;
  std::vector<PathPoint> points;
};

class StraightLinePlanner {
 public:
  PlanResult Plan(const Pose2D& start, const Pose2D& goal, double duration,
                  int steps) const;
};

class AStarPlanner {
 public:
  AStarPlanner(double resolution, double safety_margin, bool allow_diagonals);

  PlanResult Plan(const Pose2D& start, const Pose2D& goal,
                  const FieldDimensions& field,
                  const std::vector<RobotState>& friendly,
                  const std::vector<RobotState>& opponent,
                  std::uint32_t ignore_robot_id, double duration,
                  bool block_goal_areas) const;

 private:
  void PrepareBuffers(int rows, int cols) const;

  double resolution_ = 0.1;
  double safety_margin_ = 0.1;
  bool allow_diagonals_ = true;

  mutable std::vector<int> grid_;
  mutable std::vector<int> closed_;
  mutable std::vector<double> g_score_;
  mutable std::vector<int> parent_;
  mutable std::vector<std::pair<int, int>> path_buffer_;
};

}  // namespace grsim::framework
