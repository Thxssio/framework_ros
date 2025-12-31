// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_package:msg/TeamColor.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__TEAM_COLOR__STRUCT_H_
#define INTERFACE_PACKAGE__MSG__DETAIL__TEAM_COLOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BLUE'.
enum
{
  interface_package__msg__TeamColor__BLUE = 0
};

/// Constant 'YELLOW'.
enum
{
  interface_package__msg__TeamColor__YELLOW = 1
};

/// Struct defined in msg/TeamColor in the package interface_package.
typedef struct interface_package__msg__TeamColor
{
  uint8_t value;
} interface_package__msg__TeamColor;

// Struct for a sequence of interface_package__msg__TeamColor.
typedef struct interface_package__msg__TeamColor__Sequence
{
  interface_package__msg__TeamColor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__msg__TeamColor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__TEAM_COLOR__STRUCT_H_
