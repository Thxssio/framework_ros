// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_package:srv/SendReplacementBall.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__SEND_REPLACEMENT_BALL__BUILDER_HPP_
#define INTERFACE_PACKAGE__SRV__DETAIL__SEND_REPLACEMENT_BALL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_package/srv/detail/send_replacement_ball__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_package
{

namespace srv
{

namespace builder
{

class Init_SendReplacementBall_Request_vy
{
public:
  explicit Init_SendReplacementBall_Request_vy(::interface_package::srv::SendReplacementBall_Request & msg)
  : msg_(msg)
  {}
  ::interface_package::srv::SendReplacementBall_Request vy(::interface_package::srv::SendReplacementBall_Request::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::srv::SendReplacementBall_Request msg_;
};

class Init_SendReplacementBall_Request_vx
{
public:
  explicit Init_SendReplacementBall_Request_vx(::interface_package::srv::SendReplacementBall_Request & msg)
  : msg_(msg)
  {}
  Init_SendReplacementBall_Request_vy vx(::interface_package::srv::SendReplacementBall_Request::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_SendReplacementBall_Request_vy(msg_);
  }

private:
  ::interface_package::srv::SendReplacementBall_Request msg_;
};

class Init_SendReplacementBall_Request_y
{
public:
  explicit Init_SendReplacementBall_Request_y(::interface_package::srv::SendReplacementBall_Request & msg)
  : msg_(msg)
  {}
  Init_SendReplacementBall_Request_vx y(::interface_package::srv::SendReplacementBall_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_SendReplacementBall_Request_vx(msg_);
  }

private:
  ::interface_package::srv::SendReplacementBall_Request msg_;
};

class Init_SendReplacementBall_Request_x
{
public:
  Init_SendReplacementBall_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendReplacementBall_Request_y x(::interface_package::srv::SendReplacementBall_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_SendReplacementBall_Request_y(msg_);
  }

private:
  ::interface_package::srv::SendReplacementBall_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::srv::SendReplacementBall_Request>()
{
  return interface_package::srv::builder::Init_SendReplacementBall_Request_x();
}

}  // namespace interface_package


namespace interface_package
{

namespace srv
{

namespace builder
{

class Init_SendReplacementBall_Response_message
{
public:
  explicit Init_SendReplacementBall_Response_message(::interface_package::srv::SendReplacementBall_Response & msg)
  : msg_(msg)
  {}
  ::interface_package::srv::SendReplacementBall_Response message(::interface_package::srv::SendReplacementBall_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::srv::SendReplacementBall_Response msg_;
};

class Init_SendReplacementBall_Response_ok
{
public:
  Init_SendReplacementBall_Response_ok()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendReplacementBall_Response_message ok(::interface_package::srv::SendReplacementBall_Response::_ok_type arg)
  {
    msg_.ok = std::move(arg);
    return Init_SendReplacementBall_Response_message(msg_);
  }

private:
  ::interface_package::srv::SendReplacementBall_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::srv::SendReplacementBall_Response>()
{
  return interface_package::srv::builder::Init_SendReplacementBall_Response_ok();
}

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__SEND_REPLACEMENT_BALL__BUILDER_HPP_
