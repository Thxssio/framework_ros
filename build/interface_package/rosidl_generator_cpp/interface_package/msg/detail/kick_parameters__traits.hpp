// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface_package:msg/KickParameters.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__KICK_PARAMETERS__TRAITS_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__KICK_PARAMETERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface_package/msg/detail/kick_parameters__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interface_package
{

namespace msg
{

inline void to_flow_style_yaml(
  const KickParameters & msg,
  std::ostream & out)
{
  out << "{";
  // member: kick_speed
  {
    out << "kick_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.kick_speed, out);
    out << ", ";
  }

  // member: kick_angle_deg
  {
    out << "kick_angle_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.kick_angle_deg, out);
    out << ", ";
  }

  // member: kick_distance
  {
    out << "kick_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.kick_distance, out);
    out << ", ";
  }

  // member: facing_tolerance
  {
    out << "facing_tolerance: ";
    rosidl_generator_traits::value_to_yaml(msg.facing_tolerance, out);
    out << ", ";
  }

  // member: kick_push_speed
  {
    out << "kick_push_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.kick_push_speed, out);
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
  const KickParameters & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: kick_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kick_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.kick_speed, out);
    out << "\n";
  }

  // member: kick_angle_deg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kick_angle_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.kick_angle_deg, out);
    out << "\n";
  }

  // member: kick_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kick_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.kick_distance, out);
    out << "\n";
  }

  // member: facing_tolerance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "facing_tolerance: ";
    rosidl_generator_traits::value_to_yaml(msg.facing_tolerance, out);
    out << "\n";
  }

  // member: kick_push_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kick_push_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.kick_push_speed, out);
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

inline std::string to_yaml(const KickParameters & msg, bool use_flow_style = false)
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
  const interface_package::msg::KickParameters & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_package::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_package::msg::to_yaml() instead")]]
inline std::string to_yaml(const interface_package::msg::KickParameters & msg)
{
  return interface_package::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interface_package::msg::KickParameters>()
{
  return "interface_package::msg::KickParameters";
}

template<>
inline const char * name<interface_package::msg::KickParameters>()
{
  return "interface_package/msg/KickParameters";
}

template<>
struct has_fixed_size<interface_package::msg::KickParameters>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interface_package::msg::KickParameters>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interface_package::msg::KickParameters>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__KICK_PARAMETERS__TRAITS_HPP_
