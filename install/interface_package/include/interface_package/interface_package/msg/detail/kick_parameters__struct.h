// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_package:msg/KickParameters.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__KICK_PARAMETERS__STRUCT_H_
#define INTERFACE_PACKAGE__MSG__DETAIL__KICK_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/KickParameters in the package interface_package.
typedef struct interface_package__msg__KickParameters
{
  double kick_speed;
  double kick_angle_deg;
  double kick_distance;
  double facing_tolerance;
  double kick_push_speed;
  double dribbler_rpm;
} interface_package__msg__KickParameters;

// Struct for a sequence of interface_package__msg__KickParameters.
typedef struct interface_package__msg__KickParameters__Sequence
{
  interface_package__msg__KickParameters * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__msg__KickParameters__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__KICK_PARAMETERS__STRUCT_H_
