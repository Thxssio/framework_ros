// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface_package:srv/SetTeam.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__SET_TEAM__STRUCT_HPP_
#define INTERFACE_PACKAGE__SRV__DETAIL__SET_TEAM__STRUCT_HPP_

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
# define DEPRECATED__interface_package__srv__SetTeam_Request __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__srv__SetTeam_Request __declspec(deprecated)
#endif

namespace interface_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetTeam_Request_
{
  using Type = SetTeam_Request_<ContainerAllocator>;

  explicit SetTeam_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : team(_init)
  {
    (void)_init;
  }

  explicit SetTeam_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : team(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _team_type =
    interface_package::msg::TeamColor_<ContainerAllocator>;
  _team_type team;

  // setters for named parameter idiom
  Type & set__team(
    const interface_package::msg::TeamColor_<ContainerAllocator> & _arg)
  {
    this->team = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_package::srv::SetTeam_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::srv::SetTeam_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::srv::SetTeam_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::srv::SetTeam_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::srv::SetTeam_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::srv::SetTeam_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::srv::SetTeam_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::srv::SetTeam_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::srv::SetTeam_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::srv::SetTeam_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__srv__SetTeam_Request
    std::shared_ptr<interface_package::srv::SetTeam_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__srv__SetTeam_Request
    std::shared_ptr<interface_package::srv::SetTeam_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetTeam_Request_ & other) const
  {
    if (this->team != other.team) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetTeam_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetTeam_Request_

// alias to use template instance with default allocator
using SetTeam_Request =
  interface_package::srv::SetTeam_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interface_package


#ifndef _WIN32
# define DEPRECATED__interface_package__srv__SetTeam_Response __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__srv__SetTeam_Response __declspec(deprecated)
#endif

namespace interface_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetTeam_Response_
{
  using Type = SetTeam_Response_<ContainerAllocator>;

  explicit SetTeam_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ok = false;
      this->message = "";
    }
  }

  explicit SetTeam_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    interface_package::srv::SetTeam_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::srv::SetTeam_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::srv::SetTeam_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::srv::SetTeam_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::srv::SetTeam_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::srv::SetTeam_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::srv::SetTeam_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::srv::SetTeam_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::srv::SetTeam_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::srv::SetTeam_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__srv__SetTeam_Response
    std::shared_ptr<interface_package::srv::SetTeam_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__srv__SetTeam_Response
    std::shared_ptr<interface_package::srv::SetTeam_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetTeam_Response_ & other) const
  {
    if (this->ok != other.ok) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetTeam_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetTeam_Response_

// alias to use template instance with default allocator
using SetTeam_Response =
  interface_package::srv::SetTeam_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interface_package

namespace interface_package
{

namespace srv
{

struct SetTeam
{
  using Request = interface_package::srv::SetTeam_Request;
  using Response = interface_package::srv::SetTeam_Response;
};

}  // namespace srv

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__SET_TEAM__STRUCT_HPP_
