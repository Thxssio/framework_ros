// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface_package:srv/SetTeamNetwork.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__SET_TEAM_NETWORK__STRUCT_HPP_
#define INTERFACE_PACKAGE__SRV__DETAIL__SET_TEAM_NETWORK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'team'
#include "interface_package/msg/detail/team_color__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interface_package__srv__SetTeamNetwork_Request __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__srv__SetTeamNetwork_Request __declspec(deprecated)
#endif

namespace interface_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetTeamNetwork_Request_
{
  using Type = SetTeamNetwork_Request_<ContainerAllocator>;

  explicit SetTeamNetwork_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : team(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->host = "";
      this->port = 0;
    }
  }

  explicit SetTeamNetwork_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : team(_alloc, _init),
    host(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->host = "";
      this->port = 0;
    }
  }

  // field types and members
  using _team_type =
    interface_package::msg::TeamColor_<ContainerAllocator>;
  _team_type team;
  using _host_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _host_type host;
  using _port_type =
    uint16_t;
  _port_type port;

  // setters for named parameter idiom
  Type & set__team(
    const interface_package::msg::TeamColor_<ContainerAllocator> & _arg)
  {
    this->team = _arg;
    return *this;
  }
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
    interface_package::srv::SetTeamNetwork_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::srv::SetTeamNetwork_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::srv::SetTeamNetwork_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::srv::SetTeamNetwork_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::srv::SetTeamNetwork_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::srv::SetTeamNetwork_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::srv::SetTeamNetwork_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::srv::SetTeamNetwork_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::srv::SetTeamNetwork_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::srv::SetTeamNetwork_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__srv__SetTeamNetwork_Request
    std::shared_ptr<interface_package::srv::SetTeamNetwork_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__srv__SetTeamNetwork_Request
    std::shared_ptr<interface_package::srv::SetTeamNetwork_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetTeamNetwork_Request_ & other) const
  {
    if (this->team != other.team) {
      return false;
    }
    if (this->host != other.host) {
      return false;
    }
    if (this->port != other.port) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetTeamNetwork_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetTeamNetwork_Request_

// alias to use template instance with default allocator
using SetTeamNetwork_Request =
  interface_package::srv::SetTeamNetwork_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interface_package


#ifndef _WIN32
# define DEPRECATED__interface_package__srv__SetTeamNetwork_Response __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__srv__SetTeamNetwork_Response __declspec(deprecated)
#endif

namespace interface_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetTeamNetwork_Response_
{
  using Type = SetTeamNetwork_Response_<ContainerAllocator>;

  explicit SetTeamNetwork_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ok = false;
      this->message = "";
    }
  }

  explicit SetTeamNetwork_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
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

  // constant declarations

  // pointer types
  using RawPtr =
    interface_package::srv::SetTeamNetwork_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::srv::SetTeamNetwork_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::srv::SetTeamNetwork_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::srv::SetTeamNetwork_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::srv::SetTeamNetwork_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::srv::SetTeamNetwork_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::srv::SetTeamNetwork_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::srv::SetTeamNetwork_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::srv::SetTeamNetwork_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::srv::SetTeamNetwork_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__srv__SetTeamNetwork_Response
    std::shared_ptr<interface_package::srv::SetTeamNetwork_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__srv__SetTeamNetwork_Response
    std::shared_ptr<interface_package::srv::SetTeamNetwork_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetTeamNetwork_Response_ & other) const
  {
    if (this->ok != other.ok) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetTeamNetwork_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetTeamNetwork_Response_

// alias to use template instance with default allocator
using SetTeamNetwork_Response =
  interface_package::srv::SetTeamNetwork_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interface_package

namespace interface_package
{

namespace srv
{

struct SetTeamNetwork
{
  using Request = interface_package::srv::SetTeamNetwork_Request;
  using Response = interface_package::srv::SetTeamNetwork_Response;
};

}  // namespace srv

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__SET_TEAM_NETWORK__STRUCT_HPP_
