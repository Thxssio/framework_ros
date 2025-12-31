// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_package:msg/BallState.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__BALL_STATE__BUILDER_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__BALL_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_package/msg/detail/ball_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_package
{

namespace msg
{

namespace builder
{

class Init_BallState_confidence
{
public:
  explicit Init_BallState_confidence(::interface_package::msg::BallState & msg)
  : msg_(msg)
  {}
  ::interface_package::msg::BallState confidence(::interface_package::msg::BallState::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::msg::BallState msg_;
};

class Init_BallState_visible
{
public:
  explicit Init_BallState_visible(::interface_package::msg::BallState & msg)
  : msg_(msg)
  {}
  Init_BallState_confidence visible(::interface_package::msg::BallState::_visible_type arg)
  {
    msg_.visible = std::move(arg);
    return Init_BallState_confidence(msg_);
  }

private:
  ::interface_package::msg::BallState msg_;
};

class Init_BallState_pose
{
public:
  Init_BallState_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BallState_visible pose(::interface_package::msg::BallState::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_BallState_visible(msg_);
  }

private:
  ::interface_package::msg::BallState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::msg::BallState>()
{
  return interface_package::msg::builder::Init_BallState_pose();
}

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__BALL_STATE__BUILDER_HPP_
