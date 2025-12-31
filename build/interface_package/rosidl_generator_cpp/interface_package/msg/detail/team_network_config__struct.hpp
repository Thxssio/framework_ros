// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface_package:msg/TeamNetworkConfig.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__TEAM_NETWORK_CONFIG__STRUCT_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__TEAM_NETWORK_CONFIG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interface_package__msg__TeamNetworkConfig __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__msg__TeamNetworkConfig __declspec(deprecated)
#endif

namespace interface_package
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TeamNetworkConfig_
{
  using Type = TeamNetworkConfig_<ContainerAllocator>;

  explicit TeamNetworkConfig_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->host = "";
      this->port = 0;
    }
  }

  explicit TeamNetworkConfig_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : host(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->host = "";
      this->port = 0;
    }
  }

  // field types and members
  using _host_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _host_type host;
  using _port_type =
    uint16_t;
  _port_type port;

  // setters for named parameter idiom
  Type & set__host(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->host = _arg;
    return *this;
  }
  Type & set__port(
    const uint16_t & _arg)
  {
    this->port = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_package::msg::TeamNetworkConfig_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::msg::TeamNetworkConfig_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::msg::TeamNetworkConfig_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::msg::TeamNetworkConfig_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::msg::TeamNetworkConfig_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::msg::TeamNetworkConfig_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::msg::TeamNetworkConfig_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::msg::TeamNetworkConfig_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::msg::TeamNetworkConfig_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::msg::TeamNetworkConfig_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__msg__TeamNetworkConfig
    std::shared_ptr<interface_package::msg::TeamNetworkConfig_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__msg__TeamNetworkConfig
    std::shared_ptr<interface_package::msg::TeamNetworkConfig_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TeamNetworkConfig_ & other) const
  {
    if (this->host != other.host) {
      return false;
    }
    if (this->port != other.port) {
      return false;
    }
    return true;
  }
  bool operator!=(const TeamNetworkConfig_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TeamNetworkConfig_

// alias to use template instance with default allocator
using TeamNetworkConfig =
  interface_package::msg::TeamNetworkConfig_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__TEAM_NETWORK_CONFIG__STRUCT_HPP_
