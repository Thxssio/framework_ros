// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_package:msg/PathPreview.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__PATH_PREVIEW__BUILDER_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__PATH_PREVIEW__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_package/msg/detail/path_preview__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_package
{

namespace msg
{

namespace builder
{

class Init_PathPreview_direct
{
public:
  explicit Init_PathPreview_direct(::interface_package::msg::PathPreview & msg)
  : msg_(msg)
  {}
  ::interface_package::msg::PathPreview direct(::interface_package::msg::PathPreview::_direct_type arg)
  {
    msg_.direct = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::msg::PathPreview msg_;
};

class Init_PathPreview_path
{
public:
  explicit Init_PathPreview_path(::interface_package::msg::PathPreview & msg)
  : msg_(msg)
  {}
  Init_PathPreview_direct path(::interface_package::msg::PathPreview::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_PathPreview_direct(msg_);
  }

private:
  ::interface_package::msg::PathPreview msg_;
};

class Init_PathPreview_robot_id
{
public:
  Init_PathPreview_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathPreview_path robot_id(::interface_package::msg::PathPreview::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_PathPreview_path(msg_);
  }

private:
  ::interface_package::msg::PathPreview msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::msg::PathPreview>()
{
  return interface_package::msg::builder::Init_PathPreview_robot_id();
}

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__PATH_PREVIEW__BUILDER_HPP_
