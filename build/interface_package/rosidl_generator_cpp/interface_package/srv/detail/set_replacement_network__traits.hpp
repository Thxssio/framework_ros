// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface_package:srv/SetReplacementNetwork.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__SET_REPLACEMENT_NETWORK__TRAITS_HPP_
#define INTERFACE_PACKAGE__SRV__DETAIL__SET_REPLACEMENT_NETWORK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface_package/srv/detail/set_replacement_network__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interface_package
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetReplacementNetwork_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: host
  {
    out << "host: ";
    rosidl_generator_traits::value_to_yaml(msg.host, out);
    out << ", ";
  }

  // member: port
  {
    out << "port: ";
    rosidl_generator_traits::value_to_yaml(msg.port, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetReplacementNetwork_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: host
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "host: ";
    rosidl_generator_traits::value_to_yaml(msg.host, out);
    out << "\n";
  }

  // member: port
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "port: ";
    rosidl_generator_traits::value_to_yaml(msg.port, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetReplacementNetwork_Request & msg, bool use_flow_style = false)
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
  const interface_package::srv::SetReplacementNetwork_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const interface_package::srv::SetReplacementNetwork_Request & msg)
{
  return interface_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interface_package::srv::SetReplacementNetwork_Request>()
{
  return "interface_package::srv::SetReplacementNetwork_Request";
}

template<>
inline const char * name<interface_package::srv::SetReplacementNetwork_Request>()
{
  return "interface_package/srv/SetReplacementNetwork_Request";
}

template<>
struct has_fixed_size<interface_package::srv::SetReplacementNetwork_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interface_package::srv::SetReplacementNetwork_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interface_package::srv::SetReplacementNetwork_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interface_package
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetReplacementNetwork_Response & msg,
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
  const SetReplacementNetwork_Response & msg,
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

inline std::string to_yaml(const SetReplacementNetwork_Response & msg, bool use_flow_style = false)
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
  const interface_package::srv::SetReplacementNetwork_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const interface_package::srv::SetReplacementNetwork_Response & msg)
{
  return interface_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interface_package::srv::SetReplacementNetwork_Response>()
{
  return "interface_package::srv::SetReplacementNetwork_Response";
}

template<>
inline const char * name<interface_package::srv::SetReplacementNetwork_Response>()
{
  return "interface_package/srv/SetReplacementNetwork_Response";
}

template<>
struct has_fixed_size<interface_package::srv::SetReplacementNetwork_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interface_package::srv::SetReplacementNetwork_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interface_package::srv::SetReplacementNetwork_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interface_package::srv::SetReplacementNetwork>()
{
  return "interface_package::srv::SetReplacementNetwork";
}

template<>
inline const char * name<interface_package::srv::SetReplacementNetwork>()
{
  return "interface_package/srv/SetReplacementNetwork";
}

template<>
struct has_fixed_size<interface_package::srv::SetReplacementNetwork>
  : std::integral_constant<
    bool,
    has_fixed_size<interface_package::srv::SetReplacementNetwork_Request>::value &&
    has_fixed_size<interface_package::srv::SetReplacementNetwork_Response>::value
  >
{
};

template<>
struct has_bounded_size<interface_package::srv::SetReplacementNetwork>
  : std::integral_constant<
    bool,
    has_bounded_size<interface_package::srv::SetReplacementNetwork_Request>::value &&
    has_bounded_size<interface_package::srv::SetReplacementNetwork_Response>::value
  >
{
};

template<>
struct is_service<interface_package::srv::SetReplacementNetwork>
  : std::true_type
{
};

template<>
struct is_service_request<interface_package::srv::SetReplacementNetwork_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interface_package::srv::SetReplacementNetwork_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__SET_REPLACEMENT_NETWORK__TRAITS_HPP_
