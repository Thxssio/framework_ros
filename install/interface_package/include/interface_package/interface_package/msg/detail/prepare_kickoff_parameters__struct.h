// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_package:msg/PrepareKickoffParameters.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__PREPARE_KICKOFF_PARAMETERS__STRUCT_H_
#define INTERFACE_PACKAGE__MSG__DETAIL__PREPARE_KICKOFF_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PrepareKickoffParameters in the package interface_package.
typedef struct interface_package__msg__PrepareKickoffParameters
{
  double offset;
  double approach_tolerance;
  double heading_tolerance;
} interface_package__msg__PrepareKickoffParameters;

// Struct for a sequence of interface_package__msg__PrepareKickoffParameters.
typedef struct interface_package__msg__PrepareKickoffParameters__Sequence
{
  interface_package__msg__PrepareKickoffParameters * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__msg__PrepareKickoffParameters__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__PREPARE_KICKOFF_PARAMETERS__STRUCT_H_
