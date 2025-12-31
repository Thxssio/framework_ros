// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_package:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__ROBOT_STATE__STRUCT_H_
#define INTERFACE_PACKAGE__MSG__DETAIL__ROBOT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "interface_package/msg/detail/pose2_d__struct.h"
// Member 'twist'
#include "interface_package/msg/detail/twist2_d__struct.h"

/// Struct defined in msg/RobotState in the package interface_package.
typedef struct interface_package__msg__RobotState
{
  uint32_t id;
  interface_package__msg__Pose2D pose;
  interface_package__msg__Twist2D twist;
  bool visible;
  float confidence;
} interface_package__msg__RobotState;

// Struct for a sequence of interface_package__msg__RobotState.
typedef struct interface_package__msg__RobotState__Sequence
{
  interface_package__msg__RobotState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__msg__RobotState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__ROBOT_STATE__STRUCT_H_
