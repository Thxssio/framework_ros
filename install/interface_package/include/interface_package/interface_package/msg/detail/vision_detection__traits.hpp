// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface_package:msg/VisionDetection.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__VISION_DETECTION__TRAITS_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__VISION_DETECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface_package/msg/detail/vision_detection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'yellow'
// Member 'blue'
#include "interface_package/msg/detail/robot_state__traits.hpp"
// Member 'ball'
#include "interface_package/msg/detail/ball_state__traits.hpp"

namespace interface_package
{

namespace msg
{

inline void to_flow_style_yaml(
  const VisionDetection & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: capture_timestamp
  {
    out << "capture_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.capture_timestamp, out);
    out << ", ";
  }

  // member: yellow
  {
    if (msg.yellow.size() == 0) {
      out << "yellow: []";
    } else {
      out << "yellow: [";
      size_t pending_items = msg.yellow.size();
      for (auto item : msg.yellow) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: blue
  {
    if (msg.blue.size() == 0) {
      out << "blue: []";
    } else {
      out << "blue: [";
      size_t pending_items = msg.blue.size();
      for (auto item : msg.blue) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ball
  {
    out << "ball: ";
    to_flow_style_yaml(msg.ball, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VisionDetection & msg,
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

  // member: capture_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "capture_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.capture_timestamp, out);
    out << "\n";
  }

  // member: yellow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.yellow.size() == 0) {
      out << "yellow: []\n";
    } else {
      out << "yellow:\n";
      for (auto item : msg.yellow) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: blue
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.blue.size() == 0) {
      out << "blue: []\n";
    } else {
      out << "blue:\n";
      for (auto item : msg.blue) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: ball
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ball:\n";
    to_block_style_yaml(msg.ball, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VisionDetection & msg, bool use_flow_style = false)
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
  const interface_package::msg::VisionDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_package::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_package::msg::to_yaml() instead")]]
inline std::string to_yaml(const interface_package::msg::VisionDetection & msg)
{
  return interface_package::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interface_package::msg::VisionDetection>()
{
  return "interface_package::msg::VisionDetection";
}

template<>
inline const char * name<interface_package::msg::VisionDetection>()
{
  return "interface_package/msg/VisionDetection";
}

template<>
struct has_fixed_size<interface_package::msg::VisionDetection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interface_package::msg::VisionDetection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interface_package::msg::VisionDetection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__VISION_DETECTION__TRAITS_HPP_
