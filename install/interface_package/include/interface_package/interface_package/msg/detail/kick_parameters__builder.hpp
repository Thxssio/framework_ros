// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_package:msg/KickParameters.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__KICK_PARAMETERS__BUILDER_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__KICK_PARAMETERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_package/msg/detail/kick_parameters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_package
{

namespace msg
{

namespace builder
{

class Init_KickParameters_dribbler_rpm
{
public:
  explicit Init_KickParameters_dribbler_rpm(::interface_package::msg::KickParameters & msg)
  : msg_(msg)
  {}
  ::interface_package::msg::KickParameters dribbler_rpm(::interface_package::msg::KickParameters::_dribbler_rpm_type arg)
  {
    msg_.dribbler_rpm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::msg::KickParameters msg_;
};

class Init_KickParameters_kick_push_speed
{
public:
  explicit Init_KickParameters_kick_push_speed(::interface_package::msg::KickParameters & msg)
  : msg_(msg)
  {}
  Init_KickParameters_dribbler_rpm kick_push_speed(::interface_package::msg::KickParameters::_kick_push_speed_type arg)
  {
    msg_.kick_push_speed = std::move(arg);
    return Init_KickParameters_dribbler_rpm(msg_);
  }

private:
  ::interface_package::msg::KickParameters msg_;
};

class Init_KickParameters_facing_tolerance
{
public:
  explicit Init_KickParameters_facing_tolerance(::interface_package::msg::KickParameters & msg)
  : msg_(msg)
  {}
  Init_KickParameters_kick_push_speed facing_tolerance(::interface_package::msg::KickParameters::_facing_tolerance_type arg)
  {
    msg_.facing_tolerance = std::move(arg);
    return Init_KickParameters_kick_push_speed(msg_);
  }

private:
  ::interface_package::msg::KickParameters msg_;
};

class Init_KickParameters_kick_distance
{
public:
  explicit Init_KickParameters_kick_distance(::interface_package::msg::KickParameters & msg)
  : msg_(msg)
  {}
  Init_KickParameters_facing_tolerance kick_distance(::interface_package::msg::KickParameters::_kick_distance_type arg)
  {
    msg_.kick_distance = std::move(arg);
    return Init_KickParameters_facing_tolerance(msg_);
  }

private:
  ::interface_package::msg::KickParameters msg_;
};

class Init_KickParameters_kick_angle_deg
{
public:
  explicit Init_KickParameters_kick_angle_deg(::interface_package::msg::KickParameters & msg)
  : msg_(msg)
  {}
  Init_KickParameters_kick_distance kick_angle_deg(::interface_package::msg::KickParameters::_kick_angle_deg_type arg)
  {
    msg_.kick_angle_deg = std::move(arg);
    return Init_KickParameters_kick_distance(msg_);
  }

private:
  ::interface_package::msg::KickParameters msg_;
};

class Init_KickParameters_kick_speed
{
public:
  Init_KickParameters_kick_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KickParameters_kick_angle_deg kick_speed(::interface_package::msg::KickParameters::_kick_speed_type arg)
  {
    msg_.kick_speed = std::move(arg);
    return Init_KickParameters_kick_angle_deg(msg_);
  }

private:
  ::interface_package::msg::KickParameters msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::msg::KickParameters>()
{
  return interface_package::msg::builder::Init_KickParameters_kick_speed();
}

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__KICK_PARAMETERS__BUILDER_HPP_
