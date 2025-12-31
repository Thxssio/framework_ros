// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_package:srv/SendRobotCommand.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__SEND_ROBOT_COMMAND__BUILDER_HPP_
#define INTERFACE_PACKAGE__SRV__DETAIL__SEND_ROBOT_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_package/srv/detail/send_robot_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_package
{

namespace srv
{

namespace builder
{

class Init_SendRobotCommand_Request_command
{
public:
  explicit Init_SendRobotCommand_Request_command(::interface_package::srv::SendRobotCommand_Request & msg)
  : msg_(msg)
  {}
  ::interface_package::srv::SendRobotCommand_Request command(::interface_package::srv::SendRobotCommand_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::srv::SendRobotCommand_Request msg_;
};

class Init_SendRobotCommand_Request_robot_id
{
public:
  Init_SendRobotCommand_Request_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendRobotCommand_Request_command robot_id(::interface_package::srv::SendRobotCommand_Request::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_SendRobotCommand_Request_command(msg_);
  }

private:
  ::interface_package::srv::SendRobotCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::srv::SendRobotCommand_Request>()
{
  return interface_package::srv::builder::Init_SendRobotCommand_Request_robot_id();
}

}  // namespace interface_package


namespace interface_package
{

namespace srv
{

namespace builder
{

class Init_SendRobotCommand_Response_message
{
public:
  explicit Init_SendRobotCommand_Response_message(::interface_package::srv::SendRobotCommand_Response & msg)
  : msg_(msg)
  {}
  ::interface_package::srv::SendRobotCommand_Response message(::interface_package::srv::SendRobotCommand_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::srv::SendRobotCommand_Response msg_;
};

class Init_SendRobotCommand_Response_ok
{
public:
  Init_SendRobotCommand_Response_ok()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendRobotCommand_Response_message ok(::interface_package::srv::SendRobotCommand_Response::_ok_type arg)
  {
    msg_.ok = std::move(arg);
    return Init_SendRobotCommand_Response_message(msg_);
  }

private:
  ::interface_package::srv::SendRobotCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::srv::SendRobotCommand_Response>()
{
  return interface_package::srv::builder::Init_SendRobotCommand_Response_ok();
}

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__SEND_ROBOT_COMMAND__BUILDER_HPP_
