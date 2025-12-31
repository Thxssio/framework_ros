// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface_package:msg/NavigationConfig.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__NAVIGATION_CONFIG__STRUCT_HPP_
#define INTERFACE_PACKAGE__MSG__DETAIL__NAVIGATION_CONFIG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interface_package__msg__NavigationConfig __attribute__((deprecated))
#else
# define DEPRECATED__interface_package__msg__NavigationConfig __declspec(deprecated)
#endif

namespace interface_package
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NavigationConfig_
{
  using Type = NavigationConfig_<ContainerAllocator>;

  explicit NavigationConfig_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stop_distance = 0.0;
      this->linear_gain = 0.0;
      this->max_speed = 0.0;
      this->max_angular_speed = 0.0;
      this->angular_gain = 0.0;
      this->planner_resolution = 0.0;
      this->planner_clearance = 0.0;
      this->collision_threshold = 0.0;
      this->optimizer_weight_smooth = 0.0;
      this->optimizer_weight_jerk = 0.0;
      this->optimizer_weight_obstacle = 0.0;
      this->optimizer_step_size = 0.0;
      this->optimizer_iterations = 0l;
      this->optimizer_clearance = 0.0;
      this->force_path_planning = false;
      this->max_segment_length = 0.0;
    }
  }

  explicit NavigationConfig_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stop_distance = 0.0;
      this->linear_gain = 0.0;
      this->max_speed = 0.0;
      this->max_angular_speed = 0.0;
      this->angular_gain = 0.0;
      this->planner_resolution = 0.0;
      this->planner_clearance = 0.0;
      this->collision_threshold = 0.0;
      this->optimizer_weight_smooth = 0.0;
      this->optimizer_weight_jerk = 0.0;
      this->optimizer_weight_obstacle = 0.0;
      this->optimizer_step_size = 0.0;
      this->optimizer_iterations = 0l;
      this->optimizer_clearance = 0.0;
      this->force_path_planning = false;
      this->max_segment_length = 0.0;
    }
  }

  // field types and members
  using _stop_distance_type =
    double;
  _stop_distance_type stop_distance;
  using _linear_gain_type =
    double;
  _linear_gain_type linear_gain;
  using _max_speed_type =
    double;
  _max_speed_type max_speed;
  using _max_angular_speed_type =
    double;
  _max_angular_speed_type max_angular_speed;
  using _angular_gain_type =
    double;
  _angular_gain_type angular_gain;
  using _planner_resolution_type =
    double;
  _planner_resolution_type planner_resolution;
  using _planner_clearance_type =
    double;
  _planner_clearance_type planner_clearance;
  using _collision_threshold_type =
    double;
  _collision_threshold_type collision_threshold;
  using _optimizer_weight_smooth_type =
    double;
  _optimizer_weight_smooth_type optimizer_weight_smooth;
  using _optimizer_weight_jerk_type =
    double;
  _optimizer_weight_jerk_type optimizer_weight_jerk;
  using _optimizer_weight_obstacle_type =
    double;
  _optimizer_weight_obstacle_type optimizer_weight_obstacle;
  using _optimizer_step_size_type =
    double;
  _optimizer_step_size_type optimizer_step_size;
  using _optimizer_iterations_type =
    int32_t;
  _optimizer_iterations_type optimizer_iterations;
  using _optimizer_clearance_type =
    double;
  _optimizer_clearance_type optimizer_clearance;
  using _force_path_planning_type =
    bool;
  _force_path_planning_type force_path_planning;
  using _max_segment_length_type =
    double;
  _max_segment_length_type max_segment_length;

  // setters for named parameter idiom
  Type & set__stop_distance(
    const double & _arg)
  {
    this->stop_distance = _arg;
    return *this;
  }
  Type & set__linear_gain(
    const double & _arg)
  {
    this->linear_gain = _arg;
    return *this;
  }
  Type & set__max_speed(
    const double & _arg)
  {
    this->max_speed = _arg;
    return *this;
  }
  Type & set__max_angular_speed(
    const double & _arg)
  {
    this->max_angular_speed = _arg;
    return *this;
  }
  Type & set__angular_gain(
    const double & _arg)
  {
    this->angular_gain = _arg;
    return *this;
  }
  Type & set__planner_resolution(
    const double & _arg)
  {
    this->planner_resolution = _arg;
    return *this;
  }
  Type & set__planner_clearance(
    const double & _arg)
  {
    this->planner_clearance = _arg;
    return *this;
  }
  Type & set__collision_threshold(
    const double & _arg)
  {
    this->collision_threshold = _arg;
    return *this;
  }
  Type & set__optimizer_weight_smooth(
    const double & _arg)
  {
    this->optimizer_weight_smooth = _arg;
    return *this;
  }
  Type & set__optimizer_weight_jerk(
    const double & _arg)
  {
    this->optimizer_weight_jerk = _arg;
    return *this;
  }
  Type & set__optimizer_weight_obstacle(
    const double & _arg)
  {
    this->optimizer_weight_obstacle = _arg;
    return *this;
  }
  Type & set__optimizer_step_size(
    const double & _arg)
  {
    this->optimizer_step_size = _arg;
    return *this;
  }
  Type & set__optimizer_iterations(
    const int32_t & _arg)
  {
    this->optimizer_iterations = _arg;
    return *this;
  }
  Type & set__optimizer_clearance(
    const double & _arg)
  {
    this->optimizer_clearance = _arg;
    return *this;
  }
  Type & set__force_path_planning(
    const bool & _arg)
  {
    this->force_path_planning = _arg;
    return *this;
  }
  Type & set__max_segment_length(
    const double & _arg)
  {
    this->max_segment_length = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_package::msg::NavigationConfig_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_package::msg::NavigationConfig_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_package::msg::NavigationConfig_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_package::msg::NavigationConfig_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_package::msg::NavigationConfig_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_package::msg::NavigationConfig_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_package::msg::NavigationConfig_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_package::msg::NavigationConfig_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_package::msg::NavigationConfig_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_package::msg::NavigationConfig_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_package__msg__NavigationConfig
    std::shared_ptr<interface_package::msg::NavigationConfig_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_package__msg__NavigationConfig
    std::shared_ptr<interface_package::msg::NavigationConfig_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigationConfig_ & other) const
  {
    if (this->stop_distance != other.stop_distance) {
      return false;
    }
    if (this->linear_gain != other.linear_gain) {
      return false;
    }
    if (this->max_speed != other.max_speed) {
      return false;
    }
    if (this->max_angular_speed != other.max_angular_speed) {
      return false;
    }
    if (this->angular_gain != other.angular_gain) {
      return false;
    }
    if (this->planner_resolution != other.planner_resolution) {
      return false;
    }
    if (this->planner_clearance != other.planner_clearance) {
      return false;
    }
    if (this->collision_threshold != other.collision_threshold) {
      return false;
    }
    if (this->optimizer_weight_smooth != other.optimizer_weight_smooth) {
      return false;
    }
    if (this->optimizer_weight_jerk != other.optimizer_weight_jerk) {
      return false;
    }
    if (this->optimizer_weight_obstacle != other.optimizer_weight_obstacle) {
      return false;
    }
    if (this->optimizer_step_size != other.optimizer_step_size) {
      return false;
    }
    if (this->optimizer_iterations != other.optimizer_iterations) {
      return false;
    }
    if (this->optimizer_clearance != other.optimizer_clearance) {
      return false;
    }
    if (this->force_path_planning != other.force_path_planning) {
      return false;
    }
    if (this->max_segment_length != other.max_segment_length) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigationConfig_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigationConfig_

// alias to use template instance with default allocator
using NavigationConfig =
  interface_package::msg::NavigationConfig_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interface_package

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__NAVIGATION_CONFIG__STRUCT_HPP_
