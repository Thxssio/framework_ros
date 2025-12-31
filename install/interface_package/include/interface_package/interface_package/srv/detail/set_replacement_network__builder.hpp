// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_package:srv/SetReplacementNetwork.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__SET_REPLACEMENT_NETWORK__BUILDER_HPP_
#define INTERFACE_PACKAGE__SRV__DETAIL__SET_REPLACEMENT_NETWORK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_package/srv/detail/set_replacement_network__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_package
{

namespace srv
{

namespace builder
{

class Init_SetReplacementNetwork_Request_port
{
public:
  explicit Init_SetReplacementNetwork_Request_port(::interface_package::srv::SetReplacementNetwork_Request & msg)
  : msg_(msg)
  {}
  ::interface_package::srv::SetReplacementNetwork_Request port(::interface_package::srv::SetReplacementNetwork_Request::_port_type arg)
  {
    msg_.port = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::srv::SetReplacementNetwork_Request msg_;
};

class Init_SetReplacementNetwork_Request_host
{
public:
  Init_SetReplacementNetwork_Request_host()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetReplacementNetwork_Request_port host(::interface_package::srv::SetReplacementNetwork_Request::_host_type arg)
  {
    msg_.host = std::move(arg);
    return Init_SetReplacementNetwork_Request_port(msg_);
  }

private:
  ::interface_package::srv::SetReplacementNetwork_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::srv::SetReplacementNetwork_Request>()
{
  return interface_package::srv::builder::Init_SetReplacementNetwork_Request_host();
}

}  // namespace interface_package


namespace interface_package
{

namespace srv
{

namespace builder
{

class Init_SetReplacementNetwork_Response_message
{
public:
  explicit Init_SetReplacementNetwork_Response_message(::interface_package::srv::SetReplacementNetwork_Response & msg)
  : msg_(msg)
  {}
  ::interface_package::srv::SetReplacementNetwork_Response message(::interface_package::srv::SetReplacementNetwork_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::srv::SetReplacementNetwork_Response msg_;
};

class Init_SetReplacementNetwork_Response_ok
{
public:
  Init_SetReplacementNetwork_Response_ok()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetReplacementNetwork_Response_message ok(::interface_package::srv::SetReplacementNetwork_Response::_ok_type arg)
  {
    msg_.ok = std::move(arg);
    return Init_SetReplacementNetwork_Response_message(msg_);
  }

private:
  ::interface_package::srv::SetReplacementNetwork_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::srv::SetReplacementNetwork_Response>()
{
  return interface_package::srv::builder::Init_SetReplacementNetwork_Response_ok();
}

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__SET_REPLACEMENT_NETWORK__BUILDER_HPP_
