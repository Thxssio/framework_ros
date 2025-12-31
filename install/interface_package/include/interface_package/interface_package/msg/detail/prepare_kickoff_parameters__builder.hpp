// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_package:msg/PrepareKickoffParameters.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__PREPARE_KICKOFF_PARAMETERS__BUILDER_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__PREPARE_KICKOFF_PARAMETERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_package/msg/detail/prepare_kickoff_parameters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_package
{

namespace msg
{

namespace builder
{

class Init_PrepareKickoffParameters_heading_tolerance
{
public:
  explicit Init_PrepareKickoffParameters_heading_tolerance(::interface_package::msg::PrepareKickoffParameters & msg)
  : msg_(msg)
  {}
  ::interface_package::msg::PrepareKickoffParameters heading_tolerance(::interface_package::msg::PrepareKickoffParameters::_heading_tolerance_type arg)
  {
    msg_.heading_tolerance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::msg::PrepareKickoffParameters msg_;
};

class Init_PrepareKickoffParameters_approach_tolerance
{
public:
  explicit Init_PrepareKickoffParameters_approach_tolerance(::interface_package::msg::PrepareKickoffParameters & msg)
  : msg_(msg)
  {}
  Init_PrepareKickoffParameters_heading_tolerance approach_tolerance(::interface_package::msg::PrepareKickoffParameters::_approach_tolerance_type arg)
  {
    msg_.approach_tolerance = std::move(arg);
    return Init_PrepareKickoffParameters_heading_tolerance(msg_);
  }

private:
  ::interface_package::msg::PrepareKickoffParameters msg_;
};

class Init_PrepareKickoffParameters_offset
{
public:
  Init_PrepareKickoffParameters_offset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PrepareKickoffParameters_approach_tolerance offset(::interface_package::msg::PrepareKickoffParameters::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return Init_PrepareKickoffParameters_approach_tolerance(msg_);
  }

private:
  ::interface_package::msg::PrepareKickoffParameters msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::msg::PrepareKickoffParameters>()
{
  return interface_package::msg::builder::Init_PrepareKickoffParameters_offset();
}

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__PREPARE_KICKOFF_PARAMETERS__BUILDER_HPP_
