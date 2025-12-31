// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_package:srv/SendReplacementRobot.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__SEND_REPLACEMENT_ROBOT__BUILDER_HPP_
#define INTERFACE_PACKAGE__SRV__DETAIL__SEND_REPLACEMENT_ROBOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_package/srv/detail/send_replacement_robot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_package
{

namespace srv
{

namespace builder
{

class Init_SendReplacementRobot_Request_present
{
public:
  explicit Init_SendReplacementRobot_Request_present(::interface_package::srv::SendReplacementRobot_Request & msg)
  : msg_(msg)
  {}
  ::interface_package::srv::SendReplacementRobot_Request present(::interface_package::srv::SendReplacementRobot_Request::_present_type arg)
  {
    msg_.present = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::srv::SendReplacementRobot_Request msg_;
};

class Init_SendReplacementRobot_Request_theta
{
public:
  explicit Init_SendReplacementRobot_Request_theta(::interface_package::srv::SendReplacementRobot_Request & msg)
  : msg_(msg)
  {}
  Init_SendReplacementRobot_Request_present theta(::interface_package::srv::SendReplacementRobot_Request::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_SendReplacementRobot_Request_present(msg_);
  }

private:
  ::interface_package::srv::SendReplacementRobot_Request msg_;
};

class Init_SendReplacementRobot_Request_y
{
public:
  explicit Init_SendReplacementRobot_Request_y(::interface_package::srv::SendReplacementRobot_Request & msg)
  : msg_(msg)
  {}
  Init_SendReplacementRobot_Request_theta y(::interface_package::srv::SendReplacementRobot_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_SendReplacementRobot_Request_theta(msg_);
  }

private:
  ::interface_package::srv::SendReplacementRobot_Request msg_;
};

class Init_SendReplacementRobot_Request_x
{
public:
  explicit Init_SendReplacementRobot_Request_x(::interface_package::srv::SendReplacementRobot_Request & msg)
  : msg_(msg)
  {}
  Init_SendReplacementRobot_Request_y x(::interface_package::srv::SendReplacementRobot_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_SendReplacementRobot_Request_y(msg_);
  }

private:
  ::interface_package::srv::SendReplacementRobot_Request msg_;
};

class Init_SendReplacementRobot_Request_is_yellow
{
public:
  explicit Init_SendReplacementRobot_Request_is_yellow(::interface_package::srv::SendReplacementRobot_Request & msg)
  : msg_(msg)
  {}
  Init_SendReplacementRobot_Request_x is_yellow(::interface_package::srv::SendReplacementRobot_Request::_is_yellow_type arg)
  {
    msg_.is_yellow = std::move(arg);
    return Init_SendReplacementRobot_Request_x(msg_);
  }

private:
  ::interface_package::srv::SendReplacementRobot_Request msg_;
};

class Init_SendReplacementRobot_Request_robot_id
{
public:
  Init_SendReplacementRobot_Request_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendReplacementRobot_Request_is_yellow robot_id(::interface_package::srv::SendReplacementRobot_Request::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_SendReplacementRobot_Request_is_yellow(msg_);
  }

private:
  ::interface_package::srv::SendReplacementRobot_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::srv::SendReplacementRobot_Request>()
{
  return interface_package::srv::builder::Init_SendReplacementRobot_Request_robot_id();
}

}  // namespace interface_package


namespace interface_package
{

namespace srv
{

namespace builder
{

class Init_SendReplacementRobot_Response_message
{
public:
  explicit Init_SendReplacementRobot_Response_message(::interface_package::srv::SendReplacementRobot_Response & msg)
  : msg_(msg)
  {}
  ::interface_package::srv::SendReplacementRobot_Response message(::interface_package::srv::SendReplacementRobot_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::srv::SendReplacementRobot_Response msg_;
};

class Init_SendReplacementRobot_Response_ok
{
public:
  Init_SendReplacementRobot_Response_ok()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendReplacementRobot_Response_message ok(::interface_package::srv::SendReplacementRobot_Response::_ok_type arg)
  {
    msg_.ok = std::move(arg);
    return Init_SendReplacementRobot_Response_message(msg_);
  }

private:
  ::interface_package::srv::SendReplacementRobot_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::srv::SendReplacementRobot_Response>()
{
  return interface_package::srv::builder::Init_SendReplacementRobot_Response_ok();
}

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__SEND_REPLACEMENT_ROBOT__BUILDER_HPP_
