// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface_package:msg/WorldState.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__WORLD_STATE__TRAITS_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__WORLD_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface_package/msg/detail/world_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'field'
#include "interface_package/msg/detail/field_dimensions__traits.hpp"
// Member 'friendly'
// Member 'opponent'
#include "interface_package/msg/detail/robot_state__traits.hpp"
// Member 'ball'
#include "interface_package/msg/detail/ball_state__traits.hpp"
// Member 'friendly_color'
#include "interface_package/msg/detail/team_color__traits.hpp"

namespace interface_package
{

namespace msg
{

inline void to_flow_style_yaml(
  const WorldState & msg,
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

  // member: field
  {
    out << "field: ";
    to_flow_style_yaml(msg.field, out);
    out << ", ";
  }

  // member: friendly
  {
    if (msg.friendly.size() == 0) {
      out << "friendly: []";
    } else {
      out << "friendly: [";
      size_t pending_items = msg.friendly.size();
      for (auto item : msg.friendly) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: opponent
  {
    if (msg.opponent.size() == 0) {
      out << "opponent: []";
    } else {
      out << "opponent: [";
      size_t pending_items = msg.opponent.size();
      for (auto item : msg.opponent) {
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
    out << ", ";
  }

  // member: friendly_color
  {
    out << "friendly_color: ";
    to_flow_style_yaml(msg.friendly_color, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WorldState & msg,
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

  // member: field
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "field:\n";
    to_block_style_yaml(msg.field, out, indentation + 2);
  }

  // member: friendly
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.friendly.size() == 0) {
      out << "friendly: []\n";
    } else {
      out << "friendly:\n";
      for (auto item : msg.friendly) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: opponent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.opponent.size() == 0) {
      out << "opponent: []\n";
    } else {
      out << "opponent:\n";
      for (auto item : msg.opponent) {
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

  // member: friendly_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "friendly_color:\n";
    to_block_style_yaml(msg.friendly_color, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WorldState & msg, bool use_flow_style = false)
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
  const interface_package::msg::WorldState & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_package::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_package::msg::to_yaml() instead")]]
inline std::string to_yaml(const interface_package::msg::WorldState & msg)
{
  return interface_package::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interface_package::msg::WorldState>()
{
  return "interface_package::msg::WorldState";
}

template<>
inline const char * name<interface_package::msg::WorldState>()
{
  return "interface_package/msg/WorldState";
}

template<>
struct has_fixed_size<interface_package::msg::WorldState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interface_package::msg::WorldState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interface_package::msg::WorldState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__WORLD_STATE__TRAITS_HPP_
