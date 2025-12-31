// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_package:msg/TeamNetworkConfig.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__TEAM_NETWORK_CONFIG__BUILDER_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__TEAM_NETWORK_CONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_package/msg/detail/team_network_config__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_package
{

namespace msg
{

namespace builder
{

class Init_TeamNetworkConfig_port
{
public:
  explicit Init_TeamNetworkConfig_port(::interface_package::msg::TeamNetworkConfig & msg)
  : msg_(msg)
  {}
  ::interface_package::msg::TeamNetworkConfig port(::interface_package::msg::TeamNetworkConfig::_port_type arg)
  {
    msg_.port = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::msg::TeamNetworkConfig msg_;
};

class Init_TeamNetworkConfig_host
{
public:
  Init_TeamNetworkConfig_host()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TeamNetworkConfig_port host(::interface_package::msg::TeamNetworkConfig::_host_type arg)
  {
    msg_.host = std::move(arg);
    return Init_TeamNetworkConfig_port(msg_);
  }

private:
  ::interface_package::msg::TeamNetworkConfig msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::msg::TeamNetworkConfig>()
{
  return interface_package::msg::builder::Init_TeamNetworkConfig_host();
}

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__TEAM_NETWORK_CONFIG__BUILDER_HPP_
