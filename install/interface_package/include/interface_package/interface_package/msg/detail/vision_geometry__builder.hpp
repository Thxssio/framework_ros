// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_package:msg/VisionGeometry.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__VISION_GEOMETRY__BUILDER_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__VISION_GEOMETRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_package/msg/detail/vision_geometry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_package
{

namespace msg
{

namespace builder
{

class Init_VisionGeometry_camera_ids
{
public:
  explicit Init_VisionGeometry_camera_ids(::interface_package::msg::VisionGeometry & msg)
  : msg_(msg)
  {}
  ::interface_package::msg::VisionGeometry camera_ids(::interface_package::msg::VisionGeometry::_camera_ids_type arg)
  {
    msg_.camera_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_package::msg::VisionGeometry msg_;
};

class Init_VisionGeometry_camera_count
{
public:
  explicit Init_VisionGeometry_camera_count(::interface_package::msg::VisionGeometry & msg)
  : msg_(msg)
  {}
  Init_VisionGeometry_camera_ids camera_count(::interface_package::msg::VisionGeometry::_camera_count_type arg)
  {
    msg_.camera_count = std::move(arg);
    return Init_VisionGeometry_camera_ids(msg_);
  }

private:
  ::interface_package::msg::VisionGeometry msg_;
};

class Init_VisionGeometry_expected_cameras
{
public:
  explicit Init_VisionGeometry_expected_cameras(::interface_package::msg::VisionGeometry & msg)
  : msg_(msg)
  {}
  Init_VisionGeometry_camera_count expected_cameras(::interface_package::msg::VisionGeometry::_expected_cameras_type arg)
  {
    msg_.expected_cameras = std::move(arg);
    return Init_VisionGeometry_camera_count(msg_);
  }

private:
  ::interface_package::msg::VisionGeometry msg_;
};

class Init_VisionGeometry_field
{
public:
  explicit Init_VisionGeometry_field(::interface_package::msg::VisionGeometry & msg)
  : msg_(msg)
  {}
  Init_VisionGeometry_expected_cameras field(::interface_package::msg::VisionGeometry::_field_type arg)
  {
    msg_.field = std::move(arg);
    return Init_VisionGeometry_expected_cameras(msg_);
  }

private:
  ::interface_package::msg::VisionGeometry msg_;
};

class Init_VisionGeometry_stamp
{
public:
  Init_VisionGeometry_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VisionGeometry_field stamp(::interface_package::msg::VisionGeometry::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_VisionGeometry_field(msg_);
  }

private:
  ::interface_package::msg::VisionGeometry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_package::msg::VisionGeometry>()
{
  return interface_package::msg::builder::Init_VisionGeometry_stamp();
}

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__VISION_GEOMETRY__BUILDER_HPP_
