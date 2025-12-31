// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface_package:srv/LoadConfig.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__LOAD_CONFIG__TRAITS_HPP_
#define INTERFACE_PACKAGE__SRV__DETAIL__LOAD_CONFIG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface_package/srv/detail/load_config__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interface_package
{

namespace srv
{

inline void to_flow_style_yaml(
  const LoadConfig_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: kind
  {
    out << "kind: ";
    rosidl_generator_traits::value_to_yaml(msg.kind, out);
    out << ", ";
  }

  // member: path
  {
    out << "path: ";
    rosidl_generator_traits::value_to_yaml(msg.path, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoadConfig_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: kind
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kind: ";
    rosidl_generator_traits::value_to_yaml(msg.kind, out);
    out << "\n";
  }

  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path: ";
    rosidl_generator_traits::value_to_yaml(msg.path, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoadConfig_Request & msg, bool use_flow_style = false)
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
  const interface_package::srv::LoadConfig_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const interface_package::srv::LoadConfig_Request & msg)
{
  return interface_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interface_package::srv::LoadConfig_Request>()
{
  return "interface_package::srv::LoadConfig_Request";
}

template<>
inline const char * name<interface_package::srv::LoadConfig_Request>()
{
  return "interface_package/srv/LoadConfig_Request";
}

template<>
struct has_fixed_size<interface_package::srv::LoadConfig_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interface_package::srv::LoadConfig_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interface_package::srv::LoadConfig_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'nav'
#include "interface_package/msg/detail/navigation_config__traits.hpp"
// Member 'kick'
#include "interface_package/msg/detail/kick_parameters__traits.hpp"
// Member 'prep'
#include "interface_package/msg/detail/prepare_kickoff_parameters__traits.hpp"

namespace interface_package
{

namespace srv
{

inline void to_flow_style_yaml(
  const LoadConfig_Response & msg,
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
    out << ", ";
  }

  // member: nav
  {
    out << "nav: ";
    to_flow_style_yaml(msg.nav, out);
    out << ", ";
  }

  // member: kick
  {
    out << "kick: ";
    to_flow_style_yaml(msg.kick, out);
    out << ", ";
  }

  // member: prep
  {
    out << "prep: ";
    to_flow_style_yaml(msg.prep, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoadConfig_Response & msg,
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

  // member: nav
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav:\n";
    to_block_style_yaml(msg.nav, out, indentation + 2);
  }

  // member: kick
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kick:\n";
    to_block_style_yaml(msg.kick, out, indentation + 2);
  }

  // member: prep
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prep:\n";
    to_block_style_yaml(msg.prep, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoadConfig_Response & msg, bool use_flow_style = false)
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
  const interface_package::srv::LoadConfig_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const interface_package::srv::LoadConfig_Response & msg)
{
  return interface_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interface_package::srv::LoadConfig_Response>()
{
  return "interface_package::srv::LoadConfig_Response";
}

template<>
inline const char * name<interface_package::srv::LoadConfig_Response>()
{
  return "interface_package/srv/LoadConfig_Response";
}

template<>
struct has_fixed_size<interface_package::srv::LoadConfig_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interface_package::srv::LoadConfig_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interface_package::srv::LoadConfig_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interface_package::srv::LoadConfig>()
{
  return "interface_package::srv::LoadConfig";
}

template<>
inline const char * name<interface_package::srv::LoadConfig>()
{
  return "interface_package/srv/LoadConfig";
}

template<>
struct has_fixed_size<interface_package::srv::LoadConfig>
  : std::integral_constant<
    bool,
    has_fixed_size<interface_package::srv::LoadConfig_Request>::value &&
    has_fixed_size<interface_package::srv::LoadConfig_Response>::value
  >
{
};

template<>
struct has_bounded_size<interface_package::srv::LoadConfig>
  : std::integral_constant<
    bool,
    has_bounded_size<interface_package::srv::LoadConfig_Request>::value &&
    has_bounded_size<interface_package::srv::LoadConfig_Response>::value
  >
{
};

template<>
struct is_service<interface_package::srv::LoadConfig>
  : std::true_type
{
};

template<>
struct is_service_request<interface_package::srv::LoadConfig_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interface_package::srv::LoadConfig_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__LOAD_CONFIG__TRAITS_HPP_
