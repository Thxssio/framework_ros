// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface_package:msg/NavigationConfig.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__NAVIGATION_CONFIG__TRAITS_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__NAVIGATION_CONFIG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface_package/msg/detail/navigation_config__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interface_package
{

namespace msg
{

inline void to_flow_style_yaml(
  const NavigationConfig & msg,
  std::ostream & out)
{
  out << "{";
  // member: stop_distance
  {
    out << "stop_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_distance, out);
    out << ", ";
  }

  // member: linear_gain
  {
    out << "linear_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_gain, out);
    out << ", ";
  }

  // member: max_speed
  {
    out << "max_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_speed, out);
    out << ", ";
  }

  // member: max_angular_speed
  {
    out << "max_angular_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_angular_speed, out);
    out << ", ";
  }

  // member: angular_gain
  {
    out << "angular_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_gain, out);
    out << ", ";
  }

  // member: planner_resolution
  {
    out << "planner_resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.planner_resolution, out);
    out << ", ";
  }

  // member: planner_clearance
  {
    out << "planner_clearance: ";
    rosidl_generator_traits::value_to_yaml(msg.planner_clearance, out);
    out << ", ";
  }

  // member: collision_threshold
  {
    out << "collision_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_threshold, out);
    out << ", ";
  }

  // member: optimizer_weight_smooth
  {
    out << "optimizer_weight_smooth: ";
    rosidl_generator_traits::value_to_yaml(msg.optimizer_weight_smooth, out);
    out << ", ";
  }

  // member: optimizer_weight_jerk
  {
    out << "optimizer_weight_jerk: ";
    rosidl_generator_traits::value_to_yaml(msg.optimizer_weight_jerk, out);
    out << ", ";
  }

  // member: optimizer_weight_obstacle
  {
    out << "optimizer_weight_obstacle: ";
    rosidl_generator_traits::value_to_yaml(msg.optimizer_weight_obstacle, out);
    out << ", ";
  }

  // member: optimizer_step_size
  {
    out << "optimizer_step_size: ";
    rosidl_generator_traits::value_to_yaml(msg.optimizer_step_size, out);
    out << ", ";
  }

  // member: optimizer_iterations
  {
    out << "optimizer_iterations: ";
    rosidl_generator_traits::value_to_yaml(msg.optimizer_iterations, out);
    out << ", ";
  }

  // member: optimizer_clearance
  {
    out << "optimizer_clearance: ";
    rosidl_generator_traits::value_to_yaml(msg.optimizer_clearance, out);
    out << ", ";
  }

  // member: force_path_planning
  {
    out << "force_path_planning: ";
    rosidl_generator_traits::value_to_yaml(msg.force_path_planning, out);
    out << ", ";
  }

  // member: max_segment_length
  {
    out << "max_segment_length: ";
    rosidl_generator_traits::value_to_yaml(msg.max_segment_length, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigationConfig & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stop_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_distance, out);
    out << "\n";
  }

  // member: linear_gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_gain, out);
    out << "\n";
  }

  // member: max_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_speed, out);
    out << "\n";
  }

  // member: max_angular_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_angular_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_angular_speed, out);
    out << "\n";
  }

  // member: angular_gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_gain, out);
    out << "\n";
  }

  // member: planner_resolution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planner_resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.planner_resolution, out);
    out << "\n";
  }

  // member: planner_clearance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planner_clearance: ";
    rosidl_generator_traits::value_to_yaml(msg.planner_clearance, out);
    out << "\n";
  }

  // member: collision_threshold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collision_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_threshold, out);
    out << "\n";
  }

  // member: optimizer_weight_smooth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "optimizer_weight_smooth: ";
    rosidl_generator_traits::value_to_yaml(msg.optimizer_weight_smooth, out);
    out << "\n";
  }

  // member: optimizer_weight_jerk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "optimizer_weight_jerk: ";
    rosidl_generator_traits::value_to_yaml(msg.optimizer_weight_jerk, out);
    out << "\n";
  }

  // member: optimizer_weight_obstacle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "optimizer_weight_obstacle: ";
    rosidl_generator_traits::value_to_yaml(msg.optimizer_weight_obstacle, out);
    out << "\n";
  }

  // member: optimizer_step_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "optimizer_step_size: ";
    rosidl_generator_traits::value_to_yaml(msg.optimizer_step_size, out);
    out << "\n";
  }

  // member: optimizer_iterations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "optimizer_iterations: ";
    rosidl_generator_traits::value_to_yaml(msg.optimizer_iterations, out);
    out << "\n";
  }

  // member: optimizer_clearance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "optimizer_clearance: ";
    rosidl_generator_traits::value_to_yaml(msg.optimizer_clearance, out);
    out << "\n";
  }

  // member: force_path_planning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force_path_planning: ";
    rosidl_generator_traits::value_to_yaml(msg.force_path_planning, out);
    out << "\n";
  }

  // member: max_segment_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_segment_length: ";
    rosidl_generator_traits::value_to_yaml(msg.max_segment_length, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigationConfig & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace interface_package

namespace rosidl_generator_traits
{

[[deprecated("use interface_package::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface_package::msg::NavigationConfig & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_package::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_package::msg::to_yaml() instead")]]
inline std::string to_yaml(const interface_package::msg::NavigationConfig & msg)
{
  return interface_package::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interface_package::msg::NavigationConfig>()
{
  return "interface_package::msg::NavigationConfig";
}

template<>
inline const char * name<interface_package::msg::NavigationConfig>()
{
  return "interface_package/msg/NavigationConfig";
}

template<>
struct has_fixed_size<interface_package::msg::NavigationConfig>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interface_package::msg::NavigationConfig>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interface_package::msg::NavigationConfig>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__NAVIGATION_CONFIG__TRAITS_HPP_
