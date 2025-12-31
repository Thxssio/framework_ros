// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interface_package:msg/FieldDimensions.idl
// generated code does not contain a copyright notice
#include "interface_package/msg/detail/field_dimensions__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interface_package/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interface_package/msg/detail/field_dimensions__struct.h"
#include "interface_package/msg/detail/field_dimensions__functions.h"
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


using _FieldDimensions__ros_msg_type = interface_package__msg__FieldDimensions;

static bool _FieldDimensions__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FieldDimensions__ros_msg_type * ros_message = static_cast<const _FieldDimensions__ros_msg_type *>(untyped_ros_message);
  // Field name: length
  {
    cdr << ros_message->length;
  }

  // Field name: width
  {
    cdr << ros_message->width;
  }

  // Field name: goal_width
  {
    cdr << ros_message->goal_width;
  }

  // Field name: goal_depth
  {
    cdr << ros_message->goal_depth;
  }

  // Field name: boundary_width
  {
    cdr << ros_message->boundary_width;
  }

  return true;
}

static bool _FieldDimensions__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FieldDimensions__ros_msg_type * ros_message = static_cast<_FieldDimensions__ros_msg_type *>(untyped_ros_message);
  // Field name: length
  {
    cdr >> ros_message->length;
  }

  // Field name: width
  {
    cdr >> ros_message->width;
  }

  // Field name: goal_width
  {
    cdr >> ros_message->goal_width;
  }

  // Field name: goal_depth
  {
    cdr >> ros_message->goal_depth;
  }

  // Field name: boundary_width
  {
    cdr >> ros_message->boundary_width;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interface_package
size_t get_serialized_size_interface_package__msg__FieldDimensions(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FieldDimensions__ros_msg_type * ros_message = static_cast<const _FieldDimensions__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name length
  {
    size_t item_size = sizeof(ros_message->length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name width
  {
    size_t item_size = sizeof(ros_message->width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name goal_width
  {
    size_t item_size = sizeof(ros_message->goal_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name goal_depth
  {
    size_t item_size = sizeof(ros_message->goal_depth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name boundary_width
  {
    size_t item_size = sizeof(ros_message->boundary_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _FieldDimensions__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interface_package__msg__FieldDimensions(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interface_package
size_t max_serialized_size_interface_package__msg__FieldDimensions(
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

  // member: length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: width
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: goal_width
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: goal_depth
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: boundary_width
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
    using DataType = interface_package__msg__FieldDimensions;
    is_plain =
      (
      offsetof(DataType, boundary_width) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _FieldDimensions__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_interface_package__msg__FieldDimensions(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FieldDimensions = {
  "interface_package::msg",
  "FieldDimensions",
  _FieldDimensions__cdr_serialize,
  _FieldDimensions__cdr_deserialize,
  _FieldDimensions__get_serialized_size,
  _FieldDimensions__max_serialized_size
};

static rosidl_message_type_support_t _FieldDimensions__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FieldDimensions,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interface_package, msg, FieldDimensions)() {
  return &_FieldDimensions__type_support;
}

#if defined(__cplusplus)
}
#endif
