// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_package:msg/ControlCommand.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__CONTROL_COMMAND__BUILDER_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__CONTROL_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_package/msg/detail/control_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_package
{

namespace msg
{

namespace builder
{

class Init_ControlCommand_dribbler_rpm
{
public:
  explicit Init_ControlCommand_dribbler_rpm(::interface_package::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  ::interface_package::msg::ControlCommand dribbler_rpm(::interface_package::msg::ControlCommand::_dribbler_rpm_type arg)
  {
    msg_.dribbler_rpm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::msg::ControlCommand msg_;
};

class Init_ControlCommand_dribbler
{
public:
  explicit Init_ControlCommand_dribbler(::interface_package::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_dribbler_rpm dribbler(::interface_package::msg::ControlCommand::_dribbler_type arg)
  {
    msg_.dribbler = std::move(arg);
    return Init_ControlCommand_dribbler_rpm(msg_);
  }

private:
  ::interface_package::msg::ControlCommand msg_;
};

class Init_ControlCommand_kick_speed
{
public:
  explicit Init_ControlCommand_kick_speed(::interface_package::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_dribbler kick_speed(::interface_package::msg::ControlCommand::_kick_speed_type arg)
  {
    msg_.kick_speed = std::move(arg);
    return Init_ControlCommand_dribbler(msg_);
  }

private:
  ::interface_package::msg::ControlCommand msg_;
};

class Init_ControlCommand_kick
{
public:
  explicit Init_ControlCommand_kick(::interface_package::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_kick_speed kick(::interface_package::msg::ControlCommand::_kick_type arg)
  {
    msg_.kick = std::move(arg);
    return Init_ControlCommand_kick_speed(msg_);
  }

private:
  ::interface_package::msg::ControlCommand msg_;
};

class Init_ControlCommand_velocity
{
public:
  explicit Init_ControlCommand_velocity(::interface_package::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_kick velocity(::interface_package::msg::ControlCommand::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_ControlCommand_kick(msg_);
  }

private:
  ::interface_package::msg::ControlCommand msg_;
};

class Init_ControlCommand_has_velocity
{
public:
  Init_ControlCommand_has_velocity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlCommand_velocity has_velocity(::interface_package::msg::ControlCommand::_has_velocity_type arg)
  {
    msg_.has_velocity = std::move(arg);
    return Init_ControlCommand_velocity(msg_);
  }

private:
  ::interface_package::msg::ControlCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::msg::ControlCommand>()
{
  return interface_package::msg::builder::Init_ControlCommand_has_velocity();
}

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__CONTROL_COMMAND__BUILDER_HPP_
