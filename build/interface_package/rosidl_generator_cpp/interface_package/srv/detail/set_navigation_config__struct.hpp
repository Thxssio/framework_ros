// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface_package:srv/SetNavigationConfig.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__SET_NAVIGATION_CONFIG__STRUCT_HPP_
#define INTERFACE_PACKAGE__SRV__DETAIL__SET_NAVIGATION_CONFIG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'config'
#include "interface_package/msg/detail/navigation_config__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interface_package__srv__SetNavigationConfig_Request __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__srv__SetNavigationConfig_Request __declspec(deprecated)
#endif

namespace interface_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetNavigationConfig_Request_
{
  using Type = SetNavigationConfig_Request_<ContainerAllocator>;

  explicit SetNavigationConfig_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : config(_init)
  {
    (void)_init;
  }

  explicit SetNavigationConfig_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : config(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _config_type =
    interface_package::msg::NavigationConfig_<ContainerAllocator>;
  _config_type config;

  // setters for named parameter idiom
  Type & set__config(
    const interface_package::msg::NavigationConfig_<ContainerAllocator> & _arg)
  {
    this->config = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_package::srv::SetNavigationConfig_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::srv::SetNavigationConfig_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::srv::SetNavigationConfig_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::srv::SetNavigationConfig_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::srv::SetNavigationConfig_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::srv::SetNavigationConfig_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::srv::SetNavigationConfig_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::srv::SetNavigationConfig_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::srv::SetNavigationConfig_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::srv::SetNavigationConfig_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__srv__SetNavigationConfig_Request
    std::shared_ptr<interface_package::srv::SetNavigationConfig_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__srv__SetNavigationConfig_Request
    std::shared_ptr<interface_package::srv::SetNavigationConfig_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetNavigationConfig_Request_ & other) const
  {
    if (this->config != other.config) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetNavigationConfig_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetNavigationConfig_Request_

// alias to use template instance with default allocator
using SetNavigationConfig_Request =
  interface_package::srv::SetNavigationConfig_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interface_package


#ifndef _WIN32
# define DEPRECATED__interface_package__srv__SetNavigationConfig_Response __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__srv__SetNavigationConfig_Response __declspec(deprecated)
#endif

namespace interface_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetNavigationConfig_Response_
{
  using Type = SetNavigationConfig_Response_<ContainerAllocator>;

  explicit SetNavigationConfig_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ok = false;
      this->message = "";
    }
  }

  explicit SetNavigationConfig_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    interface_package::srv::SetNavigationConfig_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::srv::SetNavigationConfig_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::srv::SetNavigationConfig_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::srv::SetNavigationConfig_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::srv::SetNavigationConfig_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::srv::SetNavigationConfig_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::srv::SetNavigationConfig_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::srv::SetNavigationConfig_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::srv::SetNavigationConfig_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::srv::SetNavigationConfig_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__srv__SetNavigationConfig_Response
    std::shared_ptr<interface_package::srv::SetNavigationConfig_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__srv__SetNavigationConfig_Response
    std::shared_ptr<interface_package::srv::SetNavigationConfig_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetNavigationConfig_Response_ & other) const
  {
    if (this->ok != other.ok) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetNavigationConfig_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetNavigationConfig_Response_

// alias to use template instance with default allocator
using SetNavigationConfig_Response =
  interface_package::srv::SetNavigationConfig_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interface_package

namespace interface_package
{

namespace srv
{

struct SetNavigationConfig
{
  using Request = interface_package::srv::SetNavigationConfig_Request;
  using Response = interface_package::srv::SetNavigationConfig_Response;
};

}  // namespace srv

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__SET_NAVIGATION_CONFIG__STRUCT_HPP_
