// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_package:msg/BehaviorStatus.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__BEHAVIOR_STATUS__BUILDER_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__BEHAVIOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_package/msg/detail/behavior_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_package
{

namespace msg
{

namespace builder
{

class Init_BehaviorStatus_value
{
public:
  Init_BehaviorStatus_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface_package::msg::BehaviorStatus value(::interface_package::msg::BehaviorStatus::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::msg::BehaviorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::msg::BehaviorStatus>()
{
  return interface_package::msg::builder::Init_BehaviorStatus_value();
}

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__BEHAVIOR_STATUS__BUILDER_HPP_
