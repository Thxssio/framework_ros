// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface_package:srv/SendReplacementRobot.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__SEND_REPLACEMENT_ROBOT__STRUCT_HPP_
#define INTERFACE_PACKAGE__SRV__DETAIL__SEND_REPLACEMENT_ROBOT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interface_package__srv__SendReplacementRobot_Request __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__srv__SendReplacementRobot_Request __declspec(deprecated)
#endif

namespace interface_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendReplacementRobot_Request_
{
  using Type = SendReplacementRobot_Request_<ContainerAllocator>;

  explicit SendReplacementRobot_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0ul;
      this->is_yellow = false;
      this->x = 0.0;
      this->y = 0.0;
      this->theta = 0.0;
      this->present = false;
    }
  }

  explicit SendReplacementRobot_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0ul;
      this->is_yellow = false;
      this->x = 0.0;
      this->y = 0.0;
      this->theta = 0.0;
      this->present = false;
    }
  }

  // field types and members
  using _robot_id_type =
    uint32_t;
  _robot_id_type robot_id;
  using _is_yellow_type =
    bool;
  _is_yellow_type is_yellow;
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _theta_type =
    double;
  _theta_type theta;
  using _present_type =
    bool;
  _present_type present;

  // setters for named parameter idiom
  Type & set__robot_id(
    const uint32_t & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__is_yellow(
    const bool & _arg)
  {
    this->is_yellow = _arg;
    return *this;
  }
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__theta(
    const double & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__present(
    const bool & _arg)
  {
    this->present = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_package::srv::SendReplacementRobot_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::srv::SendReplacementRobot_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::srv::SendReplacementRobot_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::srv::SendReplacementRobot_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::srv::SendReplacementRobot_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::srv::SendReplacementRobot_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::srv::SendReplacementRobot_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::srv::SendReplacementRobot_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::srv::SendReplacementRobot_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::srv::SendReplacementRobot_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__srv__SendReplacementRobot_Request
    std::shared_ptr<interface_package::srv::SendReplacementRobot_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__srv__SendReplacementRobot_Request
    std::shared_ptr<interface_package::srv::SendReplacementRobot_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendReplacementRobot_Request_ & other) const
  {
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->is_yellow != other.is_yellow) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    if (this->present != other.present) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendReplacementRobot_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendReplacementRobot_Request_

// alias to use template instance with default allocator
using SendReplacementRobot_Request =
  interface_package::srv::SendReplacementRobot_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interface_package


#ifndef _WIN32
# define DEPRECATED__interface_package__srv__SendReplacementRobot_Response __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__srv__SendReplacementRobot_Response __declspec(deprecated)
#endif

namespace interface_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendReplacementRobot_Response_
{
  using Type = SendReplacementRobot_Response_<ContainerAllocator>;

  explicit SendReplacementRobot_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ok = false;
      this->message = "";
    }
  }

  explicit SendReplacementRobot_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    interface_package::srv::SendReplacementRobot_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::srv::SendReplacementRobot_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::srv::SendReplacementRobot_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::srv::SendReplacementRobot_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::srv::SendReplacementRobot_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::srv::SendReplacementRobot_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::srv::SendReplacementRobot_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::srv::SendReplacementRobot_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::srv::SendReplacementRobot_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::srv::SendReplacementRobot_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__srv__SendReplacementRobot_Response
    std::shared_ptr<interface_package::srv::SendReplacementRobot_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__srv__SendReplacementRobot_Response
    std::shared_ptr<interface_package::srv::SendReplacementRobot_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendReplacementRobot_Response_ & other) const
  {
    if (this->ok != other.ok) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendReplacementRobot_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendReplacementRobot_Response_

// alias to use template instance with default allocator
using SendReplacementRobot_Response =
  interface_package::srv::SendReplacementRobot_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interface_package

namespace interface_package
{

namespace srv
{

struct SendReplacementRobot
{
  using Request = interface_package::srv::SendReplacementRobot_Request;
  using Response = interface_package::srv::SendReplacementRobot_Response;
};

}  // namespace srv

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__SEND_REPLACEMENT_ROBOT__STRUCT_HPP_
