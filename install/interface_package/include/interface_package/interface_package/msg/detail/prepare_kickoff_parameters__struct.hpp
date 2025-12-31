// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface_package:msg/PrepareKickoffParameters.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__PREPARE_KICKOFF_PARAMETERS__STRUCT_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__PREPARE_KICKOFF_PARAMETERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interface_package__msg__PrepareKickoffParameters __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__msg__PrepareKickoffParameters __declspec(deprecated)
#endif

namespace interface_package
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PrepareKickoffParameters_
{
  using Type = PrepareKickoffParameters_<ContainerAllocator>;

  explicit PrepareKickoffParameters_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->offset = 0.0;
      this->approach_tolerance = 0.0;
      this->heading_tolerance = 0.0;
    }
  }

  explicit PrepareKickoffParameters_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->offset = 0.0;
      this->approach_tolerance = 0.0;
      this->heading_tolerance = 0.0;
    }
  }

  // field types and members
  using _offset_type =
    double;
  _offset_type offset;
  using _approach_tolerance_type =
    double;
  _approach_tolerance_type approach_tolerance;
  using _heading_tolerance_type =
    double;
  _heading_tolerance_type heading_tolerance;

  // setters for named parameter idiom
  Type & set__offset(
    const double & _arg)
  {
    this->offset = _arg;
    return *this;
  }
  Type & set__approach_tolerance(
    const double & _arg)
  {
    this->approach_tolerance = _arg;
    return *this;
  }
  Type & set__heading_tolerance(
    const double & _arg)
  {
    this->heading_tolerance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_package::msg::PrepareKickoffParameters_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::msg::PrepareKickoffParameters_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::msg::PrepareKickoffParameters_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::msg::PrepareKickoffParameters_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::msg::PrepareKickoffParameters_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::msg::PrepareKickoffParameters_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::msg::PrepareKickoffParameters_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::msg::PrepareKickoffParameters_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::msg::PrepareKickoffParameters_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::msg::PrepareKickoffParameters_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__msg__PrepareKickoffParameters
    std::shared_ptr<interface_package::msg::PrepareKickoffParameters_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__msg__PrepareKickoffParameters
    std::shared_ptr<interface_package::msg::PrepareKickoffParameters_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PrepareKickoffParameters_ & other) const
  {
    if (this->offset != other.offset) {
      return false;
    }
    if (this->approach_tolerance != other.approach_tolerance) {
      return false;
    }
    if (this->heading_tolerance != other.heading_tolerance) {
      return false;
    }
    return true;
  }
  bool operator!=(const PrepareKickoffParameters_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PrepareKickoffParameters_

// alias to use template instance with default allocator
using PrepareKickoffParameters =
  interface_package::msg::PrepareKickoffParameters_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__PREPARE_KICKOFF_PARAMETERS__STRUCT_HPP_
