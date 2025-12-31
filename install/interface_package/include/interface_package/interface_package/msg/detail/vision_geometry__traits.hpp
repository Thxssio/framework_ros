// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface_package:msg/VisionGeometry.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__VISION_GEOMETRY__TRAITS_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__VISION_GEOMETRY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface_package/msg/detail/vision_geometry__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'field'
#include "interface_package/msg/detail/field_dimensions__traits.hpp"

namespace interface_package
{

namespace msg
{

inline void to_flow_style_yaml(
  const VisionGeometry & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: field
  {
    out << "field: ";
    to_flow_style_yaml(msg.field, out);
    out << ", ";
  }

  // member: expected_cameras
  {
    out << "expected_cameras: ";
    rosidl_generator_traits::value_to_yaml(msg.expected_cameras, out);
    out << ", ";
  }

  // member: camera_count
  {
    out << "camera_count: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_count, out);
    out << ", ";
  }

  // member: camera_ids
  {
    if (msg.camera_ids.size() == 0) {
      out << "camera_ids: []";
    } else {
      out << "camera_ids: [";
      size_t pending_items = msg.camera_ids.size();
      for (auto item : msg.camera_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const VisionGeometry & msg,
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

  // member: field
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "field:\n";
    to_block_style_yaml(msg.field, out, indentation + 2);
  }

  // member: expected_cameras
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "expected_cameras: ";
    rosidl_generator_traits::value_to_yaml(msg.expected_cameras, out);
    out << "\n";
  }

  // member: camera_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_count: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_count, out);
    out << "\n";
  }

  // member: camera_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.camera_ids.size() == 0) {
      out << "camera_ids: []\n";
    } else {
      out << "camera_ids:\n";
      for (auto item : msg.camera_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VisionGeometry & msg, bool use_flow_style = false)
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
  const interface_package::msg::VisionGeometry & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_package::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_package::msg::to_yaml() instead")]]
inline std::string to_yaml(const interface_package::msg::VisionGeometry & msg)
{
  return interface_package::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interface_package::msg::VisionGeometry>()
{
  return "interface_package::msg::VisionGeometry";
}

template<>
inline const char * name<interface_package::msg::VisionGeometry>()
{
  return "interface_package/msg/VisionGeometry";
}

template<>
struct has_fixed_size<interface_package::msg::VisionGeometry>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interface_package::msg::VisionGeometry>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interface_package::msg::VisionGeometry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__VISION_GEOMETRY__TRAITS_HPP_
