// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface_package:msg/RobotTarget.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__ROBOT_TARGET__STRUCT_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__ROBOT_TARGET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'target'
#include "interface_package/msg/detail/pose2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interface_package__msg__RobotTarget __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__msg__RobotTarget __declspec(deprecated)
#endif

namespace interface_package
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotTarget_
{
  using Type = RobotTarget_<ContainerAllocator>;

  explicit RobotTarget_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init),
    target(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0ul;
      this->force_path = false;
      this->allow_goal_area = false;
      this->avoid_ball = false;
    }
  }

  explicit RobotTarget_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    target(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0ul;
      this->force_path = false;
      this->allow_goal_area = false;
      this->avoid_ball = false;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _robot_id_type =
    uint32_t;
  _robot_id_type robot_id;
  using _target_type =
    interface_package::msg::Pose2D_<ContainerAllocator>;
  _target_type target;
  using _force_path_type =
    bool;
  _force_path_type force_path;
  using _allow_goal_area_type =
    bool;
  _allow_goal_area_type allow_goal_area;
  using _avoid_ball_type =
    bool;
  _avoid_ball_type avoid_ball;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__robot_id(
    const uint32_t & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__target(
    const interface_package::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->target = _arg;
    return *this;
  }
  Type & set__force_path(
    const bool & _arg)
  {
    this->force_path = _arg;
    return *this;
  }
  Type & set__allow_goal_area(
    const bool & _arg)
  {
    this->allow_goal_area = _arg;
    return *this;
  }
  Type & set__avoid_ball(
    const bool & _arg)
  {
    this->avoid_ball = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_package::msg::RobotTarget_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::msg::RobotTarget_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::msg::RobotTarget_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::msg::RobotTarget_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::msg::RobotTarget_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::msg::RobotTarget_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::msg::RobotTarget_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::msg::RobotTarget_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::msg::RobotTarget_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::msg::RobotTarget_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__msg__RobotTarget
    std::shared_ptr<interface_package::msg::RobotTarget_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__msg__RobotTarget
    std::shared_ptr<interface_package::msg::RobotTarget_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotTarget_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->target != other.target) {
      return false;
    }
    if (this->force_path != other.force_path) {
      return false;
    }
    if (this->allow_goal_area != other.allow_goal_area) {
      return false;
    }
    if (this->avoid_ball != other.avoid_ball) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotTarget_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotTarget_

// alias to use template instance with default allocator
using RobotTarget =
  interface_package::msg::RobotTarget_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__ROBOT_TARGET__STRUCT_HPP_
