// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_package:msg/VisionDetection.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__VISION_DETECTION__STRUCT_H_
#define INTERFACE_PACKAGE__MSG__DETAIL__VISION_DETECTION__STRUCT_H_

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
// Member 'yellow'
// Member 'blue'
#include "interface_package/msg/detail/robot_state__struct.h"
// Member 'ball'
#include "interface_package/msg/detail/ball_state__struct.h"

/// Struct defined in msg/VisionDetection in the package interface_package.
typedef struct interface_package__msg__VisionDetection
{
  builtin_interfaces__msg__Time stamp;
  double capture_timestamp;
  interface_package__msg__RobotState__Sequence yellow;
  interface_package__msg__RobotState__Sequence blue;
  interface_package__msg__BallState ball;
} interface_package__msg__VisionDetection;

// Struct for a sequence of interface_package__msg__VisionDetection.
typedef struct interface_package__msg__VisionDetection__Sequence
{
  interface_package__msg__VisionDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__msg__VisionDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__VISION_DETECTION__STRUCT_H_
