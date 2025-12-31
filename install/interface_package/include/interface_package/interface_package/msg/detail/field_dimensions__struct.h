// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_package:msg/FieldDimensions.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__FIELD_DIMENSIONS__STRUCT_H_
#define INTERFACE_PACKAGE__MSG__DETAIL__FIELD_DIMENSIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/FieldDimensions in the package interface_package.
typedef struct interface_package__msg__FieldDimensions
{
  double length;
  double width;
  double goal_width;
  double goal_depth;
  double boundary_width;
} interface_package__msg__FieldDimensions;

// Struct for a sequence of interface_package__msg__FieldDimensions.
typedef struct interface_package__msg__FieldDimensions__Sequence
{
  interface_package__msg__FieldDimensions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__msg__FieldDimensions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__FIELD_DIMENSIONS__STRUCT_H_
