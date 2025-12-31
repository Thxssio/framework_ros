// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_package:msg/PathPreview.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__PATH_PREVIEW__STRUCT_H_
#define INTERFACE_PACKAGE__MSG__DETAIL__PATH_PREVIEW__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'path'
// Member 'direct'
#include "interface_package/msg/detail/pose2_d__struct.h"

/// Struct defined in msg/PathPreview in the package interface_package.
typedef struct interface_package__msg__PathPreview
{
  uint32_t robot_id;
  interface_package__msg__Pose2D__Sequence path;
  interface_package__msg__Pose2D__Sequence direct;
} interface_package__msg__PathPreview;

// Struct for a sequence of interface_package__msg__PathPreview.
typedef struct interface_package__msg__PathPreview__Sequence
{
  interface_package__msg__PathPreview * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__msg__PathPreview__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__PATH_PREVIEW__STRUCT_H_
