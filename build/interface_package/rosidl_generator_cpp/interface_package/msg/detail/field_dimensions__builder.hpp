// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_package:msg/FieldDimensions.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__FIELD_DIMENSIONS__BUILDER_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__FIELD_DIMENSIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_package/msg/detail/field_dimensions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_package
{

namespace msg
{

namespace builder
{

class Init_FieldDimensions_boundary_width
{
public:
  explicit Init_FieldDimensions_boundary_width(::interface_package::msg::FieldDimensions & msg)
  : msg_(msg)
  {}
  ::interface_package::msg::FieldDimensions boundary_width(::interface_package::msg::FieldDimensions::_boundary_width_type arg)
  {
    msg_.boundary_width = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::msg::FieldDimensions msg_;
};

class Init_FieldDimensions_goal_depth
{
public:
  explicit Init_FieldDimensions_goal_depth(::interface_package::msg::FieldDimensions & msg)
  : msg_(msg)
  {}
  Init_FieldDimensions_boundary_width goal_depth(::interface_package::msg::FieldDimensions::_goal_depth_type arg)
  {
    msg_.goal_depth = std::move(arg);
    return Init_FieldDimensions_boundary_width(msg_);
  }

private:
  ::interface_package::msg::FieldDimensions msg_;
};

class Init_FieldDimensions_goal_width
{
public:
  explicit Init_FieldDimensions_goal_width(::interface_package::msg::FieldDimensions & msg)
  : msg_(msg)
  {}
  Init_FieldDimensions_goal_depth goal_width(::interface_package::msg::FieldDimensions::_goal_width_type arg)
  {
    msg_.goal_width = std::move(arg);
    return Init_FieldDimensions_goal_depth(msg_);
  }

private:
  ::interface_package::msg::FieldDimensions msg_;
};

class Init_FieldDimensions_width
{
public:
  explicit Init_FieldDimensions_width(::interface_package::msg::FieldDimensions & msg)
  : msg_(msg)
  {}
  Init_FieldDimensions_goal_width width(::interface_package::msg::FieldDimensions::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_FieldDimensions_goal_width(msg_);
  }

private:
  ::interface_package::msg::FieldDimensions msg_;
};

class Init_FieldDimensions_length
{
public:
  Init_FieldDimensions_length()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FieldDimensions_width length(::interface_package::msg::FieldDimensions::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_FieldDimensions_width(msg_);
  }

private:
  ::interface_package::msg::FieldDimensions msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::msg::FieldDimensions>()
{
  return interface_package::msg::builder::Init_FieldDimensions_length();
}

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__FIELD_DIMENSIONS__BUILDER_HPP_
