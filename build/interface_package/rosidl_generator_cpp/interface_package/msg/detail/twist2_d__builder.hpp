// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_package:msg/Twist2D.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__TWIST2_D__BUILDER_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__TWIST2_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_package/msg/detail/twist2_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_package
{

namespace msg
{

namespace builder
{

class Init_Twist2D_omega
{
public:
  explicit Init_Twist2D_omega(::interface_package::msg::Twist2D & msg)
  : msg_(msg)
  {}
  ::interface_package::msg::Twist2D omega(::interface_package::msg::Twist2D::_omega_type arg)
  {
    msg_.omega = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::msg::Twist2D msg_;
};

class Init_Twist2D_vy
{
public:
  explicit Init_Twist2D_vy(::interface_package::msg::Twist2D & msg)
  : msg_(msg)
  {}
  Init_Twist2D_omega vy(::interface_package::msg::Twist2D::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return Init_Twist2D_omega(msg_);
  }

private:
  ::interface_package::msg::Twist2D msg_;
};

class Init_Twist2D_vx
{
public:
  Init_Twist2D_vx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Twist2D_vy vx(::interface_package::msg::Twist2D::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_Twist2D_vy(msg_);
  }

private:
  ::interface_package::msg::Twist2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::msg::Twist2D>()
{
  return interface_package::msg::builder::Init_Twist2D_vx();
}

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__TWIST2_D__BUILDER_HPP_
