// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_package:srv/SendReplacementRobot.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__SEND_REPLACEMENT_ROBOT__STRUCT_H_
#define INTERFACE_PACKAGE__SRV__DETAIL__SEND_REPLACEMENT_ROBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SendReplacementRobot in the package interface_package.
typedef struct interface_package__srv__SendReplacementRobot_Request
{
  uint32_t robot_id;
  bool is_yellow;
  double x;
  double y;
  double theta;
  bool present;
} interface_package__srv__SendReplacementRobot_Request;

// Struct for a sequence of interface_package__srv__SendReplacementRobot_Request.
typedef struct interface_package__srv__SendReplacementRobot_Request__Sequence
{
  interface_package__srv__SendReplacementRobot_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__srv__SendReplacementRobot_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SendReplacementRobot in the package interface_package.
typedef struct interface_package__srv__SendReplacementRobot_Response
{
  bool ok;
  rosidl_runtime_c__String message;
} interface_package__srv__SendReplacementRobot_Response;

// Struct for a sequence of interface_package__srv__SendReplacementRobot_Response.
typedef struct interface_package__srv__SendReplacementRobot_Response__Sequence
{
  interface_package__srv__SendReplacementRobot_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__srv__SendReplacementRobot_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__SEND_REPLACEMENT_ROBOT__STRUCT_H_
