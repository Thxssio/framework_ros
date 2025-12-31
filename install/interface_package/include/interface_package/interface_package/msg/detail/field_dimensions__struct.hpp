// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface_package:msg/FieldDimensions.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__FIELD_DIMENSIONS__STRUCT_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__FIELD_DIMENSIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interface_package__msg__FieldDimensions __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__msg__FieldDimensions __declspec(deprecated)
#endif

namespace interface_package
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FieldDimensions_
{
  using Type = FieldDimensions_<ContainerAllocator>;

  explicit FieldDimensions_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->length = 0.0;
      this->width = 0.0;
      this->goal_width = 0.0;
      this->goal_depth = 0.0;
      this->boundary_width = 0.0;
    }
  }

  explicit FieldDimensions_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->length = 0.0;
      this->width = 0.0;
      this->goal_width = 0.0;
      this->goal_depth = 0.0;
      this->boundary_width = 0.0;
    }
  }

  // field types and members
  using _length_type =
    double;
  _length_type length;
  using _width_type =
    double;
  _width_type width;
  using _goal_width_type =
    double;
  _goal_width_type goal_width;
  using _goal_depth_type =
    double;
  _goal_depth_type goal_depth;
  using _boundary_width_type =
    double;
  _boundary_width_type boundary_width;

  // setters for named parameter idiom
  Type & set__length(
    const double & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__width(
    const double & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__goal_width(
    const double & _arg)
  {
    this->goal_width = _arg;
    return *this;
  }
  Type & set__goal_depth(
    const double & _arg)
  {
    this->goal_depth = _arg;
    return *this;
  }
  Type & set__boundary_width(
    const double & _arg)
  {
    this->boundary_width = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_package::msg::FieldDimensions_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::msg::FieldDimensions_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::msg::FieldDimensions_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::msg::FieldDimensions_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::msg::FieldDimensions_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::msg::FieldDimensions_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::msg::FieldDimensions_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::msg::FieldDimensions_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::msg::FieldDimensions_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::msg::FieldDimensions_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__msg__FieldDimensions
    std::shared_ptr<interface_package::msg::FieldDimensions_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__msg__FieldDimensions
    std::shared_ptr<interface_package::msg::FieldDimensions_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FieldDimensions_ & other) const
  {
    if (this->length != other.length) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->goal_width != other.goal_width) {
      return false;
    }
    if (this->goal_depth != other.goal_depth) {
      return false;
    }
    if (this->boundary_width != other.boundary_width) {
      return false;
    }
    return true;
  }
  bool operator!=(const FieldDimensions_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FieldDimensions_

// alias to use template instance with default allocator
using FieldDimensions =
  interface_package::msg::FieldDimensions_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__FIELD_DIMENSIONS__STRUCT_HPP_
