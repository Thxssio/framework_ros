// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_package:msg/WorldState.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__WORLD_STATE__BUILDER_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__WORLD_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_package/msg/detail/world_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_package
{

namespace msg
{

namespace builder
{

class Init_WorldState_friendly_color
{
public:
  explicit Init_WorldState_friendly_color(::interface_package::msg::WorldState & msg)
  : msg_(msg)
  {}
  ::interface_package::msg::WorldState friendly_color(::interface_package::msg::WorldState::_friendly_color_type arg)
  {
    msg_.friendly_color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::msg::WorldState msg_;
};

class Init_WorldState_ball
{
public:
  explicit Init_WorldState_ball(::interface_package::msg::WorldState & msg)
  : msg_(msg)
  {}
  Init_WorldState_friendly_color ball(::interface_package::msg::WorldState::_ball_type arg)
  {
    msg_.ball = std::move(arg);
    return Init_WorldState_friendly_color(msg_);
  }

private:
  ::interface_package::msg::WorldState msg_;
};

class Init_WorldState_opponent
{
public:
  explicit Init_WorldState_opponent(::interface_package::msg::WorldState & msg)
  : msg_(msg)
  {}
  Init_WorldState_ball opponent(::interface_package::msg::WorldState::_opponent_type arg)
  {
    msg_.opponent = std::move(arg);
    return Init_WorldState_ball(msg_);
  }

private:
  ::interface_package::msg::WorldState msg_;
};

class Init_WorldState_friendly
{
public:
  explicit Init_WorldState_friendly(::interface_package::msg::WorldState & msg)
  : msg_(msg)
  {}
  Init_WorldState_opponent friendly(::interface_package::msg::WorldState::_friendly_type arg)
  {
    msg_.friendly = std::move(arg);
    return Init_WorldState_opponent(msg_);
  }

private:
  ::interface_package::msg::WorldState msg_;
};

class Init_WorldState_field
{
public:
  explicit Init_WorldState_field(::interface_package::msg::WorldState & msg)
  : msg_(msg)
  {}
  Init_WorldState_friendly field(::interface_package::msg::WorldState::_field_type arg)
  {
    msg_.field = std::move(arg);
    return Init_WorldState_friendly(msg_);
  }

private:
  ::interface_package::msg::WorldState msg_;
};

class Init_WorldState_capture_timestamp
{
public:
  explicit Init_WorldState_capture_timestamp(::interface_package::msg::WorldState & msg)
  : msg_(msg)
  {}
  Init_WorldState_field capture_timestamp(::interface_package::msg::WorldState::_capture_timestamp_type arg)
  {
    msg_.capture_timestamp = std::move(arg);
    return Init_WorldState_field(msg_);
  }

private:
  ::interface_package::msg::WorldState msg_;
};

class Init_WorldState_stamp
{
public:
  Init_WorldState_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WorldState_capture_timestamp stamp(::interface_package::msg::WorldState::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_WorldState_capture_timestamp(msg_);
  }

private:
  ::interface_package::msg::WorldState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::msg::WorldState>()
{
  return interface_package::msg::builder::Init_WorldState_stamp();
}

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__WORLD_STATE__BUILDER_HPP_
