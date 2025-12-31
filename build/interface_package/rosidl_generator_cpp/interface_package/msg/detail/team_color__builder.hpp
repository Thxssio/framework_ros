// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_package:msg/TeamColor.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__TEAM_COLOR__BUILDER_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__TEAM_COLOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_package/msg/detail/team_color__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_package
{

namespace msg
{

namespace builder
{

class Init_TeamColor_value
{
public:
  Init_TeamColor_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface_package::msg::TeamColor value(::interface_package::msg::TeamColor::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::msg::TeamColor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::msg::TeamColor>()
{
  return interface_package::msg::builder::Init_TeamColor_value();
}

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__TEAM_COLOR__BUILDER_HPP_
