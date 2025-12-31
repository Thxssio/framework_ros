// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_package:srv/SendRobotCommand.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__SEND_ROBOT_COMMAND__STRUCT_H_
#define INTERFACE_PACKAGE__SRV__DETAIL__SEND_ROBOT_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
#include "interface_package/msg/detail/control_command__struct.h"

/// Struct defined in srv/SendRobotCommand in the package interface_package.
typedef struct interface_package__srv__SendRobotCommand_Request
{
  uint32_t robot_id;
  interface_package__msg__ControlCommand command;
} interface_package__srv__SendRobotCommand_Request;

// Struct for a sequence of interface_package__srv__SendRobotCommand_Request.
typedef struct interface_package__srv__SendRobotCommand_Request__Sequence
{
  interface_package__srv__SendRobotCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__srv__SendRobotCommand_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SendRobotCommand in the package interface_package.
typedef struct interface_package__srv__SendRobotCommand_Response
{
  bool ok;
  rosidl_runtime_c__String message;
} interface_package__srv__SendRobotCommand_Response;

// Struct for a sequence of interface_package__srv__SendRobotCommand_Response.
typedef struct interface_package__srv__SendRobotCommand_Response__Sequence
{
  interface_package__srv__SendRobotCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__srv__SendRobotCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__SEND_ROBOT_COMMAND__STRUCT_H_
