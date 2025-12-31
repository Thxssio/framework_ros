// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_package:srv/LoadConfig.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__LOAD_CONFIG__STRUCT_H_
#define INTERFACE_PACKAGE__SRV__DETAIL__LOAD_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'path'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LoadConfig in the package interface_package.
typedef struct interface_package__srv__LoadConfig_Request
{
  uint8_t kind;
  rosidl_runtime_c__String path;
} interface_package__srv__LoadConfig_Request;

// Struct for a sequence of interface_package__srv__LoadConfig_Request.
typedef struct interface_package__srv__LoadConfig_Request__Sequence
{
  interface_package__srv__LoadConfig_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__srv__LoadConfig_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'nav'
#include "interface_package/msg/detail/navigation_config__struct.h"
// Member 'kick'
#include "interface_package/msg/detail/kick_parameters__struct.h"
// Member 'prep'
#include "interface_package/msg/detail/prepare_kickoff_parameters__struct.h"

/// Struct defined in srv/LoadConfig in the package interface_package.
typedef struct interface_package__srv__LoadConfig_Response
{
  bool ok;
  rosidl_runtime_c__String message;
  interface_package__msg__NavigationConfig nav;
  interface_package__msg__KickParameters kick;
  interface_package__msg__PrepareKickoffParameters prep;
} interface_package__srv__LoadConfig_Response;

// Struct for a sequence of interface_package__srv__LoadConfig_Response.
typedef struct interface_package__srv__LoadConfig_Response__Sequence
{
  interface_package__srv__LoadConfig_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__srv__LoadConfig_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__LOAD_CONFIG__STRUCT_H_
