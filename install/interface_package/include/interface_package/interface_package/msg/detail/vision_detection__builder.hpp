// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_package:msg/VisionDetection.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__VISION_DETECTION__BUILDER_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__VISION_DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_package/msg/detail/vision_detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_package
{

namespace msg
{

namespace builder
{

class Init_VisionDetection_ball
{
public:
  explicit Init_VisionDetection_ball(::interface_package::msg::VisionDetection & msg)
  : msg_(msg)
  {}
  ::interface_package::msg::VisionDetection ball(::interface_package::msg::VisionDetection::_ball_type arg)
  {
    msg_.ball = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::msg::VisionDetection msg_;
};

class Init_VisionDetection_blue
{
public:
  explicit Init_VisionDetection_blue(::interface_package::msg::VisionDetection & msg)
  : msg_(msg)
  {}
  Init_VisionDetection_ball blue(::interface_package::msg::VisionDetection::_blue_type arg)
  {
    msg_.blue = std::move(arg);
    return Init_VisionDetection_ball(msg_);
  }

private:
  ::interface_package::msg::VisionDetection msg_;
};

class Init_VisionDetection_yellow
{
public:
  explicit Init_VisionDetection_yellow(::interface_package::msg::VisionDetection & msg)
  : msg_(msg)
  {}
  Init_VisionDetection_blue yellow(::interface_package::msg::VisionDetection::_yellow_type arg)
  {
    msg_.yellow = std::move(arg);
    return Init_VisionDetection_blue(msg_);
  }

private:
  ::interface_package::msg::VisionDetection msg_;
};

class Init_VisionDetection_capture_timestamp
{
public:
  explicit Init_VisionDetection_capture_timestamp(::interface_package::msg::VisionDetection & msg)
  : msg_(msg)
  {}
  Init_VisionDetection_yellow capture_timestamp(::interface_package::msg::VisionDetection::_capture_timestamp_type arg)
  {
    msg_.capture_timestamp = std::move(arg);
    return Init_VisionDetection_yellow(msg_);
  }

private:
  ::interface_package::msg::VisionDetection msg_;
};

class Init_VisionDetection_stamp
{
public:
  Init_VisionDetection_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VisionDetection_capture_timestamp stamp(::interface_package::msg::VisionDetection::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_VisionDetection_capture_timestamp(msg_);
  }

private:
  ::interface_package::msg::VisionDetection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::msg::VisionDetection>()
{
  return interface_package::msg::builder::Init_VisionDetection_stamp();
}

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__VISION_DETECTION__BUILDER_HPP_
