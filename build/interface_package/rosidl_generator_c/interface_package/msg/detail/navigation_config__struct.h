// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_package:msg/NavigationConfig.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__NAVIGATION_CONFIG__STRUCT_H_
#define INTERFACE_PACKAGE__MSG__DETAIL__NAVIGATION_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/NavigationConfig in the package interface_package.
typedef struct interface_package__msg__NavigationConfig
{
  double stop_distance;
  double linear_gain;
  double max_speed;
  double max_angular_speed;
  double angular_gain;
  double planner_resolution;
  double planner_clearance;
  double collision_threshold;
  double optimizer_weight_smooth;
  double optimizer_weight_jerk;
  double optimizer_weight_obstacle;
  double optimizer_step_size;
  int32_t optimizer_iterations;
  double optimizer_clearance;
  bool force_path_planning;
  double max_segment_length;
} interface_package__msg__NavigationConfig;

// Struct for a sequence of interface_package__msg__NavigationConfig.
typedef struct interface_package__msg__NavigationConfig__Sequence
{
  interface_package__msg__NavigationConfig * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__msg__NavigationConfig__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__NAVIGATION_CONFIG__STRUCT_H_
