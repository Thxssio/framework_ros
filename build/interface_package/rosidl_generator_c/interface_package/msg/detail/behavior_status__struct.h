// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_package:msg/BehaviorStatus.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__BEHAVIOR_STATUS__STRUCT_H_
#define INTERFACE_PACKAGE__MSG__DETAIL__BEHAVIOR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RUNNING'.
enum
{
  interface_package__msg__BehaviorStatus__RUNNING = 0
};

/// Constant 'SUCCESS'.
enum
{
  interface_package__msg__BehaviorStatus__SUCCESS = 1
};

/// Constant 'FAILURE'.
enum
{
  interface_package__msg__BehaviorStatus__FAILURE = 2
};

/// Struct defined in msg/BehaviorStatus in the package interface_package.
typedef struct interface_package__msg__BehaviorStatus
{
  uint8_t value;
} interface_package__msg__BehaviorStatus;

// Struct for a sequence of interface_package__msg__BehaviorStatus.
typedef struct interface_package__msg__BehaviorStatus__Sequence
{
  interface_package__msg__BehaviorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__msg__BehaviorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__BEHAVIOR_STATUS__STRUCT_H_
