// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface_package:srv/SetTeam.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__SET_TEAM__TRAITS_HPP_
#define INTERFACE_PACKAGE__SRV__DETAIL__SET_TEAM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface_package/srv/detail/set_team__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'team'
#include "interface_package/msg/detail/team_color__traits.hpp"

namespace interface_package
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetTeam_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: team
  {
    out << "team: ";
    to_flow_style_yaml(msg.team, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetTeam_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: team
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "team:\n";
    to_block_style_yaml(msg.team, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetTeam_Request & msg, bool use_flow_style = false)
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
  const interface_package::srv::SetTeam_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const interface_package::srv::SetTeam_Request & msg)
{
  return interface_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interface_package::srv::SetTeam_Request>()
{
  return "interface_package::srv::SetTeam_Request";
}

template<>
inline const char * name<interface_package::srv::SetTeam_Request>()
{
  return "interface_package/srv/SetTeam_Request";
}

template<>
struct has_fixed_size<interface_package::srv::SetTeam_Request>
  : std::integral_constant<bool, has_fixed_size<interface_package::msg::TeamColor>::value> {};

template<>
struct has_bounded_size<interface_package::srv::SetTeam_Request>
  : std::integral_constant<bool, has_bounded_size<interface_package::msg::TeamColor>::value> {};

template<>
struct is_message<interface_package::srv::SetTeam_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interface_package
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetTeam_Response & msg,
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
  const SetTeam_Response & msg,
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

inline std::string to_yaml(const SetTeam_Response & msg, bool use_flow_style = false)
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
  const interface_package::srv::SetTeam_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const interface_package::srv::SetTeam_Response & msg)
{
  return interface_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interface_package::srv::SetTeam_Response>()
{
  return "interface_package::srv::SetTeam_Response";
}

template<>
inline const char * name<interface_package::srv::SetTeam_Response>()
{
  return "interface_package/srv/SetTeam_Response";
}

template<>
struct has_fixed_size<interface_package::srv::SetTeam_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interface_package::srv::SetTeam_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interface_package::srv::SetTeam_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interface_package::srv::SetTeam>()
{
  return "interface_package::srv::SetTeam";
}

template<>
inline const char * name<interface_package::srv::SetTeam>()
{
  return "interface_package/srv/SetTeam";
}

template<>
struct has_fixed_size<interface_package::srv::SetTeam>
  : std::integral_constant<
    bool,
    has_fixed_size<interface_package::srv::SetTeam_Request>::value &&
    has_fixed_size<interface_package::srv::SetTeam_Response>::value
  >
{
};

template<>
struct has_bounded_size<interface_package::srv::SetTeam>
  : std::integral_constant<
    bool,
    has_bounded_size<interface_package::srv::SetTeam_Request>::value &&
    has_bounded_size<interface_package::srv::SetTeam_Response>::value
  >
{
};

template<>
struct is_service<interface_package::srv::SetTeam>
  : std::true_type
{
};

template<>
struct is_service_request<interface_package::srv::SetTeam_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interface_package::srv::SetTeam_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__SET_TEAM__TRAITS_HPP_
