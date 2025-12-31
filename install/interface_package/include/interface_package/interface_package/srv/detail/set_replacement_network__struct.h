// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_package:srv/SetReplacementNetwork.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__SET_REPLACEMENT_NETWORK__STRUCT_H_
#define INTERFACE_PACKAGE__SRV__DETAIL__SET_REPLACEMENT_NETWORK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'host'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetReplacementNetwork in the package interface_package.
typedef struct interface_package__srv__SetReplacementNetwork_Request
{
  rosidl_runtime_c__String host;
  uint16_t port;
} interface_package__srv__SetReplacementNetwork_Request;

// Struct for a sequence of interface_package__srv__SetReplacementNetwork_Request.
typedef struct interface_package__srv__SetReplacementNetwork_Request__Sequence
{
  interface_package__srv__SetReplacementNetwork_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__srv__SetReplacementNetwork_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetReplacementNetwork in the package interface_package.
typedef struct interface_package__srv__SetReplacementNetwork_Response
{
  bool ok;
  rosidl_runtime_c__String message;
} interface_package__srv__SetReplacementNetwork_Response;

// Struct for a sequence of interface_package__srv__SetReplacementNetwork_Response.
typedef struct interface_package__srv__SetReplacementNetwork_Response__Sequence
{
  interface_package__srv__SetReplacementNetwork_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__srv__SetReplacementNetwork_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__SET_REPLACEMENT_NETWORK__STRUCT_H_
