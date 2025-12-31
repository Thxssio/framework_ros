// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface_package:srv/SendReplacementRobot.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__SEND_REPLACEMENT_ROBOT__TRAITS_HPP_
#define INTERFACE_PACKAGE__SRV__DETAIL__SEND_REPLACEMENT_ROBOT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface_package/srv/detail/send_replacement_robot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interface_package
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendReplacementRobot_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_id
  {
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << ", ";
  }

  // member: is_yellow
  {
    out << "is_yellow: ";
    rosidl_generator_traits::value_to_yaml(msg.is_yellow, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << ", ";
  }

  // member: present
  {
    out << "present: ";
    rosidl_generator_traits::value_to_yaml(msg.present, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendReplacementRobot_Request & msg,
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

  // member: is_yellow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_yellow: ";
    rosidl_generator_traits::value_to_yaml(msg.is_yellow, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << "\n";
  }

  // member: present
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "present: ";
    rosidl_generator_traits::value_to_yaml(msg.present, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendReplacementRobot_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interface_package

namespace rosidl_generator_traits
{

[[deprecated("use interface_package::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface_package::srv::SendReplacementRobot_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const interface_package::srv::SendReplacementRobot_Request & msg)
{
  return interface_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interface_package::srv::SendReplacementRobot_Request>()
{
  return "interface_package::srv::SendReplacementRobot_Request";
}

template<>
inline const char * name<interface_package::srv::SendReplacementRobot_Request>()
{
  return "interface_package/srv/SendReplacementRobot_Request";
}

template<>
struct has_fixed_size<interface_package::srv::SendReplacementRobot_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interface_package::srv::SendReplacementRobot_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interface_package::srv::SendReplacementRobot_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interface_package
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendReplacementRobot_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: ok
  {
    out << "ok: ";
    rosidl_generator_traits::value_to_yaml(msg.ok, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendReplacementRobot_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ok: ";
    rosidl_generator_traits::value_to_yaml(msg.ok, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendReplacementRobot_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interface_package

namespace rosidl_generator_traits
{

[[deprecated("use interface_package::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface_package::srv::SendReplacementRobot_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const interface_package::srv::SendReplacementRobot_Response & msg)
{
  return interface_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interface_package::srv::SendReplacementRobot_Response>()
{
  return "interface_package::srv::SendReplacementRobot_Response";
}

template<>
inline const char * name<interface_package::srv::SendReplacementRobot_Response>()
{
  return "interface_package/srv/SendReplacementRobot_Response";
}

template<>
struct has_fixed_size<interface_package::srv::SendReplacementRobot_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interface_package::srv::SendReplacementRobot_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interface_package::srv::SendReplacementRobot_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interface_package::srv::SendReplacementRobot>()
{
  return "interface_package::srv::SendReplacementRobot";
}

template<>
inline const char * name<interface_package::srv::SendReplacementRobot>()
{
  return "interface_package/srv/SendReplacementRobot";
}

template<>
struct has_fixed_size<interface_package::srv::SendReplacementRobot>
  : std::integral_constant<
    bool,
    has_fixed_size<interface_package::srv::SendReplacementRobot_Request>::value &&
    has_fixed_size<interface_package::srv::SendReplacementRobot_Response>::value
  >
{
};

template<>
struct has_bounded_size<interface_package::srv::SendReplacementRobot>
  : std::integral_constant<
    bool,
    has_bounded_size<interface_package::srv::SendReplacementRobot_Request>::value &&
    has_bounded_size<interface_package::srv::SendReplacementRobot_Response>::value
  >
{
};

template<>
struct is_service<interface_package::srv::SendReplacementRobot>
  : std::true_type
{
};

template<>
struct is_service_request<interface_package::srv::SendReplacementRobot_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interface_package::srv::SendReplacementRobot_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__SEND_REPLACEMENT_ROBOT__TRAITS_HPP_
