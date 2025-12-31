// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_package:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_package/msg/detail/robot_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_package
{

namespace msg
{

namespace builder
{

class Init_RobotState_confidence
{
public:
  explicit Init_RobotState_confidence(::interface_package::msg::RobotState & msg)
  : msg_(msg)
  {}
  ::interface_package::msg::RobotState confidence(::interface_package::msg::RobotState::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::msg::RobotState msg_;
};

class Init_RobotState_visible
{
public:
  explicit Init_RobotState_visible(::interface_package::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_confidence visible(::interface_package::msg::RobotState::_visible_type arg)
  {
    msg_.visible = std::move(arg);
    return Init_RobotState_confidence(msg_);
  }

private:
  ::interface_package::msg::RobotState msg_;
};

class Init_RobotState_twist
{
public:
  explicit Init_RobotState_twist(::interface_package::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_visible twist(::interface_package::msg::RobotState::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_RobotState_visible(msg_);
  }

private:
  ::interface_package::msg::RobotState msg_;
};

class Init_RobotState_pose
{
public:
  explicit Init_RobotState_pose(::interface_package::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_twist pose(::interface_package::msg::RobotState::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_RobotState_twist(msg_);
  }

private:
  ::interface_package::msg::RobotState msg_;
};

class Init_RobotState_id
{
public:
  Init_RobotState_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotState_pose id(::interface_package::msg::RobotState::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_RobotState_pose(msg_);
  }

private:
  ::interface_package::msg::RobotState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::msg::RobotState>()
{
  return interface_package::msg::builder::Init_RobotState_id();
}

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_
