// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface_package:msg/TeamColor.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__TEAM_COLOR__STRUCT_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__TEAM_COLOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interface_package__msg__TeamColor __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__msg__TeamColor __declspec(deprecated)
#endif

namespace interface_package
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TeamColor_
{
  using Type = TeamColor_<ContainerAllocator>;

  explicit TeamColor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  explicit TeamColor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint8_t BLUE =
    0u;
  static constexpr uint8_t YELLOW =
    1u;

  // pointer types
  using RawPtr =
    interface_package::msg::TeamColor_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::msg::TeamColor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::msg::TeamColor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::msg::TeamColor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::msg::TeamColor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::msg::TeamColor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::msg::TeamColor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::msg::TeamColor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::msg::TeamColor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::msg::TeamColor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__msg__TeamColor
    std::shared_ptr<interface_package::msg::TeamColor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__msg__TeamColor
    std::shared_ptr<interface_package::msg::TeamColor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TeamColor_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const TeamColor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TeamColor_

// alias to use template instance with default allocator
using TeamColor =
  interface_package::msg::TeamColor_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TeamColor_<ContainerAllocator>::BLUE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TeamColor_<ContainerAllocator>::YELLOW;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__TEAM_COLOR__STRUCT_HPP_
