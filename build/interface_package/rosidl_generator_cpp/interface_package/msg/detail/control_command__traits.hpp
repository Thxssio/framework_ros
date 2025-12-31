// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface_package:msg/ControlCommand.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__CONTROL_COMMAND__TRAITS_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__CONTROL_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface_package/msg/detail/control_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'velocity'
#include "interface_package/msg/detail/twist2_d__traits.hpp"

namespace interface_package
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControlCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: has_velocity
  {
    out << "has_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.has_velocity, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    to_flow_style_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: kick
  {
    out << "kick: ";
    rosidl_generator_traits::value_to_yaml(msg.kick, out);
    out << ", ";
  }

  // member: kick_speed
  {
    out << "kick_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.kick_speed, out);
    out << ", ";
  }

  // member: dribbler
  {
    out << "dribbler: ";
    rosidl_generator_traits::value_to_yaml(msg.dribbler, out);
    out << ", ";
  }

  // member: dribbler_rpm
  {
    out << "dribbler_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.dribbler_rpm, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: has_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.has_velocity, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_block_style_yaml(msg.velocity, out, indentation + 2);
  }

  // member: kick
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kick: ";
    rosidl_generator_traits::value_to_yaml(msg.kick, out);
    out << "\n";
  }

  // member: kick_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kick_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.kick_speed, out);
    out << "\n";
  }

  // member: dribbler
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dribbler: ";
    rosidl_generator_traits::value_to_yaml(msg.dribbler, out);
    out << "\n";
  }

  // member: dribbler_rpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dribbler_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.dribbler_rpm, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlCommand & msg, bool use_flow_style = false)
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
  const interface_package::msg::ControlCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_package::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_package::msg::to_yaml() instead")]]
inline std::string to_yaml(const interface_package::msg::ControlCommand & msg)
{
  return interface_package::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interface_package::msg::ControlCommand>()
{
  return "interface_package::msg::ControlCommand";
}

template<>
inline const char * name<interface_package::msg::ControlCommand>()
{
  return "interface_package/msg/ControlCommand";
}

template<>
struct has_fixed_size<interface_package::msg::ControlCommand>
  : std::integral_constant<bool, has_fixed_size<interface_package::msg::Twist2D>::value> {};

template<>
struct has_bounded_size<interface_package::msg::ControlCommand>
  : std::integral_constant<bool, has_bounded_size<interface_package::msg::Twist2D>::value> {};

template<>
struct is_message<interface_package::msg::ControlCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__CONTROL_COMMAND__TRAITS_HPP_
