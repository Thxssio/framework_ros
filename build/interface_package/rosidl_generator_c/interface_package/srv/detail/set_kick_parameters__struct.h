// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_package:srv/SetKickParameters.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__SET_KICK_PARAMETERS__STRUCT_H_
#define INTERFACE_PACKAGE__SRV__DETAIL__SET_KICK_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'params'
#include "interface_package/msg/detail/kick_parameters__struct.h"

/// Struct defined in srv/SetKickParameters in the package interface_package.
typedef struct interface_package__srv__SetKickParameters_Request
{
  interface_package__msg__KickParameters params;
} interface_package__srv__SetKickParameters_Request;

// Struct for a sequence of interface_package__srv__SetKickParameters_Request.
typedef struct interface_package__srv__SetKickParameters_Request__Sequence
{
  interface_package__srv__SetKickParameters_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__srv__SetKickParameters_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetKickParameters in the package interface_package.
typedef struct interface_package__srv__SetKickParameters_Response
{
  bool ok;
  rosidl_runtime_c__String message;
} interface_package__srv__SetKickParameters_Response;

// Struct for a sequence of interface_package__srv__SetKickParameters_Response.
typedef struct interface_package__srv__SetKickParameters_Response__Sequence
{
  interface_package__srv__SetKickParameters_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__srv__SetKickParameters_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__SET_KICK_PARAMETERS__STRUCT_H_
