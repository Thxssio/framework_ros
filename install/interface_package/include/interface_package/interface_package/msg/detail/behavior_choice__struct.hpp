// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface_package:msg/BehaviorChoice.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__BEHAVIOR_CHOICE__STRUCT_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__BEHAVIOR_CHOICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interface_package__msg__BehaviorChoice __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__msg__BehaviorChoice __declspec(deprecated)
#endif

namespace interface_package
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BehaviorChoice_
{
  using Type = BehaviorChoice_<ContainerAllocator>;

  explicit BehaviorChoice_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  explicit BehaviorChoice_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  // field types and members
  using _value_type =
    uint8_t;
  _value_type value;

  // setters for named parameter idiom
  Type & set__value(
    const uint8_t & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NONE =
    0u;
  static constexpr uint8_t GO_TO_BALL =
    1u;
  static constexpr uint8_t PREPARE_KICKOFF =
    2u;
  static constexpr uint8_t KICKOFF =
    3u;
  static constexpr uint8_t GOALKEEPER =
    4u;
  static constexpr uint8_t AVOID_BALL =
    5u;
  static constexpr uint8_t PATROL_CORNERS =
    6u;

  // pointer types
  using RawPtr =
    interface_package::msg::BehaviorChoice_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::msg::BehaviorChoice_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::msg::BehaviorChoice_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::msg::BehaviorChoice_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::msg::BehaviorChoice_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::msg::BehaviorChoice_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::msg::BehaviorChoice_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::msg::BehaviorChoice_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::msg::BehaviorChoice_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::msg::BehaviorChoice_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__msg__BehaviorChoice
    std::shared_ptr<interface_package::msg::BehaviorChoice_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__msg__BehaviorChoice
    std::shared_ptr<interface_package::msg::BehaviorChoice_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BehaviorChoice_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const BehaviorChoice_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BehaviorChoice_

// alias to use template instance with default allocator
using BehaviorChoice =
  interface_package::msg::BehaviorChoice_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BehaviorChoice_<ContainerAllocator>::NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BehaviorChoice_<ContainerAllocator>::GO_TO_BALL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BehaviorChoice_<ContainerAllocator>::PREPARE_KICKOFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BehaviorChoice_<ContainerAllocator>::KICKOFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BehaviorChoice_<ContainerAllocator>::GOALKEEPER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BehaviorChoice_<ContainerAllocator>::AVOID_BALL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BehaviorChoice_<ContainerAllocator>::PATROL_CORNERS;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__BEHAVIOR_CHOICE__STRUCT_HPP_
