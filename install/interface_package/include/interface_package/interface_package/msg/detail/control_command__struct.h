// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_package:msg/ControlCommand.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__CONTROL_COMMAND__STRUCT_H_
#define INTERFACE_PACKAGE__MSG__DETAIL__CONTROL_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'velocity'
#include "interface_package/msg/detail/twist2_d__struct.h"

/// Struct defined in msg/ControlCommand in the package interface_package.
/**
  * espelha teu ControlCommand/C++: tu tem "velocity" optional, mas em ROS msg não tem optional nativo
 */
typedef struct interface_package__msg__ControlCommand
{
  bool has_velocity;
  interface_package__msg__Twist2D velocity;
  /// espaço pra outros campos (chute/dribbler etc) quando você expor
  bool kick;
  double kick_speed;
  bool dribbler;
  double dribbler_rpm;
} interface_package__msg__ControlCommand;

// Struct for a sequence of interface_package__msg__ControlCommand.
typedef struct interface_package__msg__ControlCommand__Sequence
{
  interface_package__msg__ControlCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__msg__ControlCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__CONTROL_COMMAND__STRUCT_H_
