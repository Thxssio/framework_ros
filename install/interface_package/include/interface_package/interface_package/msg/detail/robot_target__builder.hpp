// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_package:msg/RobotTarget.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__ROBOT_TARGET__BUILDER_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__ROBOT_TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_package/msg/detail/robot_target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_package
{

namespace msg
{

namespace builder
{

class Init_RobotTarget_avoid_ball
{
public:
  explicit Init_RobotTarget_avoid_ball(::interface_package::msg::RobotTarget & msg)
  : msg_(msg)
  {}
  ::interface_package::msg::RobotTarget avoid_ball(::interface_package::msg::RobotTarget::_avoid_ball_type arg)
  {
    msg_.avoid_ball = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::msg::RobotTarget msg_;
};

class Init_RobotTarget_allow_goal_area
{
public:
  explicit Init_RobotTarget_allow_goal_area(::interface_package::msg::RobotTarget & msg)
  : msg_(msg)
  {}
  Init_RobotTarget_avoid_ball allow_goal_area(::interface_package::msg::RobotTarget::_allow_goal_area_type arg)
  {
    msg_.allow_goal_area = std::move(arg);
    return Init_RobotTarget_avoid_ball(msg_);
  }

private:
  ::interface_package::msg::RobotTarget msg_;
};

class Init_RobotTarget_force_path
{
public:
  explicit Init_RobotTarget_force_path(::interface_package::msg::RobotTarget & msg)
  : msg_(msg)
  {}
  Init_RobotTarget_allow_goal_area force_path(::interface_package::msg::RobotTarget::_force_path_type arg)
  {
    msg_.force_path = std::move(arg);
    return Init_RobotTarget_allow_goal_area(msg_);
  }

private:
  ::interface_package::msg::RobotTarget msg_;
};

class Init_RobotTarget_target
{
public:
  explicit Init_RobotTarget_target(::interface_package::msg::RobotTarget & msg)
  : msg_(msg)
  {}
  Init_RobotTarget_force_path target(::interface_package::msg::RobotTarget::_target_type arg)
  {
    msg_.target = std::move(arg);
    return Init_RobotTarget_force_path(msg_);
  }

private:
  ::interface_package::msg::RobotTarget msg_;
};

class Init_RobotTarget_robot_id
{
public:
  explicit Init_RobotTarget_robot_id(::interface_package::msg::RobotTarget & msg)
  : msg_(msg)
  {}
  Init_RobotTarget_target robot_id(::interface_package::msg::RobotTarget::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_RobotTarget_target(msg_);
  }

private:
  ::interface_package::msg::RobotTarget msg_;
};

class Init_RobotTarget_stamp
{
public:
  Init_RobotTarget_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotTarget_robot_id stamp(::interface_package::msg::RobotTarget::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_RobotTarget_robot_id(msg_);
  }

private:
  ::interface_package::msg::RobotTarget msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::msg::RobotTarget>()
{
  return interface_package::msg::builder::Init_RobotTarget_stamp();
}

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__ROBOT_TARGET__BUILDER_HPP_
