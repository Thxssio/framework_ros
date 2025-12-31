// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interface_package:msg/VisionGeometry.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interface_package/msg/detail/vision_geometry__rosidl_typesupport_introspection_c.h"
#include "interface_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interface_package/msg/detail/vision_geometry__functions.h"
#include "interface_package/msg/detail/vision_geometry__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `field`
#include "interface_package/msg/field_dimensions.h"
// Member `field`
#include "interface_package/msg/detail/field_dimensions__rosidl_typesupport_introspection_c.h"
// Member `camera_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void interface_package__msg__VisionGeometry__rosidl_typesupport_introspection_c__VisionGeometry_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interface_package__msg__VisionGeometry__init(message_memory);
}

void interface_package__msg__VisionGeometry__rosidl_typesupport_introspection_c__VisionGeometry_fini_function(void * message_memory)
{
  interface_package__msg__VisionGeometry__fini(message_memory);
}

size_t interface_package__msg__VisionGeometry__rosidl_typesupport_introspection_c__size_function__VisionGeometry__camera_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * interface_package__msg__VisionGeometry__rosidl_typesupport_introspection_c__get_const_function__VisionGeometry__camera_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interface_package__msg__VisionGeometry__rosidl_typesupport_introspection_c__get_function__VisionGeometry__camera_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void interface_package__msg__VisionGeometry__rosidl_typesupport_introspection_c__fetch_function__VisionGeometry__camera_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    interface_package__msg__VisionGeometry__rosidl_typesupport_introspection_c__get_const_function__VisionGeometry__camera_ids(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void interface_package__msg__VisionGeometry__rosidl_typesupport_introspection_c__assign_function__VisionGeometry__camera_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    interface_package__msg__VisionGeometry__rosidl_typesupport_introspection_c__get_function__VisionGeometry__camera_ids(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool interface_package__msg__VisionGeometry__rosidl_typesupport_introspection_c__resize_function__VisionGeometry__camera_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember interface_package__msg__VisionGeometry__rosidl_typesupport_introspection_c__VisionGeometry_message_member_array[5] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface_package__msg__VisionGeometry, stamp),  // bytes offset in struct
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
    offsetof(interface_package__msg__VisionGeometry, field),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "expected_cameras",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface_package__msg__VisionGeometry, expected_cameras),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "camera_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface_package__msg__VisionGeometry, camera_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "camera_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface_package__msg__VisionGeometry, camera_ids),  // bytes offset in struct
    NULL,  // default value
    interface_package__msg__VisionGeometry__rosidl_typesupport_introspection_c__size_function__VisionGeometry__camera_ids,  // size() function pointer
    interface_package__msg__VisionGeometry__rosidl_typesupport_introspection_c__get_const_function__VisionGeometry__camera_ids,  // get_const(index) function pointer
    interface_package__msg__VisionGeometry__rosidl_typesupport_introspection_c__get_function__VisionGeometry__camera_ids,  // get(index) function pointer
    interface_package__msg__VisionGeometry__rosidl_typesupport_introspection_c__fetch_function__VisionGeometry__camera_ids,  // fetch(index, &value) function pointer
    interface_package__msg__VisionGeometry__rosidl_typesupport_introspection_c__assign_function__VisionGeometry__camera_ids,  // assign(index, value) function pointer
    interface_package__msg__VisionGeometry__rosidl_typesupport_introspection_c__resize_function__VisionGeometry__camera_ids  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interface_package__msg__VisionGeometry__rosidl_typesupport_introspection_c__VisionGeometry_message_members = {
  "interface_package__msg",  // message namespace
  "VisionGeometry",  // message name
  5,  // number of fields
  sizeof(interface_package__msg__VisionGeometry),
  interface_package__msg__VisionGeometry__rosidl_typesupport_introspection_c__VisionGeometry_message_member_array,  // message members
  interface_package__msg__VisionGeometry__rosidl_typesupport_introspection_c__VisionGeometry_init_function,  // function to initialize message memory (memory has to be allocated)
  interface_package__msg__VisionGeometry__rosidl_typesupport_introspection_c__VisionGeometry_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interface_package__msg__VisionGeometry__rosidl_typesupport_introspection_c__VisionGeometry_message_type_support_handle = {
  0,
  &interface_package__msg__VisionGeometry__rosidl_typesupport_introspection_c__VisionGeometry_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interface_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interface_package, msg, VisionGeometry)() {
  interface_package__msg__VisionGeometry__rosidl_typesupport_introspection_c__VisionGeometry_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  interface_package__msg__VisionGeometry__rosidl_typesupport_introspection_c__VisionGeometry_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interface_package, msg, FieldDimensions)();
  if (!interface_package__msg__VisionGeometry__rosidl_typesupport_introspection_c__VisionGeometry_message_type_support_handle.typesupport_identifier) {
    interface_package__msg__VisionGeometry__rosidl_typesupport_introspection_c__VisionGeometry_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interface_package__msg__VisionGeometry__rosidl_typesupport_introspection_c__VisionGeometry_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
