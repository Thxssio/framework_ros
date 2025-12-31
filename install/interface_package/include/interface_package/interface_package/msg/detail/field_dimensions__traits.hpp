// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface_package:msg/FieldDimensions.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__FIELD_DIMENSIONS__TRAITS_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__FIELD_DIMENSIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface_package/msg/detail/field_dimensions__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interface_package
{

namespace msg
{

inline void to_flow_style_yaml(
  const FieldDimensions & msg,
  std::ostream & out)
{
  out << "{";
  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: goal_width
  {
    out << "goal_width: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_width, out);
    out << ", ";
  }

  // member: goal_depth
  {
    out << "goal_depth: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_depth, out);
    out << ", ";
  }

  // member: boundary_width
  {
    out << "boundary_width: ";
    rosidl_generator_traits::value_to_yaml(msg.boundary_width, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FieldDimensions & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: goal_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_width: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_width, out);
    out << "\n";
  }

  // member: goal_depth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_depth: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_depth, out);
    out << "\n";
  }

  // member: boundary_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "boundary_width: ";
    rosidl_generator_traits::value_to_yaml(msg.boundary_width, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FieldDimensions & msg, bool use_flow_style = false)
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
  const interface_package::msg::FieldDimensions & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_package::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_package::msg::to_yaml() instead")]]
inline std::string to_yaml(const interface_package::msg::FieldDimensions & msg)
{
  return interface_package::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interface_package::msg::FieldDimensions>()
{
  return "interface_package::msg::FieldDimensions";
}

template<>
inline const char * name<interface_package::msg::FieldDimensions>()
{
  return "interface_package/msg/FieldDimensions";
}

template<>
struct has_fixed_size<interface_package::msg::FieldDimensions>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interface_package::msg::FieldDimensions>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interface_package::msg::FieldDimensions>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__FIELD_DIMENSIONS__TRAITS_HPP_
