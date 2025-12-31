// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface_package:msg/ControlCommand.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__CONTROL_COMMAND__STRUCT_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__CONTROL_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'velocity'
#include "interface_package/msg/detail/twist2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interface_package__msg__ControlCommand __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__msg__ControlCommand __declspec(deprecated)
#endif

namespace interface_package
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControlCommand_
{
  using Type = ControlCommand_<ContainerAllocator>;

  explicit ControlCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_velocity = false;
      this->kick = false;
      this->kick_speed = 0.0;
      this->dribbler = false;
      this->dribbler_rpm = 0.0;
    }
  }

  explicit ControlCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : velocity(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_velocity = false;
      this->kick = false;
      this->kick_speed = 0.0;
      this->dribbler = false;
      this->dribbler_rpm = 0.0;
    }
  }

  // field types and members
  using _has_velocity_type =
    bool;
  _has_velocity_type has_velocity;
  using _velocity_type =
    interface_package::msg::Twist2D_<ContainerAllocator>;
  _velocity_type velocity;
  using _kick_type =
    bool;
  _kick_type kick;
  using _kick_speed_type =
    double;
  _kick_speed_type kick_speed;
  using _dribbler_type =
    bool;
  _dribbler_type dribbler;
  using _dribbler_rpm_type =
    double;
  _dribbler_rpm_type dribbler_rpm;

  // setters for named parameter idiom
  Type & set__has_velocity(
    const bool & _arg)
  {
    this->has_velocity = _arg;
    return *this;
  }
  Type & set__velocity(
    const interface_package::msg::Twist2D_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__kick(
    const bool & _arg)
  {
    this->kick = _arg;
    return *this;
  }
  Type & set__kick_speed(
    const double & _arg)
  {
    this->kick_speed = _arg;
    return *this;
  }
  Type & set__dribbler(
    const bool & _arg)
  {
    this->dribbler = _arg;
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
    interface_package::msg::ControlCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::msg::ControlCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::msg::ControlCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::msg::ControlCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::msg::ControlCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::msg::ControlCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::msg::ControlCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::msg::ControlCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::msg::ControlCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::msg::ControlCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__msg__ControlCommand
    std::shared_ptr<interface_package::msg::ControlCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__msg__ControlCommand
    std::shared_ptr<interface_package::msg::ControlCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlCommand_ & other) const
  {
    if (this->has_velocity != other.has_velocity) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->kick != other.kick) {
      return false;
    }
    if (this->kick_speed != other.kick_speed) {
      return false;
    }
    if (this->dribbler != other.dribbler) {
      return false;
    }
    if (this->dribbler_rpm != other.dribbler_rpm) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlCommand_

// alias to use template instance with default allocator
using ControlCommand =
  interface_package::msg::ControlCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__CONTROL_COMMAND__STRUCT_HPP_
