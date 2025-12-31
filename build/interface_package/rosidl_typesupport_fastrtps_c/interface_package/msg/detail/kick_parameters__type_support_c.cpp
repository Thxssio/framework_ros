// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interface_package:msg/KickParameters.idl
// generated code does not contain a copyright notice
#include "interface_package/msg/detail/kick_parameters__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interface_package/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interface_package/msg/detail/kick_parameters__struct.h"
#include "interface_package/msg/detail/kick_parameters__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _KickParameters__ros_msg_type = interface_package__msg__KickParameters;

static bool _KickParameters__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _KickParameters__ros_msg_type * ros_message = static_cast<const _KickParameters__ros_msg_type *>(untyped_ros_message);
  // Field name: kick_speed
  {
    cdr << ros_message->kick_speed;
  }

  // Field name: kick_angle_deg
  {
    cdr << ros_message->kick_angle_deg;
  }

  // Field name: kick_distance
  {
    cdr << ros_message->kick_distance;
  }

  // Field name: facing_tolerance
  {
    cdr << ros_message->facing_tolerance;
  }

  // Field name: kick_push_speed
  {
    cdr << ros_message->kick_push_speed;
  }

  // Field name: dribbler_rpm
  {
    cdr << ros_message->dribbler_rpm;
  }

  return true;
}

static bool _KickParameters__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _KickParameters__ros_msg_type * ros_message = static_cast<_KickParameters__ros_msg_type *>(untyped_ros_message);
  // Field name: kick_speed
  {
    cdr >> ros_message->kick_speed;
  }

  // Field name: kick_angle_deg
  {
    cdr >> ros_message->kick_angle_deg;
  }

  // Field name: kick_distance
  {
    cdr >> ros_message->kick_distance;
  }

  // Field name: facing_tolerance
  {
    cdr >> ros_message->facing_tolerance;
  }

  // Field name: kick_push_speed
  {
    cdr >> ros_message->kick_push_speed;
  }

  // Field name: dribbler_rpm
  {
    cdr >> ros_message->dribbler_rpm;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interface_package
size_t get_serialized_size_interface_package__msg__KickParameters(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _KickParameters__ros_msg_type * ros_message = static_cast<const _KickParameters__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name kick_speed
  {
    size_t item_size = sizeof(ros_message->kick_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name kick_angle_deg
  {
    size_t item_size = sizeof(ros_message->kick_angle_deg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name kick_distance
  {
    size_t item_size = sizeof(ros_message->kick_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name facing_tolerance
  {
    size_t item_size = sizeof(ros_message->facing_tolerance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name kick_push_speed
  {
    size_t item_size = sizeof(ros_message->kick_push_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dribbler_rpm
  {
    size_t item_size = sizeof(ros_message->dribbler_rpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _KickParameters__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interface_package__msg__KickParameters(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interface_package
size_t max_serialized_size_interface_package__msg__KickParameters(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: kick_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: kick_angle_deg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: kick_distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: facing_tolerance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: kick_push_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dribbler_rpm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = interface_package__msg__KickParameters;
    is_plain =
      (
      offsetof(DataType, dribbler_rpm) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _KickParameters__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_interface_package__msg__KickParameters(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_KickParameters = {
  "interface_package::msg",
  "KickParameters",
  _KickParameters__cdr_serialize,
  _KickParameters__cdr_deserialize,
  _KickParameters__get_serialized_size,
  _KickParameters__max_serialized_size
};

static rosidl_message_type_support_t _KickParameters__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_KickParameters,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interface_package, msg, KickParameters)() {
  return &_KickParameters__type_support;
}

#if defined(__cplusplus)
}
#endif
