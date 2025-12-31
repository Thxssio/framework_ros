// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface_package:msg/BallState.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__BALL_STATE__STRUCT_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__BALL_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "interface_package/msg/detail/pose2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interface_package__msg__BallState __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__msg__BallState __declspec(deprecated)
#endif

namespace interface_package
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BallState_
{
  using Type = BallState_<ContainerAllocator>;

  explicit BallState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->visible = false;
      this->confidence = 0.0f;
    }
  }

  explicit BallState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->visible = false;
      this->confidence = 0.0f;
    }
  }

  // field types and members
  using _pose_type =
    interface_package::msg::Pose2D_<ContainerAllocator>;
  _pose_type pose;
  using _visible_type =
    bool;
  _visible_type visible;
  using _confidence_type =
    float;
  _confidence_type confidence;

  // setters for named parameter idiom
  Type & set__pose(
    const interface_package::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__visible(
    const bool & _arg)
  {
    this->visible = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_package::msg::BallState_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::msg::BallState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::msg::BallState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::msg::BallState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::msg::BallState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::msg::BallState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::msg::BallState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::msg::BallState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::msg::BallState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::msg::BallState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__msg__BallState
    std::shared_ptr<interface_package::msg::BallState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__msg__BallState
    std::shared_ptr<interface_package::msg::BallState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BallState_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->visible != other.visible) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const BallState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BallState_

// alias to use template instance with default allocator
using BallState =
  interface_package::msg::BallState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__BALL_STATE__STRUCT_HPP_
