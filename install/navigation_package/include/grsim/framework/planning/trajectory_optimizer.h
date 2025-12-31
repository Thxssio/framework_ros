#pragma once

#include <cstdint>
#include <vector>

#include "interface_package/msg/robot_state.hpp"
#include "interface_package/msg/pose2_d.hpp"

namespace grsim::framework {

using Pose2D = interface_package::msg::Pose2D;
using RobotState = interface_package::msg::RobotState;

class TrajectoryOptimizer {
 public:
  TrajectoryOptimizer(double weight_smooth, double weight_jerk,
                      double weight_obstacle, double step_size,
                      int iterations, double clearance);

  std::vector<Pose2D> Optimize(const std::vector<Pose2D>& initial,
                               const std::vector<RobotState>& friendly,
                               const std::vector<RobotState>& opponent,
                               std::uint32_t ignore_robot_id) const;

 private:
  void ApplyObstaclePenalty(Pose2D& point, const RobotState& obstacle,
                            double influence_radius) const;

  double weight_smooth_ = 0.0;
  double weight_jerk_ = 0.0;
  double weight_obstacle_ = 0.0;
  double step_size_ = 0.0;
  int iterations_ = 0;
  double clearance_ = 0.1;
};

}  // namespace grsim::framework
