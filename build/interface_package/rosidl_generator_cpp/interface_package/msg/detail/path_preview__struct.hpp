// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface_package:msg/PathPreview.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__PATH_PREVIEW__STRUCT_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__PATH_PREVIEW__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'path'
// Member 'direct'
#include "interface_package/msg/detail/pose2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interface_package__msg__PathPreview __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__msg__PathPreview __declspec(deprecated)
#endif

namespace interface_package
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PathPreview_
{
  using Type = PathPreview_<ContainerAllocator>;

  explicit PathPreview_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0ul;
    }
  }

  explicit PathPreview_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0ul;
    }
  }

  // field types and members
  using _robot_id_type =
    uint32_t;
  _robot_id_type robot_id;
  using _path_type =
    std::vector<interface_package::msg::Pose2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interface_package::msg::Pose2D_<ContainerAllocator>>>;
  _path_type path;
  using _direct_type =
    std::vector<interface_package::msg::Pose2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interface_package::msg::Pose2D_<ContainerAllocator>>>;
  _direct_type direct;

  // setters for named parameter idiom
  Type & set__robot_id(
    const uint32_t & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__path(
    const std::vector<interface_package::msg::Pose2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interface_package::msg::Pose2D_<ContainerAllocator>>> & _arg)
  {
    this->path = _arg;
    return *this;
  }
  Type & set__direct(
    const std::vector<interface_package::msg::Pose2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interface_package::msg::Pose2D_<ContainerAllocator>>> & _arg)
  {
    this->direct = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_package::msg::PathPreview_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::msg::PathPreview_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::msg::PathPreview_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::msg::PathPreview_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::msg::PathPreview_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::msg::PathPreview_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::msg::PathPreview_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::msg::PathPreview_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::msg::PathPreview_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::msg::PathPreview_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__msg__PathPreview
    std::shared_ptr<interface_package::msg::PathPreview_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__msg__PathPreview
    std::shared_ptr<interface_package::msg::PathPreview_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathPreview_ & other) const
  {
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->path != other.path) {
      return false;
    }
    if (this->direct != other.direct) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathPreview_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathPreview_

// alias to use template instance with default allocator
using PathPreview =
  interface_package::msg::PathPreview_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__PATH_PREVIEW__STRUCT_HPP_
