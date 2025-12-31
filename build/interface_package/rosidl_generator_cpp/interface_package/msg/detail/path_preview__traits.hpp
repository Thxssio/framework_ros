// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface_package:msg/PathPreview.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__PATH_PREVIEW__TRAITS_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__PATH_PREVIEW__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface_package/msg/detail/path_preview__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'path'
// Member 'direct'
#include "interface_package/msg/detail/pose2_d__traits.hpp"

namespace interface_package
{

namespace msg
{

inline void to_flow_style_yaml(
  const PathPreview & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_id
  {
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << ", ";
  }

  // member: path
  {
    if (msg.path.size() == 0) {
      out << "path: []";
    } else {
      out << "path: [";
      size_t pending_items = msg.path.size();
      for (auto item : msg.path) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: direct
  {
    if (msg.direct.size() == 0) {
      out << "direct: []";
    } else {
      out << "direct: [";
      size_t pending_items = msg.direct.size();
      for (auto item : msg.direct) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PathPreview & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << "\n";
  }

  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.path.size() == 0) {
      out << "path: []\n";
    } else {
      out << "path:\n";
      for (auto item : msg.path) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: direct
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.direct.size() == 0) {
      out << "direct: []\n";
    } else {
      out << "direct:\n";
      for (auto item : msg.direct) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PathPreview & msg, bool use_flow_style = false)
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
  const interface_package::msg::PathPreview & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_package::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_package::msg::to_yaml() instead")]]
inline std::string to_yaml(const interface_package::msg::PathPreview & msg)
{
  return interface_package::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interface_package::msg::PathPreview>()
{
  return "interface_package::msg::PathPreview";
}

template<>
inline const char * name<interface_package::msg::PathPreview>()
{
  return "interface_package/msg/PathPreview";
}

template<>
struct has_fixed_size<interface_package::msg::PathPreview>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interface_package::msg::PathPreview>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interface_package::msg::PathPreview>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__PATH_PREVIEW__TRAITS_HPP_
