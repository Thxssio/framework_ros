// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface_package:msg/RobotTarget.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__ROBOT_TARGET__TRAITS_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__ROBOT_TARGET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface_package/msg/detail/robot_target__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'target'
#include "interface_package/msg/detail/pose2_d__traits.hpp"

namespace interface_package
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotTarget & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: robot_id
  {
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << ", ";
  }

  // member: target
  {
    out << "target: ";
    to_flow_style_yaml(msg.target, out);
    out << ", ";
  }

  // member: force_path
  {
    out << "force_path: ";
    rosidl_generator_traits::value_to_yaml(msg.force_path, out);
    out << ", ";
  }

  // member: allow_goal_area
  {
    out << "allow_goal_area: ";
    rosidl_generator_traits::value_to_yaml(msg.allow_goal_area, out);
    out << ", ";
  }

  // member: avoid_ball
  {
    out << "avoid_ball: ";
    rosidl_generator_traits::value_to_yaml(msg.avoid_ball, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotTarget & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << "\n";
  }

  // member: target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target:\n";
    to_block_style_yaml(msg.target, out, indentation + 2);
  }

  // member: force_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force_path: ";
    rosidl_generator_traits::value_to_yaml(msg.force_path, out);
    out << "\n";
  }

  // member: allow_goal_area
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "allow_goal_area: ";
    rosidl_generator_traits::value_to_yaml(msg.allow_goal_area, out);
    out << "\n";
  }

  // member: avoid_ball
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avoid_ball: ";
    rosidl_generator_traits::value_to_yaml(msg.avoid_ball, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotTarget & msg, bool use_flow_style = false)
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
  const interface_package::msg::RobotTarget & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_package::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_package::msg::to_yaml() instead")]]
inline std::string to_yaml(const interface_package::msg::RobotTarget & msg)
{
  return interface_package::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interface_package::msg::RobotTarget>()
{
  return "interface_package::msg::RobotTarget";
}

template<>
inline const char * name<interface_package::msg::RobotTarget>()
{
  return "interface_package/msg/RobotTarget";
}

template<>
struct has_fixed_size<interface_package::msg::RobotTarget>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<interface_package::msg::Pose2D>::value> {};

template<>
struct has_bounded_size<interface_package::msg::RobotTarget>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<interface_package::msg::Pose2D>::value> {};

template<>
struct is_message<interface_package::msg::RobotTarget>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__ROBOT_TARGET__TRAITS_HPP_
