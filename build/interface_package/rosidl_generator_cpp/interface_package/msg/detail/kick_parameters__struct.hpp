// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface_package:msg/KickParameters.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__KICK_PARAMETERS__STRUCT_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__KICK_PARAMETERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interface_package__msg__KickParameters __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__msg__KickParameters __declspec(deprecated)
#endif

namespace interface_package
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KickParameters_
{
  using Type = KickParameters_<ContainerAllocator>;

  explicit KickParameters_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kick_speed = 0.0;
      this->kick_angle_deg = 0.0;
      this->kick_distance = 0.0;
      this->facing_tolerance = 0.0;
      this->kick_push_speed = 0.0;
      this->dribbler_rpm = 0.0;
    }
  }

  explicit KickParameters_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kick_speed = 0.0;
      this->kick_angle_deg = 0.0;
      this->kick_distance = 0.0;
      this->facing_tolerance = 0.0;
      this->kick_push_speed = 0.0;
      this->dribbler_rpm = 0.0;
    }
  }

  // field types and members
  using _kick_speed_type =
    double;
  _kick_speed_type kick_speed;
  using _kick_angle_deg_type =
    double;
  _kick_angle_deg_type kick_angle_deg;
  using _kick_distance_type =
    double;
  _kick_distance_type kick_distance;
  using _facing_tolerance_type =
    double;
  _facing_tolerance_type facing_tolerance;
  using _kick_push_speed_type =
    double;
  _kick_push_speed_type kick_push_speed;
  using _dribbler_rpm_type =
    double;
  _dribbler_rpm_type dribbler_rpm;

  // setters for named parameter idiom
  Type & set__kick_speed(
    const double & _arg)
  {
    this->kick_speed = _arg;
    return *this;
  }
  Type & set__kick_angle_deg(
    const double & _arg)
  {
    this->kick_angle_deg = _arg;
    return *this;
  }
  Type & set__kick_distance(
    const double & _arg)
  {
    this->kick_distance = _arg;
    return *this;
  }
  Type & set__facing_tolerance(
    const double & _arg)
  {
    this->facing_tolerance = _arg;
    return *this;
  }
  Type & set__kick_push_speed(
    const double & _arg)
  {
    this->kick_push_speed = _arg;
    return *this;
  }
  Type & set__dribbler_rpm(
    const double & _arg)
  {
    this->dribbler_rpm = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_package::msg::KickParameters_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::msg::KickParameters_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::msg::KickParameters_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::msg::KickParameters_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::msg::KickParameters_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::msg::KickParameters_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::msg::KickParameters_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::msg::KickParameters_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::msg::KickParameters_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::msg::KickParameters_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__msg__KickParameters
    std::shared_ptr<interface_package::msg::KickParameters_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__msg__KickParameters
    std::shared_ptr<interface_package::msg::KickParameters_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KickParameters_ & other) const
  {
    if (this->kick_speed != other.kick_speed) {
      return false;
    }
    if (this->kick_angle_deg != other.kick_angle_deg) {
      return false;
    }
    if (this->kick_distance != other.kick_distance) {
      return false;
    }
    if (this->facing_tolerance != other.facing_tolerance) {
      return false;
    }
    if (this->kick_push_speed != other.kick_push_speed) {
      return false;
    }
    if (this->dribbler_rpm != other.dribbler_rpm) {
      return false;
    }
    return true;
  }
  bool operator!=(const KickParameters_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KickParameters_

// alias to use template instance with default allocator
using KickParameters =
  interface_package::msg::KickParameters_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__KICK_PARAMETERS__STRUCT_HPP_
