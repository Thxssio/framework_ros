// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface_package:srv/LoadConfig.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__LOAD_CONFIG__STRUCT_HPP_
#define INTERFACE_PACKAGE__SRV__DETAIL__LOAD_CONFIG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interface_package__srv__LoadConfig_Request __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__srv__LoadConfig_Request __declspec(deprecated)
#endif

namespace interface_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LoadConfig_Request_
{
  using Type = LoadConfig_Request_<ContainerAllocator>;

  explicit LoadConfig_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kind = 0;
      this->path = "";
    }
  }

  explicit LoadConfig_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : path(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kind = 0;
      this->path = "";
    }
  }

  // field types and members
  using _kind_type =
    uint8_t;
  _kind_type kind;
  using _path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _path_type path;

  // setters for named parameter idiom
  Type & set__kind(
    const uint8_t & _arg)
  {
    this->kind = _arg;
    return *this;
  }
  Type & set__path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_package::srv::LoadConfig_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::srv::LoadConfig_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::srv::LoadConfig_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::srv::LoadConfig_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::srv::LoadConfig_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::srv::LoadConfig_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::srv::LoadConfig_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::srv::LoadConfig_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::srv::LoadConfig_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::srv::LoadConfig_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__srv__LoadConfig_Request
    std::shared_ptr<interface_package::srv::LoadConfig_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__srv__LoadConfig_Request
    std::shared_ptr<interface_package::srv::LoadConfig_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoadConfig_Request_ & other) const
  {
    if (this->kind != other.kind) {
      return false;
    }
    if (this->path != other.path) {
      return false;
    }
    return true;
  }
  bool operator!=(const LoadConfig_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoadConfig_Request_

// alias to use template instance with default allocator
using LoadConfig_Request =
  interface_package::srv::LoadConfig_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interface_package


// Include directives for member types
// Member 'nav'
#include "interface_package/msg/detail/navigation_config__struct.hpp"
// Member 'kick'
#include "interface_package/msg/detail/kick_parameters__struct.hpp"
// Member 'prep'
#include "interface_package/msg/detail/prepare_kickoff_parameters__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interface_package__srv__LoadConfig_Response __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__srv__LoadConfig_Response __declspec(deprecated)
#endif

namespace interface_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LoadConfig_Response_
{
  using Type = LoadConfig_Response_<ContainerAllocator>;

  explicit LoadConfig_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : nav(_init),
    kick(_init),
    prep(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ok = false;
      this->message = "";
    }
  }

  explicit LoadConfig_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc),
    nav(_alloc, _init),
    kick(_alloc, _init),
    prep(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ok = false;
      this->message = "";
    }
  }

  // field types and members
  using _ok_type =
    bool;
  _ok_type ok;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _nav_type =
    interface_package::msg::NavigationConfig_<ContainerAllocator>;
  _nav_type nav;
  using _kick_type =
    interface_package::msg::KickParameters_<ContainerAllocator>;
  _kick_type kick;
  using _prep_type =
    interface_package::msg::PrepareKickoffParameters_<ContainerAllocator>;
  _prep_type prep;

  // setters for named parameter idiom
  Type & set__ok(
    const bool & _arg)
  {
    this->ok = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__nav(
    const interface_package::msg::NavigationConfig_<ContainerAllocator> & _arg)
  {
    this->nav = _arg;
    return *this;
  }
  Type & set__kick(
    const interface_package::msg::KickParameters_<ContainerAllocator> & _arg)
  {
    this->kick = _arg;
    return *this;
  }
  Type & set__prep(
    const interface_package::msg::PrepareKickoffParameters_<ContainerAllocator> & _arg)
  {
    this->prep = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_package::srv::LoadConfig_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::srv::LoadConfig_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::srv::LoadConfig_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::srv::LoadConfig_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::srv::LoadConfig_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::srv::LoadConfig_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::srv::LoadConfig_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::srv::LoadConfig_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::srv::LoadConfig_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::srv::LoadConfig_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__srv__LoadConfig_Response
    std::shared_ptr<interface_package::srv::LoadConfig_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__srv__LoadConfig_Response
    std::shared_ptr<interface_package::srv::LoadConfig_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoadConfig_Response_ & other) const
  {
    if (this->ok != other.ok) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->nav != other.nav) {
      return false;
    }
    if (this->kick != other.kick) {
      return false;
    }
    if (this->prep != other.prep) {
      return false;
    }
    return true;
  }
  bool operator!=(const LoadConfig_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoadConfig_Response_

// alias to use template instance with default allocator
using LoadConfig_Response =
  interface_package::srv::LoadConfig_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interface_package

namespace interface_package
{

namespace srv
{

struct LoadConfig
{
  using Request = interface_package::srv::LoadConfig_Request;
  using Response = interface_package::srv::LoadConfig_Response;
};

}  // namespace srv

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__LOAD_CONFIG__STRUCT_HPP_
