// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interface_package:msg/WorldState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interface_package/msg/detail/world_state__rosidl_typesupport_introspection_c.h"
#include "interface_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interface_package/msg/detail/world_state__functions.h"
#include "interface_package/msg/detail/world_state__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `field`
#include "interface_package/msg/field_dimensions.h"
// Member `field`
#include "interface_package/msg/detail/field_dimensions__rosidl_typesupport_introspection_c.h"
// Member `friendly`
// Member `opponent`
#include "interface_package/msg/robot_state.h"
// Member `friendly`
// Member `opponent`
#include "interface_package/msg/detail/robot_state__rosidl_typesupport_introspection_c.h"
// Member `ball`
#include "interface_package/msg/ball_state.h"
// Member `ball`
#include "interface_package/msg/detail/ball_state__rosidl_typesupport_introspection_c.h"
// Member `friendly_color`
#include "interface_package/msg/team_color.h"
// Member `friendly_color`
#include "interface_package/msg/detail/team_color__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void interface_package__msg__WorldState__rosidl_typesupport_introspection_c__WorldState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interface_package__msg__WorldState__init(message_memory);
}

void interface_package__msg__WorldState__rosidl_typesupport_introspection_c__WorldState_fini_function(void * message_memory)
{
  interface_package__msg__WorldState__fini(message_memory);
}

size_t interface_package__msg__WorldState__rosidl_typesupport_introspection_c__size_function__WorldState__friendly(
  const void * untyped_member)
{
  const interface_package__msg__RobotState__Sequence * member =
    (const interface_package__msg__RobotState__Sequence *)(untyped_member);
  return member->size;
}

const void * interface_package__msg__WorldState__rosidl_typesupport_introspection_c__get_const_function__WorldState__friendly(
  const void * untyped_member, size_t index)
{
  const interface_package__msg__RobotState__Sequence * member =
    (const interface_package__msg__RobotState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interface_package__msg__WorldState__rosidl_typesupport_introspection_c__get_function__WorldState__friendly(
  void * untyped_member, size_t index)
{
  interface_package__msg__RobotState__Sequence * member =
    (interface_package__msg__RobotState__Sequence *)(untyped_member);
  return &member->data[index];
}

void interface_package__msg__WorldState__rosidl_typesupport_introspection_c__fetch_function__WorldState__friendly(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const interface_package__msg__RobotState * item =
    ((const interface_package__msg__RobotState *)
    interface_package__msg__WorldState__rosidl_typesupport_introspection_c__get_const_function__WorldState__friendly(untyped_member, index));
  interface_package__msg__RobotState * value =
    (interface_package__msg__RobotState *)(untyped_value);
  *value = *item;
}

void interface_package__msg__WorldState__rosidl_typesupport_introspection_c__assign_function__WorldState__friendly(
  void * untyped_member, size_t index, const void * untyped_value)
{
  interface_package__msg__RobotState * item =
    ((interface_package__msg__RobotState *)
    interface_package__msg__WorldState__rosidl_typesupport_introspection_c__get_function__WorldState__friendly(untyped_member, index));
  const interface_package__msg__RobotState * value =
    (const interface_package__msg__RobotState *)(untyped_value);
  *item = *value;
}

bool interface_package__msg__WorldState__rosidl_typesupport_introspection_c__resize_function__WorldState__friendly(
  void * untyped_member, size_t size)
{
  interface_package__msg__RobotState__Sequence * member =
    (interface_package__msg__RobotState__Sequence *)(untyped_member);
  interface_package__msg__RobotState__Sequence__fini(member);
  return interface_package__msg__RobotState__Sequence__init(member, size);
}

size_t interface_package__msg__WorldState__rosidl_typesupport_introspection_c__size_function__WorldState__opponent(
  const void * untyped_member)
{
  const interface_package__msg__RobotState__Sequence * member =
    (const interface_package__msg__RobotState__Sequence *)(untyped_member);
  return member->size;
}

const void * interface_package__msg__WorldState__rosidl_typesupport_introspection_c__get_const_function__WorldState__opponent(
  const void * untyped_member, size_t index)
{
  const interface_package__msg__RobotState__Sequence * member =
    (const interface_package__msg__RobotState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interface_package__msg__WorldState__rosidl_typesupport_introspection_c__get_function__WorldState__opponent(
  void * untyped_member, size_t index)
{
  interface_package__msg__RobotState__Sequence * member =
    (interface_package__msg__RobotState__Sequence *)(untyped_member);
  return &member->data[index];
}

void interface_package__msg__WorldState__rosidl_typesupport_introspection_c__fetch_function__WorldState__opponent(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const interface_package__msg__RobotState * item =
    ((const interface_package__msg__RobotState *)
    interface_package__msg__WorldState__rosidl_typesupport_introspection_c__get_const_function__WorldState__opponent(untyped_member, index));
  interface_package__msg__RobotState * value =
    (interface_package__msg__RobotState *)(untyped_value);
  *value = *item;
}

void interface_package__msg__WorldState__rosidl_typesupport_introspection_c__assign_function__WorldState__opponent(
  void * untyped_member, size_t index, const void * untyped_value)
{
  interface_package__msg__RobotState * item =
    ((interface_package__msg__RobotState *)
    interface_package__msg__WorldState__rosidl_typesupport_introspection_c__get_function__WorldState__opponent(untyped_member, index));
  const interface_package__msg__RobotState * value =
    (const interface_package__msg__RobotState *)(untyped_value);
  *item = *value;
}

bool interface_package__msg__WorldState__rosidl_typesupport_introspection_c__resize_function__WorldState__opponent(
  void * untyped_member, size_t size)
{
  interface_package__msg__RobotState__Sequence * member =
    (interface_package__msg__RobotState__Sequence *)(untyped_member);
  interface_package__msg__RobotState__Sequence__fini(member);
  return interface_package__msg__RobotState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember interface_package__msg__WorldState__rosidl_typesupport_introspection_c__WorldState_message_member_array[7] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface_package__msg__WorldState, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "capture_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface_package__msg__WorldState, capture_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "field",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface_package__msg__WorldState, field),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "friendly",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface_package__msg__WorldState, friendly),  // bytes offset in struct
    NULL,  // default value
    interface_package__msg__WorldState__rosidl_typesupport_introspection_c__size_function__WorldState__friendly,  // size() function pointer
    interface_package__msg__WorldState__rosidl_typesupport_introspection_c__get_const_function__WorldState__friendly,  // get_const(index) function pointer
    interface_package__msg__WorldState__rosidl_typesupport_introspection_c__get_function__WorldState__friendly,  // get(index) function pointer
    interface_package__msg__WorldState__rosidl_typesupport_introspection_c__fetch_function__WorldState__friendly,  // fetch(index, &value) function pointer
    interface_package__msg__WorldState__rosidl_typesupport_introspection_c__assign_function__WorldState__friendly,  // assign(index, value) function pointer
    interface_package__msg__WorldState__rosidl_typesupport_introspection_c__resize_function__WorldState__friendly  // resize(index) function pointer
  },
  {
    "opponent",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface_package__msg__WorldState, opponent),  // bytes offset in struct
    NULL,  // default value
    interface_package__msg__WorldState__rosidl_typesupport_introspection_c__size_function__WorldState__opponent,  // size() function pointer
    interface_package__msg__WorldState__rosidl_typesupport_introspection_c__get_const_function__WorldState__opponent,  // get_const(index) function pointer
    interface_package__msg__WorldState__rosidl_typesupport_introspection_c__get_function__WorldState__opponent,  // get(index) function pointer
    interface_package__msg__WorldState__rosidl_typesupport_introspection_c__fetch_function__WorldState__opponent,  // fetch(index, &value) function pointer
    interface_package__msg__WorldState__rosidl_typesupport_introspection_c__assign_function__WorldState__opponent,  // assign(index, value) function pointer
    interface_package__msg__WorldState__rosidl_typesupport_introspection_c__resize_function__WorldState__opponent  // resize(index) function pointer
  },
  {
    "ball",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface_package__msg__WorldState, ball),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "friendly_color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface_package__msg__WorldState, friendly_color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interface_package__msg__WorldState__rosidl_typesupport_introspection_c__WorldState_message_members = {
  "interface_package__msg",  // message namespace
  "WorldState",  // message name
  7,  // number of fields
  sizeof(interface_package__msg__WorldState),
  interface_package__msg__WorldState__rosidl_typesupport_introspection_c__WorldState_message_member_array,  // message members
  interface_package__msg__WorldState__rosidl_typesupport_introspection_c__WorldState_init_function,  // function to initialize message memory (memory has to be allocated)
  interface_package__msg__WorldState__rosidl_typesupport_introspection_c__WorldState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interface_package__msg__WorldState__rosidl_typesupport_introspection_c__WorldState_message_type_support_handle = {
  0,
  &interface_package__msg__WorldState__rosidl_typesupport_introspection_c__WorldState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interface_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interface_package, msg, WorldState)() {
  interface_package__msg__WorldState__rosidl_typesupport_introspection_c__WorldState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  interface_package__msg__WorldState__rosidl_typesupport_introspection_c__WorldState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interface_package, msg, FieldDimensions)();
  interface_package__msg__WorldState__rosidl_typesupport_introspection_c__WorldState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interface_package, msg, RobotState)();
  interface_package__msg__WorldState__rosidl_typesupport_introspection_c__WorldState_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interface_package, msg, RobotState)();
  interface_package__msg__WorldState__rosidl_typesupport_introspection_c__WorldState_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interface_package, msg, BallState)();
  interface_package__msg__WorldState__rosidl_typesupport_introspection_c__WorldState_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interface_package, msg, TeamColor)();
  if (!interface_package__msg__WorldState__rosidl_typesupport_introspection_c__WorldState_message_type_support_handle.typesupport_identifier) {
    interface_package__msg__WorldState__rosidl_typesupport_introspection_c__WorldState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interface_package__msg__WorldState__rosidl_typesupport_introspection_c__WorldState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
