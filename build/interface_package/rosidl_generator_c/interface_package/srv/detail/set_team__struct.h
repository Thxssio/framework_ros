// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_package:srv/SetTeam.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__SET_TEAM__STRUCT_H_
#define INTERFACE_PACKAGE__SRV__DETAIL__SET_TEAM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'team'
#include "interface_package/msg/detail/team_color__struct.h"

/// Struct defined in srv/SetTeam in the package interface_package.
typedef struct interface_package__srv__SetTeam_Request
{
  interface_package__msg__TeamColor team;
} interface_package__srv__SetTeam_Request;

// Struct for a sequence of interface_package__srv__SetTeam_Request.
typedef struct interface_package__srv__SetTeam_Request__Sequence
{
  interface_package__srv__SetTeam_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__srv__SetTeam_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetTeam in the package interface_package.
typedef struct interface_package__srv__SetTeam_Response
{
  bool ok;
  rosidl_runtime_c__String message;
} interface_package__srv__SetTeam_Response;

// Struct for a sequence of interface_package__srv__SetTeam_Response.
typedef struct interface_package__srv__SetTeam_Response__Sequence
{
  interface_package__srv__SetTeam_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__srv__SetTeam_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__SET_TEAM__STRUCT_H_
