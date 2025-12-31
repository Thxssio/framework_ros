// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_package:msg/BehaviorChoice.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__BEHAVIOR_CHOICE__STRUCT_H_
#define INTERFACE_PACKAGE__MSG__DETAIL__BEHAVIOR_CHOICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NONE'.
enum
{
  interface_package__msg__BehaviorChoice__NONE = 0
};

/// Constant 'GO_TO_BALL'.
enum
{
  interface_package__msg__BehaviorChoice__GO_TO_BALL = 1
};

/// Constant 'PREPARE_KICKOFF'.
enum
{
  interface_package__msg__BehaviorChoice__PREPARE_KICKOFF = 2
};

/// Constant 'KICKOFF'.
enum
{
  interface_package__msg__BehaviorChoice__KICKOFF = 3
};

/// Constant 'GOALKEEPER'.
enum
{
  interface_package__msg__BehaviorChoice__GOALKEEPER = 4
};

/// Constant 'AVOID_BALL'.
enum
{
  interface_package__msg__BehaviorChoice__AVOID_BALL = 5
};

/// Constant 'PATROL_CORNERS'.
enum
{
  interface_package__msg__BehaviorChoice__PATROL_CORNERS = 6
};

/// Struct defined in msg/BehaviorChoice in the package interface_package.
typedef struct interface_package__msg__BehaviorChoice
{
  uint8_t value;
} interface_package__msg__BehaviorChoice;

// Struct for a sequence of interface_package__msg__BehaviorChoice.
typedef struct interface_package__msg__BehaviorChoice__Sequence
{
  interface_package__msg__BehaviorChoice * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__msg__BehaviorChoice__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__BEHAVIOR_CHOICE__STRUCT_H_
