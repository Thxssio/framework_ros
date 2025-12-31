// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface_package:msg/BehaviorStatus.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__BEHAVIOR_STATUS__TRAITS_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__BEHAVIOR_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface_package/msg/detail/behavior_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interface_package
{

namespace msg
{

inline void to_flow_style_yaml(
  const BehaviorStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BehaviorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BehaviorStatus & msg, bool use_flow_style = false)
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
  const interface_package::msg::BehaviorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_package::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_package::msg::to_yaml() instead")]]
inline std::string to_yaml(const interface_package::msg::BehaviorStatus & msg)
{
  return interface_package::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interface_package::msg::BehaviorStatus>()
{
  return "interface_package::msg::BehaviorStatus";
}

template<>
inline const char * name<interface_package::msg::BehaviorStatus>()
{
  return "interface_package/msg/BehaviorStatus";
}

template<>
struct has_fixed_size<interface_package::msg::BehaviorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interface_package::msg::BehaviorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interface_package::msg::BehaviorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__BEHAVIOR_STATUS__TRAITS_HPP_
