// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_package:srv/SendReplacementBall.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__SEND_REPLACEMENT_BALL__STRUCT_H_
#define INTERFACE_PACKAGE__SRV__DETAIL__SEND_REPLACEMENT_BALL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SendReplacementBall in the package interface_package.
typedef struct interface_package__srv__SendReplacementBall_Request
{
  double x;
  double y;
  double vx;
  double vy;
} interface_package__srv__SendReplacementBall_Request;

// Struct for a sequence of interface_package__srv__SendReplacementBall_Request.
typedef struct interface_package__srv__SendReplacementBall_Request__Sequence
{
  interface_package__srv__SendReplacementBall_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__srv__SendReplacementBall_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SendReplacementBall in the package interface_package.
typedef struct interface_package__srv__SendReplacementBall_Response
{
  bool ok;
  rosidl_runtime_c__String message;
} interface_package__srv__SendReplacementBall_Response;

// Struct for a sequence of interface_package__srv__SendReplacementBall_Response.
typedef struct interface_package__srv__SendReplacementBall_Response__Sequence
{
  interface_package__srv__SendReplacementBall_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__srv__SendReplacementBall_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__SEND_REPLACEMENT_BALL__STRUCT_H_
