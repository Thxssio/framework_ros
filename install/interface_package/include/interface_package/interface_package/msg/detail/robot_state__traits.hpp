// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface_package:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface_package/msg/detail/robot_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "interface_package/msg/detail/pose2_d__traits.hpp"
// Member 'twist'
#include "interface_package/msg/detail/twist2_d__traits.hpp"

namespace interface_package
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotState & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: twist
  {
    out << "twist: ";
    to_flow_style_yaml(msg.twist, out);
    out << ", ";
  }

  // member: visible
  {
    out << "visible: ";
    rosidl_generator_traits::value_to_yaml(msg.visible, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: twist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist:\n";
    to_block_style_yaml(msg.twist, out, indentation + 2);
  }

  // member: visible
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "visible: ";
    rosidl_generator_traits::value_to_yaml(msg.visible, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotState & msg, bool use_flow_style = false)
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
  const interface_package::msg::RobotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_package::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_package::msg::to_yaml() instead")]]
inline std::string to_yaml(const interface_package::msg::RobotState & msg)
{
  return interface_package::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interface_package::msg::RobotState>()
{
  return "interface_package::msg::RobotState";
}

template<>
inline const char * name<interface_package::msg::RobotState>()
{
  return "interface_package/msg/RobotState";
}

template<>
struct has_fixed_size<interface_package::msg::RobotState>
  : std::integral_constant<bool, has_fixed_size<interface_package::msg::Pose2D>::value && has_fixed_size<interface_package::msg::Twist2D>::value> {};

template<>
struct has_bounded_size<interface_package::msg::RobotState>
  : std::integral_constant<bool, has_bounded_size<interface_package::msg::Pose2D>::value && has_bounded_size<interface_package::msg::Twist2D>::value> {};

template<>
struct is_message<interface_package::msg::RobotState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_
