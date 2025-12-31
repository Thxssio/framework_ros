// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_package:msg/RobotTarget.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__ROBOT_TARGET__STRUCT_H_
#define INTERFACE_PACKAGE__MSG__DETAIL__ROBOT_TARGET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'target'
#include "interface_package/msg/detail/pose2_d__struct.h"

/// Struct defined in msg/RobotTarget in the package interface_package.
typedef struct interface_package__msg__RobotTarget
{
  builtin_interfaces__msg__Time stamp;
  uint32_t robot_id;
  interface_package__msg__Pose2D target;
  bool force_path;
  bool allow_goal_area;
  bool avoid_ball;
} interface_package__msg__RobotTarget;

// Struct for a sequence of interface_package__msg__RobotTarget.
typedef struct interface_package__msg__RobotTarget__Sequence
{
  interface_package__msg__RobotTarget * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__msg__RobotTarget__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__ROBOT_TARGET__STRUCT_H_
