// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_package:msg/NavigationConfig.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__NAVIGATION_CONFIG__BUILDER_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__NAVIGATION_CONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_package/msg/detail/navigation_config__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_package
{

namespace msg
{

namespace builder
{

class Init_NavigationConfig_max_segment_length
{
public:
  explicit Init_NavigationConfig_max_segment_length(::interface_package::msg::NavigationConfig & msg)
  : msg_(msg)
  {}
  ::interface_package::msg::NavigationConfig max_segment_length(::interface_package::msg::NavigationConfig::_max_segment_length_type arg)
  {
    msg_.max_segment_length = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::msg::NavigationConfig msg_;
};

class Init_NavigationConfig_force_path_planning
{
public:
  explicit Init_NavigationConfig_force_path_planning(::interface_package::msg::NavigationConfig & msg)
  : msg_(msg)
  {}
  Init_NavigationConfig_max_segment_length force_path_planning(::interface_package::msg::NavigationConfig::_force_path_planning_type arg)
  {
    msg_.force_path_planning = std::move(arg);
    return Init_NavigationConfig_max_segment_length(msg_);
  }

private:
  ::interface_package::msg::NavigationConfig msg_;
};

class Init_NavigationConfig_optimizer_clearance
{
public:
  explicit Init_NavigationConfig_optimizer_clearance(::interface_package::msg::NavigationConfig & msg)
  : msg_(msg)
  {}
  Init_NavigationConfig_force_path_planning optimizer_clearance(::interface_package::msg::NavigationConfig::_optimizer_clearance_type arg)
  {
    msg_.optimizer_clearance = std::move(arg);
    return Init_NavigationConfig_force_path_planning(msg_);
  }

private:
  ::interface_package::msg::NavigationConfig msg_;
};

class Init_NavigationConfig_optimizer_iterations
{
public:
  explicit Init_NavigationConfig_optimizer_iterations(::interface_package::msg::NavigationConfig & msg)
  : msg_(msg)
  {}
  Init_NavigationConfig_optimizer_clearance optimizer_iterations(::interface_package::msg::NavigationConfig::_optimizer_iterations_type arg)
  {
    msg_.optimizer_iterations = std::move(arg);
    return Init_NavigationConfig_optimizer_clearance(msg_);
  }

private:
  ::interface_package::msg::NavigationConfig msg_;
};

class Init_NavigationConfig_optimizer_step_size
{
public:
  explicit Init_NavigationConfig_optimizer_step_size(::interface_package::msg::NavigationConfig & msg)
  : msg_(msg)
  {}
  Init_NavigationConfig_optimizer_iterations optimizer_step_size(::interface_package::msg::NavigationConfig::_optimizer_step_size_type arg)
  {
    msg_.optimizer_step_size = std::move(arg);
    return Init_NavigationConfig_optimizer_iterations(msg_);
  }

private:
  ::interface_package::msg::NavigationConfig msg_;
};

class Init_NavigationConfig_optimizer_weight_obstacle
{
public:
  explicit Init_NavigationConfig_optimizer_weight_obstacle(::interface_package::msg::NavigationConfig & msg)
  : msg_(msg)
  {}
  Init_NavigationConfig_optimizer_step_size optimizer_weight_obstacle(::interface_package::msg::NavigationConfig::_optimizer_weight_obstacle_type arg)
  {
    msg_.optimizer_weight_obstacle = std::move(arg);
    return Init_NavigationConfig_optimizer_step_size(msg_);
  }

private:
  ::interface_package::msg::NavigationConfig msg_;
};

class Init_NavigationConfig_optimizer_weight_jerk
{
public:
  explicit Init_NavigationConfig_optimizer_weight_jerk(::interface_package::msg::NavigationConfig & msg)
  : msg_(msg)
  {}
  Init_NavigationConfig_optimizer_weight_obstacle optimizer_weight_jerk(::interface_package::msg::NavigationConfig::_optimizer_weight_jerk_type arg)
  {
    msg_.optimizer_weight_jerk = std::move(arg);
    return Init_NavigationConfig_optimizer_weight_obstacle(msg_);
  }

private:
  ::interface_package::msg::NavigationConfig msg_;
};

class Init_NavigationConfig_optimizer_weight_smooth
{
public:
  explicit Init_NavigationConfig_optimizer_weight_smooth(::interface_package::msg::NavigationConfig & msg)
  : msg_(msg)
  {}
  Init_NavigationConfig_optimizer_weight_jerk optimizer_weight_smooth(::interface_package::msg::NavigationConfig::_optimizer_weight_smooth_type arg)
  {
    msg_.optimizer_weight_smooth = std::move(arg);
    return Init_NavigationConfig_optimizer_weight_jerk(msg_);
  }

private:
  ::interface_package::msg::NavigationConfig msg_;
};

class Init_NavigationConfig_collision_threshold
{
public:
  explicit Init_NavigationConfig_collision_threshold(::interface_package::msg::NavigationConfig & msg)
  : msg_(msg)
  {}
  Init_NavigationConfig_optimizer_weight_smooth collision_threshold(::interface_package::msg::NavigationConfig::_collision_threshold_type arg)
  {
    msg_.collision_threshold = std::move(arg);
    return Init_NavigationConfig_optimizer_weight_smooth(msg_);
  }

private:
  ::interface_package::msg::NavigationConfig msg_;
};

class Init_NavigationConfig_planner_clearance
{
public:
  explicit Init_NavigationConfig_planner_clearance(::interface_package::msg::NavigationConfig & msg)
  : msg_(msg)
  {}
  Init_NavigationConfig_collision_threshold planner_clearance(::interface_package::msg::NavigationConfig::_planner_clearance_type arg)
  {
    msg_.planner_clearance = std::move(arg);
    return Init_NavigationConfig_collision_threshold(msg_);
  }

private:
  ::interface_package::msg::NavigationConfig msg_;
};

class Init_NavigationConfig_planner_resolution
{
public:
  explicit Init_NavigationConfig_planner_resolution(::interface_package::msg::NavigationConfig & msg)
  : msg_(msg)
  {}
  Init_NavigationConfig_planner_clearance planner_resolution(::interface_package::msg::NavigationConfig::_planner_resolution_type arg)
  {
    msg_.planner_resolution = std::move(arg);
    return Init_NavigationConfig_planner_clearance(msg_);
  }

private:
  ::interface_package::msg::NavigationConfig msg_;
};

class Init_NavigationConfig_angular_gain
{
public:
  explicit Init_NavigationConfig_angular_gain(::interface_package::msg::NavigationConfig & msg)
  : msg_(msg)
  {}
  Init_NavigationConfig_planner_resolution angular_gain(::interface_package::msg::NavigationConfig::_angular_gain_type arg)
  {
    msg_.angular_gain = std::move(arg);
    return Init_NavigationConfig_planner_resolution(msg_);
  }

private:
  ::interface_package::msg::NavigationConfig msg_;
};

class Init_NavigationConfig_max_angular_speed
{
public:
  explicit Init_NavigationConfig_max_angular_speed(::interface_package::msg::NavigationConfig & msg)
  : msg_(msg)
  {}
  Init_NavigationConfig_angular_gain max_angular_speed(::interface_package::msg::NavigationConfig::_max_angular_speed_type arg)
  {
    msg_.max_angular_speed = std::move(arg);
    return Init_NavigationConfig_angular_gain(msg_);
  }

private:
  ::interface_package::msg::NavigationConfig msg_;
};

class Init_NavigationConfig_max_speed
{
public:
  explicit Init_NavigationConfig_max_speed(::interface_package::msg::NavigationConfig & msg)
  : msg_(msg)
  {}
  Init_NavigationConfig_max_angular_speed max_speed(::interface_package::msg::NavigationConfig::_max_speed_type arg)
  {
    msg_.max_speed = std::move(arg);
    return Init_NavigationConfig_max_angular_speed(msg_);
  }

private:
  ::interface_package::msg::NavigationConfig msg_;
};

class Init_NavigationConfig_linear_gain
{
public:
  explicit Init_NavigationConfig_linear_gain(::interface_package::msg::NavigationConfig & msg)
  : msg_(msg)
  {}
  Init_NavigationConfig_max_speed linear_gain(::interface_package::msg::NavigationConfig::_linear_gain_type arg)
  {
    msg_.linear_gain = std::move(arg);
    return Init_NavigationConfig_max_speed(msg_);
  }

private:
  ::interface_package::msg::NavigationConfig msg_;
};

class Init_NavigationConfig_stop_distance
{
public:
  Init_NavigationConfig_stop_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigationConfig_linear_gain stop_distance(::interface_package::msg::NavigationConfig::_stop_distance_type arg)
  {
    msg_.stop_distance = std::move(arg);
    return Init_NavigationConfig_linear_gain(msg_);
  }

private:
  ::interface_package::msg::NavigationConfig msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::msg::NavigationConfig>()
{
  return interface_package::msg::builder::Init_NavigationConfig_stop_distance();
}

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__NAVIGATION_CONFIG__BUILDER_HPP_
