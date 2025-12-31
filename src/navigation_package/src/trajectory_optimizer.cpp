#include "grsim/framework/planning/trajectory_optimizer.h"

#include <algorithm>
#include <cmath>

namespace grsim::framework {

TrajectoryOptimizer::TrajectoryOptimizer(double weight_smooth, double weight_jerk,
                                         double weight_obstacle, double step_size,
                                         int iterations, double clearance)
    : weight_smooth_(weight_smooth),
      weight_jerk_(weight_jerk),
      weight_obstacle_(weight_obstacle),
      step_size_(step_size),
      iterations_(iterations),
      clearance_(clearance) {}

std::vector<Pose2D> TrajectoryOptimizer::Optimize(
    const std::vector<Pose2D>& initial, const std::vector<RobotState>& friendly,
    const std::vector<RobotState>& opponent, std::uint32_t ignore_robot_id) const {
  if (initial.size() < 3) {
    return initial;
  }

  std::vector<Pose2D> path = initial;
  const std::vector<Pose2D> original = initial;

  for (int iter = 0; iter < iterations_; ++iter) {
    for (std::size_t i = 1; i + 1 < path.size(); ++i) {
      auto& current = path[i];
      const auto& prev = path[i - 1];
      const auto& next = path[i + 1];
      Pose2D grad{};

      grad.x += weight_smooth_ * (2.0 * current.x - prev.x - next.x);
      grad.y += weight_smooth_ * (2.0 * current.y - prev.y - next.y);

      if (i >= 2 && i + 2 < path.size()) {
        const auto& prev2 = path[i - 2];
        const auto& next2 = path[i + 2];
        grad.x += weight_jerk_ *
                  (current.x * 6.0 - 4.0 * (prev.x + next.x) + prev2.x + next2.x);
        grad.y += weight_jerk_ *
                  (current.y * 6.0 - 4.0 * (prev.y + next.y) + prev2.y + next2.y);
      }

      grad.x += 0.1 * (current.x - original[i].x);
      grad.y += 0.1 * (current.y - original[i].y);

      const double influence = clearance_;
      for (const auto& robot : friendly) {
        if (robot.id == ignore_robot_id) {
          continue;
        }
        ApplyObstaclePenalty(current, robot, influence);
      }
      for (const auto& robot : opponent) {
        ApplyObstaclePenalty(current, robot, influence);
      }

      current.x -= step_size_ * grad.x;
      current.y -= step_size_ * grad.y;
    }
  }

  return path;
}

void TrajectoryOptimizer::ApplyObstaclePenalty(Pose2D& point,
                                               const RobotState& obstacle,
                                               double influence_radius) const {
  const double dx = point.x - obstacle.pose.x;
  const double dy = point.y - obstacle.pose.y;
  const double dist = std::hypot(dx, dy);
  if (dist >= influence_radius || dist <= 1e-5) {
    return;
  }

  const double penetration = influence_radius - dist;
  const double scale = weight_obstacle_ * penetration / influence_radius;
  point.x += (dx / dist) * scale;
  point.y += (dy / dist) * scale;
}

}  // namespace grsim::framework
