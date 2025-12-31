// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface_package:msg/TeamNetworkConfig.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__TEAM_NETWORK_CONFIG__TRAITS_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__TEAM_NETWORK_CONFIG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface_package/msg/detail/team_network_config__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interface_package
{

namespace msg
{

inline void to_flow_style_yaml(
  const TeamNetworkConfig & msg,
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
  const TeamNetworkConfig & msg,
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

inline std::string to_yaml(const TeamNetworkConfig & msg, bool use_flow_style = false)
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
  const interface_package::msg::TeamNetworkConfig & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_package::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_package::msg::to_yaml() instead")]]
inline std::string to_yaml(const interface_package::msg::TeamNetworkConfig & msg)
{
  return interface_package::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interface_package::msg::TeamNetworkConfig>()
{
  return "interface_package::msg::TeamNetworkConfig";
}

template<>
inline const char * name<interface_package::msg::TeamNetworkConfig>()
{
  return "interface_package/msg/TeamNetworkConfig";
}

template<>
struct has_fixed_size<interface_package::msg::TeamNetworkConfig>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interface_package::msg::TeamNetworkConfig>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interface_package::msg::TeamNetworkConfig>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__TEAM_NETWORK_CONFIG__TRAITS_HPP_
