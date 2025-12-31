// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface_package:msg/VisionGeometry.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__VISION_GEOMETRY__STRUCT_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__VISION_GEOMETRY__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__interface_package__msg__VisionGeometry __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__msg__VisionGeometry __declspec(deprecated)
#endif

namespace interface_package
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VisionGeometry_
{
  using Type = VisionGeometry_<ContainerAllocator>;

  explicit VisionGeometry_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init),
    field(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->expected_cameras = 0ul;
      this->camera_count = 0ul;
    }
  }

  explicit VisionGeometry_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    field(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->expected_cameras = 0ul;
      this->camera_count = 0ul;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _field_type =
    interface_package::msg::FieldDimensions_<ContainerAllocator>;
  _field_type field;
  using _expected_cameras_type =
    uint32_t;
  _expected_cameras_type expected_cameras;
  using _camera_count_type =
    uint32_t;
  _camera_count_type camera_count;
  using _camera_ids_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _camera_ids_type camera_ids;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__field(
    const interface_package::msg::FieldDimensions_<ContainerAllocator> & _arg)
  {
    this->field = _arg;
    return *this;
  }
  Type & set__expected_cameras(
    const uint32_t & _arg)
  {
    this->expected_cameras = _arg;
    return *this;
  }
  Type & set__camera_count(
    const uint32_t & _arg)
  {
    this->camera_count = _arg;
    return *this;
  }
  Type & set__camera_ids(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->camera_ids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_package::msg::VisionGeometry_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::msg::VisionGeometry_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::msg::VisionGeometry_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::msg::VisionGeometry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::msg::VisionGeometry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::msg::VisionGeometry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::msg::VisionGeometry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::msg::VisionGeometry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::msg::VisionGeometry_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::msg::VisionGeometry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__msg__VisionGeometry
    std::shared_ptr<interface_package::msg::VisionGeometry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__msg__VisionGeometry
    std::shared_ptr<interface_package::msg::VisionGeometry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VisionGeometry_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->field != other.field) {
      return false;
    }
    if (this->expected_cameras != other.expected_cameras) {
      return false;
    }
    if (this->camera_count != other.camera_count) {
      return false;
    }
    if (this->camera_ids != other.camera_ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const VisionGeometry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VisionGeometry_

// alias to use template instance with default allocator
using VisionGeometry =
  interface_package::msg::VisionGeometry_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__VISION_GEOMETRY__STRUCT_HPP_
