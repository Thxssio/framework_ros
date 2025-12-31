// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_package:srv/GetNavigationConfig.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__SRV__DETAIL__GET_NAVIGATION_CONFIG__STRUCT_H_
#define INTERFACE_PACKAGE__SRV__DETAIL__GET_NAVIGATION_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetNavigationConfig in the package interface_package.
typedef struct interface_package__srv__GetNavigationConfig_Request
{
  uint8_t structure_needs_at_least_one_member;
} interface_package__srv__GetNavigationConfig_Request;

// Struct for a sequence of interface_package__srv__GetNavigationConfig_Request.
typedef struct interface_package__srv__GetNavigationConfig_Request__Sequence
{
  interface_package__srv__GetNavigationConfig_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__srv__GetNavigationConfig_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'config'
#include "interface_package/msg/detail/navigation_config__struct.h"

/// Struct defined in srv/GetNavigationConfig in the package interface_package.
typedef struct interface_package__srv__GetNavigationConfig_Response
{
  interface_package__msg__NavigationConfig config;
} interface_package__srv__GetNavigationConfig_Response;

// Struct for a sequence of interface_package__srv__GetNavigationConfig_Response.
typedef struct interface_package__srv__GetNavigationConfig_Response__Sequence
{
  interface_package__srv__GetNavigationConfig_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__srv__GetNavigationConfig_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_PACKAGE__SRV__DETAIL__GET_NAVIGATION_CONFIG__STRUCT_H_
