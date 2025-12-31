// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface_package:srv/GetNavigationConfig.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__GET_NAVIGATION_CONFIG__TRAITS_HPP_
#define INTERFACE_PACKAGE__SRV__DETAIL__GET_NAVIGATION_CONFIG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface_package/srv/detail/get_navigation_config__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interface_package
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetNavigationConfig_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetNavigationConfig_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetNavigationConfig_Request & msg, bool use_flow_style = false)
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
  const interface_package::srv::GetNavigationConfig_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const interface_package::srv::GetNavigationConfig_Request & msg)
{
  return interface_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interface_package::srv::GetNavigationConfig_Request>()
{
  return "interface_package::srv::GetNavigationConfig_Request";
}

template<>
inline const char * name<interface_package::srv::GetNavigationConfig_Request>()
{
  return "interface_package/srv/GetNavigationConfig_Request";
}

template<>
struct has_fixed_size<interface_package::srv::GetNavigationConfig_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interface_package::srv::GetNavigationConfig_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interface_package::srv::GetNavigationConfig_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'config'
#include "interface_package/msg/detail/navigation_config__traits.hpp"

namespace interface_package
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetNavigationConfig_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: config
  {
    out << "config: ";
    to_flow_style_yaml(msg.config, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetNavigationConfig_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: config
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "config:\n";
    to_block_style_yaml(msg.config, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetNavigationConfig_Response & msg, bool use_flow_style = false)
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
  const interface_package::srv::GetNavigationConfig_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const interface_package::srv::GetNavigationConfig_Response & msg)
{
  return interface_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interface_package::srv::GetNavigationConfig_Response>()
{
  return "interface_package::srv::GetNavigationConfig_Response";
}

template<>
inline const char * name<interface_package::srv::GetNavigationConfig_Response>()
{
  return "interface_package/srv/GetNavigationConfig_Response";
}

template<>
struct has_fixed_size<interface_package::srv::GetNavigationConfig_Response>
  : std::integral_constant<bool, has_fixed_size<interface_package::msg::NavigationConfig>::value> {};

template<>
struct has_bounded_size<interface_package::srv::GetNavigationConfig_Response>
  : std::integral_constant<bool, has_bounded_size<interface_package::msg::NavigationConfig>::value> {};

template<>
struct is_message<interface_package::srv::GetNavigationConfig_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interface_package::srv::GetNavigationConfig>()
{
  return "interface_package::srv::GetNavigationConfig";
}

template<>
inline const char * name<interface_package::srv::GetNavigationConfig>()
{
  return "interface_package/srv/GetNavigationConfig";
}

template<>
struct has_fixed_size<interface_package::srv::GetNavigationConfig>
  : std::integral_constant<
    bool,
    has_fixed_size<interface_package::srv::GetNavigationConfig_Request>::value &&
    has_fixed_size<interface_package::srv::GetNavigationConfig_Response>::value
  >
{
};

template<>
struct has_bounded_size<interface_package::srv::GetNavigationConfig>
  : std::integral_constant<
    bool,
    has_bounded_size<interface_package::srv::GetNavigationConfig_Request>::value &&
    has_bounded_size<interface_package::srv::GetNavigationConfig_Response>::value
  >
{
};

template<>
struct is_service<interface_package::srv::GetNavigationConfig>
  : std::true_type
{
};

template<>
struct is_service_request<interface_package::srv::GetNavigationConfig_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interface_package::srv::GetNavigationConfig_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__GET_NAVIGATION_CONFIG__TRAITS_HPP_
