// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_package:msg/Pose2D.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__POSE2_D__STRUCT_H_
#define INTERFACE_PACKAGE__MSG__DETAIL__POSE2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Pose2D in the package interface_package.
typedef struct interface_package__msg__Pose2D
{
  double x;
  double y;
  double theta;
} interface_package__msg__Pose2D;

// Struct for a sequence of interface_package__msg__Pose2D.
typedef struct interface_package__msg__Pose2D__Sequence
{
  interface_package__msg__Pose2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__msg__Pose2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__POSE2_D__STRUCT_H_
