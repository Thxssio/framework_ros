#include "grsim/framework/planning/path_planner.h"

#include <algorithm>
#include <cmath>
#include <limits>

namespace grsim::framework {

PlanResult StraightLinePlanner::Plan(const Pose2D& start, const Pose2D& goal,
                                     double duration, int steps) const {
  PlanResult result;
  if (steps <= 1 || duration <= 0.0) {
    return result;
  }

  result.points.reserve(static_cast<std::size_t>(steps));
  for (int i = 0; i < steps; ++i) {
    const double alpha = static_cast<double>(i) / static_cast<double>(steps - 1);
    Pose2D pose;
    pose.x = start.x + (goal.x - start.x) * alpha;
    pose.y = start.y + (goal.y - start.y) * alpha;
    pose.theta = start.theta + (goal.theta - start.theta) * alpha;

    result.points.push_back(PathPoint{pose, alpha * duration});
  }

  result.valid = true;
  return result;
}

namespace {
struct Node {
  int row;
  int col;
  double g = 0.0;
  double h = 0.0;
  double f = 0.0;
};

struct NodeGreater {
  bool operator()(const Node& lhs, const Node& rhs) const { return lhs.f > rhs.f; }
};

double Heuristic(const Node& a, const Node& b) {
  return std::abs(a.row - b.row) + std::abs(a.col - b.col);
}

constexpr double kDefaultPenaltyDepth = 0.5;
constexpr double kDefaultPenaltyWidth = 1.35;
}  // namespace

AStarPlanner::AStarPlanner(double resolution, double safety_margin,
                           bool allow_diagonals)
    : resolution_(resolution),
      safety_margin_(safety_margin),
      allow_diagonals_(allow_diagonals) {}

void AStarPlanner::PrepareBuffers(int rows, int cols) const {
  const std::size_t total =
      static_cast<std::size_t>(rows) * static_cast<std::size_t>(cols);
  if (grid_.size() != total) {
    grid_.assign(total, 0);
    closed_.assign(total, 0);
    g_score_.assign(total, std::numeric_limits<double>::infinity());
    parent_.assign(total, -1);
  } else {
    std::fill(grid_.begin(), grid_.end(), 0);
    std::fill(closed_.begin(), closed_.end(), 0);
    std::fill(g_score_.begin(), g_score_.end(),
              std::numeric_limits<double>::infinity());
    std::fill(parent_.begin(), parent_.end(), -1);
  }
  path_buffer_.clear();
  if (path_buffer_.capacity() < total) {
    path_buffer_.reserve(total);
  }
}

PlanResult AStarPlanner::Plan(const Pose2D& start, const Pose2D& goal,
                              const FieldDimensions& field,
                              const std::vector<RobotState>& friendly,
                              const std::vector<RobotState>& opponent,
                              std::uint32_t ignore_robot_id, double duration,
                              bool block_goal_areas) const {
  PlanResult result;
  const double length = field.length > 0 ? field.length : 9.0;
  const double width = field.width > 0 ? field.width : 6.0;
  const double min_x = -length / 2.0;
  const double min_y = -width / 2.0;
  const int rows =
      std::max(1, static_cast<int>(std::ceil(length / resolution_)) + 1);
  const int cols =
      std::max(1, static_cast<int>(std::ceil(width / resolution_)) + 1);
  PrepareBuffers(rows, cols);

  const auto to_grid = [&](double x, double y) -> std::optional<Node> {
    const int row = static_cast<int>(std::floor((x - min_x) / resolution_));
    const int col = static_cast<int>(std::floor((y - min_y) / resolution_));
    if (row < 0 || row >= rows || col < 0 || col >= cols) {
      return std::nullopt;
    }
    return Node{row, col};
  };

  auto start_node = to_grid(start.x, start.y);
  auto goal_node = to_grid(goal.x, goal.y);
  if (!start_node || !goal_node) {
    return result;
  }

  const auto to_index = [cols](int row, int col) -> std::size_t {
    return static_cast<std::size_t>(row) * static_cast<std::size_t>(cols) +
           static_cast<std::size_t>(col);
  };

  constexpr double kRobotDiameter = 0.18;
  constexpr double kDefaultPenaltyDepth = 0.5;
  constexpr double kDefaultPenaltyWidth = 1.35;
  const double inflation_radius = std::max(kRobotDiameter, safety_margin_);
  const int inflation_cells =
      std::max(1, static_cast<int>(std::ceil(inflation_radius / resolution_)));

  auto mark_obstacle = [&](const RobotState& robot) {
    if (robot.id == ignore_robot_id) {
      return;
    }
    auto node = to_grid(robot.pose.x, robot.pose.y);
    if (!node) {
      return;
    }
    for (int dr = -inflation_cells; dr <= inflation_cells; ++dr) {
      for (int dc = -inflation_cells; dc <= inflation_cells; ++dc) {
        const int rr = node->row + dr;
        const int cc = node->col + dc;
        if (rr < 0 || rr >= rows || cc < 0 || cc >= cols) {
          continue;
        }
        grid_[to_index(rr, cc)] = 1;
      }
    }
  };

  for (const auto& robot : friendly) {
    mark_obstacle(robot);
  }
  for (const auto& robot : opponent) {
    mark_obstacle(robot);
  }

  if (block_goal_areas) {
    const double penalty_depth = kDefaultPenaltyDepth;
    const double penalty_width = kDefaultPenaltyWidth;
    const double half_penalty_width = penalty_width / 2.0;
    auto block_region = [&](double min_x_rect, double max_x_rect) {
      for (int r = 0; r < rows; ++r) {
        const double cell_x =
            min_x + (static_cast<double>(r) + 0.5) * resolution_;
        if (cell_x < min_x_rect || cell_x > max_x_rect) {
          continue;
        }
        for (int c = 0; c < cols; ++c) {
          const double cell_y =
              min_y + (static_cast<double>(c) + 0.5) * resolution_;
          if (cell_y < -half_penalty_width ||
              cell_y > half_penalty_width) {
            continue;
          }
          grid_[to_index(r, c)] = 1;
        }
      }
    };
    const double positive_min_x = length / 2.0 - penalty_depth;
    const double positive_max_x = length / 2.0;
    const double negative_min_x = -length / 2.0;
    const double negative_max_x = -length / 2.0 + penalty_depth;
    block_region(positive_min_x, positive_max_x);
    block_region(negative_min_x, negative_max_x);
  }

  const auto start_idx = to_index(start_node->row, start_node->col);
  const auto goal_idx = to_index(goal_node->row, goal_node->col);
  if (grid_[start_idx] != 0) {
    grid_[start_idx] = 0;
  }
  if (grid_[goal_idx] != 0) {
    grid_[goal_idx] = 0;
  }

  std::priority_queue<Node, std::vector<Node>, NodeGreater> open_set;

  Node start_cell = *start_node;
  start_cell.g = 0.0;
  start_cell.h = Heuristic(start_cell, *goal_node);
  start_cell.f = start_cell.h;
  g_score_[start_idx] = 0.0;
  open_set.push(start_cell);

  const int max_dirs = allow_diagonals_ ? 8 : 4;
  const int dir_r[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
  const int dir_c[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

  bool found = false;

  while (!open_set.empty()) {
    Node current = open_set.top();
    open_set.pop();
    const std::size_t current_idx = to_index(current.row, current.col);

    if (closed_[current_idx]) {
      continue;
    }
    closed_[current_idx] = 1;

    if (current.row == goal_node->row && current.col == goal_node->col) {
      found = true;
      break;
    }

    for (int dir = 0; dir < max_dirs; ++dir) {
      const int nr = current.row + dir_r[dir];
      const int nc = current.col + dir_c[dir];
      if (nr < 0 || nr >= rows || nc < 0 || nc >= cols) {
        continue;
      }
      const std::size_t neighbor_idx = to_index(nr, nc);
      if (grid_[neighbor_idx] != 0 || closed_[neighbor_idx]) {
        continue;
      }

      const bool diagonal = dir_r[dir] != 0 && dir_c[dir] != 0;
      const double cost = diagonal ? std::sqrt(2.0) : 1.0;
      const double tentative_g = g_score_[current_idx] + cost;
      if (tentative_g >= g_score_[neighbor_idx]) {
        continue;
      }

      Node neighbor{nr, nc};
      neighbor.g = tentative_g;
      neighbor.h = Heuristic(neighbor, *goal_node);
      neighbor.f = neighbor.g + neighbor.h;
      g_score_[neighbor_idx] = tentative_g;
      parent_[neighbor_idx] = static_cast<int>(current_idx);
      open_set.push(neighbor);
    }
  }

  if (!found) {
    return result;
  }

  std::size_t retrace_idx = goal_idx;
  path_buffer_.clear();
  while (retrace_idx != start_idx) {
    const int row = static_cast<int>(retrace_idx / cols);
    const int col = static_cast<int>(retrace_idx % cols);
    path_buffer_.emplace_back(row, col);
    const int parent_index = parent_[retrace_idx];
    if (parent_index < 0) {
      path_buffer_.clear();
      return result;
    }
    retrace_idx = static_cast<std::size_t>(parent_index);
  }
  path_buffer_.emplace_back(start_cell.row, start_cell.col);
  std::reverse(path_buffer_.begin(), path_buffer_.end());

  const double total_time = std::max(duration, 0.1);
  result.points.reserve(path_buffer_.size());
  for (std::size_t i = 0; i < path_buffer_.size(); ++i) {
    const auto& cell = path_buffer_[i];
    Pose2D pose;
    pose.x = min_x + (static_cast<double>(cell.first) + 0.5) * resolution_;
    pose.y = min_y + (static_cast<double>(cell.second) + 0.5) * resolution_;
    pose.theta = 0.0;
    const double alpha =
        static_cast<double>(i) / std::max<std::size_t>(1, path_buffer_.size() - 1);
    result.points.push_back(PathPoint{pose, alpha * total_time});
  }
  result.valid = true;
  return result;
}

}  // namespace grsim::framework
