// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_package:action/RunBehavior.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__ACTION__DETAIL__RUN_BEHAVIOR__STRUCT_H_
#define INTERFACE_PACKAGE__ACTION__DETAIL__RUN_BEHAVIOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'behavior'
#include "interface_package/msg/detail/behavior_choice__struct.h"
// Member 'nav'
#include "interface_package/msg/detail/navigation_config__struct.h"
// Member 'kick'
#include "interface_package/msg/detail/kick_parameters__struct.h"
// Member 'prep'
#include "interface_package/msg/detail/prepare_kickoff_parameters__struct.h"

/// Struct defined in action/RunBehavior in the package interface_package.
typedef struct interface_package__action__RunBehavior_Goal
{
  uint32_t robot_id;
  interface_package__msg__BehaviorChoice behavior;
  interface_package__msg__NavigationConfig nav;
  interface_package__msg__KickParameters kick;
  interface_package__msg__PrepareKickoffParameters prep;
} interface_package__action__RunBehavior_Goal;

// Struct for a sequence of interface_package__action__RunBehavior_Goal.
typedef struct interface_package__action__RunBehavior_Goal__Sequence
{
  interface_package__action__RunBehavior_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__action__RunBehavior_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/RunBehavior in the package interface_package.
typedef struct interface_package__action__RunBehavior_Result
{
  bool accepted;
  rosidl_runtime_c__String message;
} interface_package__action__RunBehavior_Result;

// Struct for a sequence of interface_package__action__RunBehavior_Result.
typedef struct interface_package__action__RunBehavior_Result__Sequence
{
  interface_package__action__RunBehavior_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__action__RunBehavior_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "interface_package/msg/detail/behavior_status__struct.h"
// Member 'last_command'
#include "interface_package/msg/detail/control_command__struct.h"

/// Struct defined in action/RunBehavior in the package interface_package.
typedef struct interface_package__action__RunBehavior_Feedback
{
  interface_package__msg__BehaviorStatus status;
  interface_package__msg__ControlCommand last_command;
} interface_package__action__RunBehavior_Feedback;

// Struct for a sequence of interface_package__action__RunBehavior_Feedback.
typedef struct interface_package__action__RunBehavior_Feedback__Sequence
{
  interface_package__action__RunBehavior_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__action__RunBehavior_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "interface_package/action/detail/run_behavior__struct.h"

/// Struct defined in action/RunBehavior in the package interface_package.
typedef struct interface_package__action__RunBehavior_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  interface_package__action__RunBehavior_Goal goal;
} interface_package__action__RunBehavior_SendGoal_Request;

// Struct for a sequence of interface_package__action__RunBehavior_SendGoal_Request.
typedef struct interface_package__action__RunBehavior_SendGoal_Request__Sequence
{
  interface_package__action__RunBehavior_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__action__RunBehavior_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/RunBehavior in the package interface_package.
typedef struct interface_package__action__RunBehavior_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} interface_package__action__RunBehavior_SendGoal_Response;

// Struct for a sequence of interface_package__action__RunBehavior_SendGoal_Response.
typedef struct interface_package__action__RunBehavior_SendGoal_Response__Sequence
{
  interface_package__action__RunBehavior_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__action__RunBehavior_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/RunBehavior in the package interface_package.
typedef struct interface_package__action__RunBehavior_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} interface_package__action__RunBehavior_GetResult_Request;

// Struct for a sequence of interface_package__action__RunBehavior_GetResult_Request.
typedef struct interface_package__action__RunBehavior_GetResult_Request__Sequence
{
  interface_package__action__RunBehavior_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__action__RunBehavior_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "interface_package/action/detail/run_behavior__struct.h"

/// Struct defined in action/RunBehavior in the package interface_package.
typedef struct interface_package__action__RunBehavior_GetResult_Response
{
  int8_t status;
  interface_package__action__RunBehavior_Result result;
} interface_package__action__RunBehavior_GetResult_Response;

// Struct for a sequence of interface_package__action__RunBehavior_GetResult_Response.
typedef struct interface_package__action__RunBehavior_GetResult_Response__Sequence
{
  interface_package__action__RunBehavior_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__action__RunBehavior_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "interface_package/action/detail/run_behavior__struct.h"

/// Struct defined in action/RunBehavior in the package interface_package.
typedef struct interface_package__action__RunBehavior_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  interface_package__action__RunBehavior_Feedback feedback;
} interface_package__action__RunBehavior_FeedbackMessage;

// Struct for a sequence of interface_package__action__RunBehavior_FeedbackMessage.
typedef struct interface_package__action__RunBehavior_FeedbackMessage__Sequence
{
  interface_package__action__RunBehavior_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__action__RunBehavior_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_PACKAGE__ACTION__DETAIL__RUN_BEHAVIOR__STRUCT_H_
