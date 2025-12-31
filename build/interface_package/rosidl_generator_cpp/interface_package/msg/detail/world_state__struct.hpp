// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface_package:msg/WorldState.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__WORLD_STATE__STRUCT_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__WORLD_STATE__STRUCT_HPP_

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
// Member 'field'
#include "interface_package/msg/detail/field_dimensions__struct.hpp"
// Member 'friendly'
// Member 'opponent'
#include "interface_package/msg/detail/robot_state__struct.hpp"
// Member 'ball'
#include "interface_package/msg/detail/ball_state__struct.hpp"
// Member 'friendly_color'
#include "interface_package/msg/detail/team_color__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interface_package__msg__WorldState __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__msg__WorldState __declspec(deprecated)
#endif

namespace interface_package
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WorldState_
{
  using Type = WorldState_<ContainerAllocator>;

  explicit WorldState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init),
    field(_init),
    ball(_init),
    friendly_color(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->capture_timestamp = 0.0;
    }
  }

  explicit WorldState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    field(_alloc, _init),
    ball(_alloc, _init),
    friendly_color(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->capture_timestamp = 0.0;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _capture_timestamp_type =
    double;
  _capture_timestamp_type capture_timestamp;
  using _field_type =
    interface_package::msg::FieldDimensions_<ContainerAllocator>;
  _field_type field;
  using _friendly_type =
    std::vector<interface_package::msg::RobotState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interface_package::msg::RobotState_<ContainerAllocator>>>;
  _friendly_type friendly;
  using _opponent_type =
    std::vector<interface_package::msg::RobotState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interface_package::msg::RobotState_<ContainerAllocator>>>;
  _opponent_type opponent;
  using _ball_type =
    interface_package::msg::BallState_<ContainerAllocator>;
  _ball_type ball;
  using _friendly_color_type =
    interface_package::msg::TeamColor_<ContainerAllocator>;
  _friendly_color_type friendly_color;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__capture_timestamp(
    const double & _arg)
  {
    this->capture_timestamp = _arg;
    return *this;
  }
  Type & set__field(
    const interface_package::msg::FieldDimensions_<ContainerAllocator> & _arg)
  {
    this->field = _arg;
    return *this;
  }
  Type & set__friendly(
    const std::vector<interface_package::msg::RobotState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interface_package::msg::RobotState_<ContainerAllocator>>> & _arg)
  {
    this->friendly = _arg;
    return *this;
  }
  Type & set__opponent(
    const std::vector<interface_package::msg::RobotState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interface_package::msg::RobotState_<ContainerAllocator>>> & _arg)
  {
    this->opponent = _arg;
    return *this;
  }
  Type & set__ball(
    const interface_package::msg::BallState_<ContainerAllocator> & _arg)
  {
    this->ball = _arg;
    return *this;
  }
  Type & set__friendly_color(
    const interface_package::msg::TeamColor_<ContainerAllocator> & _arg)
  {
    this->friendly_color = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_package::msg::WorldState_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::msg::WorldState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::msg::WorldState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::msg::WorldState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::msg::WorldState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::msg::WorldState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::msg::WorldState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::msg::WorldState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::msg::WorldState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::msg::WorldState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__msg__WorldState
    std::shared_ptr<interface_package::msg::WorldState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__msg__WorldState
    std::shared_ptr<interface_package::msg::WorldState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WorldState_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->capture_timestamp != other.capture_timestamp) {
      return false;
    }
    if (this->field != other.field) {
      return false;
    }
    if (this->friendly != other.friendly) {
      return false;
    }
    if (this->opponent != other.opponent) {
      return false;
    }
    if (this->ball != other.ball) {
      return false;
    }
    if (this->friendly_color != other.friendly_color) {
      return false;
    }
    return true;
  }
  bool operator!=(const WorldState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WorldState_

// alias to use template instance with default allocator
using WorldState =
  interface_package::msg::WorldState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__WORLD_STATE__STRUCT_HPP_
