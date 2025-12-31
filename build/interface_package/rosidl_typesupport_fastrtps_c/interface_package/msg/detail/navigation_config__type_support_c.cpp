// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interface_package:msg/NavigationConfig.idl
// generated code does not contain a copyright notice
#include "interface_package/msg/detail/navigation_config__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interface_package/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interface_package/msg/detail/navigation_config__struct.h"
#include "interface_package/msg/detail/navigation_config__functions.h"
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


using _NavigationConfig__ros_msg_type = interface_package__msg__NavigationConfig;

static bool _NavigationConfig__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NavigationConfig__ros_msg_type * ros_message = static_cast<const _NavigationConfig__ros_msg_type *>(untyped_ros_message);
  // Field name: stop_distance
  {
    cdr << ros_message->stop_distance;
  }

  // Field name: linear_gain
  {
    cdr << ros_message->linear_gain;
  }

  // Field name: max_speed
  {
    cdr << ros_message->max_speed;
  }

  // Field name: max_angular_speed
  {
    cdr << ros_message->max_angular_speed;
  }

  // Field name: angular_gain
  {
    cdr << ros_message->angular_gain;
  }

  // Field name: planner_resolution
  {
    cdr << ros_message->planner_resolution;
  }

  // Field name: planner_clearance
  {
    cdr << ros_message->planner_clearance;
  }

  // Field name: collision_threshold
  {
    cdr << ros_message->collision_threshold;
  }

  // Field name: optimizer_weight_smooth
  {
    cdr << ros_message->optimizer_weight_smooth;
  }

  // Field name: optimizer_weight_jerk
  {
    cdr << ros_message->optimizer_weight_jerk;
  }

  // Field name: optimizer_weight_obstacle
  {
    cdr << ros_message->optimizer_weight_obstacle;
  }

  // Field name: optimizer_step_size
  {
    cdr << ros_message->optimizer_step_size;
  }

  // Field name: optimizer_iterations
  {
    cdr << ros_message->optimizer_iterations;
  }

  // Field name: optimizer_clearance
  {
    cdr << ros_message->optimizer_clearance;
  }

  // Field name: force_path_planning
  {
    cdr << (ros_message->force_path_planning ? true : false);
  }

  // Field name: max_segment_length
  {
    cdr << ros_message->max_segment_length;
  }

  return true;
}

static bool _NavigationConfig__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NavigationConfig__ros_msg_type * ros_message = static_cast<_NavigationConfig__ros_msg_type *>(untyped_ros_message);
  // Field name: stop_distance
  {
    cdr >> ros_message->stop_distance;
  }

  // Field name: linear_gain
  {
    cdr >> ros_message->linear_gain;
  }

  // Field name: max_speed
  {
    cdr >> ros_message->max_speed;
  }

  // Field name: max_angular_speed
  {
    cdr >> ros_message->max_angular_speed;
  }

  // Field name: angular_gain
  {
    cdr >> ros_message->angular_gain;
  }

  // Field name: planner_resolution
  {
    cdr >> ros_message->planner_resolution;
  }

  // Field name: planner_clearance
  {
    cdr >> ros_message->planner_clearance;
  }

  // Field name: collision_threshold
  {
    cdr >> ros_message->collision_threshold;
  }

  // Field name: optimizer_weight_smooth
  {
    cdr >> ros_message->optimizer_weight_smooth;
  }

  // Field name: optimizer_weight_jerk
  {
    cdr >> ros_message->optimizer_weight_jerk;
  }

  // Field name: optimizer_weight_obstacle
  {
    cdr >> ros_message->optimizer_weight_obstacle;
  }

  // Field name: optimizer_step_size
  {
    cdr >> ros_message->optimizer_step_size;
  }

  // Field name: optimizer_iterations
  {
    cdr >> ros_message->optimizer_iterations;
  }

  // Field name: optimizer_clearance
  {
    cdr >> ros_message->optimizer_clearance;
  }

  // Field name: force_path_planning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->force_path_planning = tmp ? true : false;
  }

  // Field name: max_segment_length
  {
    cdr >> ros_message->max_segment_length;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interface_package
size_t get_serialized_size_interface_package__msg__NavigationConfig(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NavigationConfig__ros_msg_type * ros_message = static_cast<const _NavigationConfig__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name stop_distance
  {
    size_t item_size = sizeof(ros_message->stop_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name linear_gain
  {
    size_t item_size = sizeof(ros_message->linear_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_speed
  {
    size_t item_size = sizeof(ros_message->max_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_angular_speed
  {
    size_t item_size = sizeof(ros_message->max_angular_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angular_gain
  {
    size_t item_size = sizeof(ros_message->angular_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name planner_resolution
  {
    size_t item_size = sizeof(ros_message->planner_resolution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name planner_clearance
  {
    size_t item_size = sizeof(ros_message->planner_clearance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name collision_threshold
  {
    size_t item_size = sizeof(ros_message->collision_threshold);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name optimizer_weight_smooth
  {
    size_t item_size = sizeof(ros_message->optimizer_weight_smooth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name optimizer_weight_jerk
  {
    size_t item_size = sizeof(ros_message->optimizer_weight_jerk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name optimizer_weight_obstacle
  {
    size_t item_size = sizeof(ros_message->optimizer_weight_obstacle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name optimizer_step_size
  {
    size_t item_size = sizeof(ros_message->optimizer_step_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name optimizer_iterations
  {
    size_t item_size = sizeof(ros_message->optimizer_iterations);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name optimizer_clearance
  {
    size_t item_size = sizeof(ros_message->optimizer_clearance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name force_path_planning
  {
    size_t item_size = sizeof(ros_message->force_path_planning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_segment_length
  {
    size_t item_size = sizeof(ros_message->max_segment_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NavigationConfig__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interface_package__msg__NavigationConfig(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interface_package
size_t max_serialized_size_interface_package__msg__NavigationConfig(
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

  // member: stop_distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: linear_gain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max_angular_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: angular_gain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: planner_resolution
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: planner_clearance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: collision_threshold
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: optimizer_weight_smooth
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: optimizer_weight_jerk
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: optimizer_weight_obstacle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: optimizer_step_size
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: optimizer_iterations
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: optimizer_clearance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: force_path_planning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: max_segment_length
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
    using DataType = interface_package__msg__NavigationConfig;
    is_plain =
      (
      offsetof(DataType, max_segment_length) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _NavigationConfig__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_interface_package__msg__NavigationConfig(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_NavigationConfig = {
  "interface_package::msg",
  "NavigationConfig",
  _NavigationConfig__cdr_serialize,
  _NavigationConfig__cdr_deserialize,
  _NavigationConfig__get_serialized_size,
  _NavigationConfig__max_serialized_size
};

static rosidl_message_type_support_t _NavigationConfig__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NavigationConfig,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interface_package, msg, NavigationConfig)() {
  return &_NavigationConfig__type_support;
}

#if defined(__cplusplus)
}
#endif
