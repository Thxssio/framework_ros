// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from interface_package:msg/NavigationConfig.idl
// generated code does not contain a copyright notice
#include "interface_package/msg/detail/navigation_config__rosidl_typesupport_fastrtps_cpp.hpp"
#include "interface_package/msg/detail/navigation_config__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace interface_package
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interface_package
cdr_serialize(
  const interface_package::msg::NavigationConfig & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: stop_distance
  cdr << ros_message.stop_distance;
  // Member: linear_gain
  cdr << ros_message.linear_gain;
  // Member: max_speed
  cdr << ros_message.max_speed;
  // Member: max_angular_speed
  cdr << ros_message.max_angular_speed;
  // Member: angular_gain
  cdr << ros_message.angular_gain;
  // Member: planner_resolution
  cdr << ros_message.planner_resolution;
  // Member: planner_clearance
  cdr << ros_message.planner_clearance;
  // Member: collision_threshold
  cdr << ros_message.collision_threshold;
  // Member: optimizer_weight_smooth
  cdr << ros_message.optimizer_weight_smooth;
  // Member: optimizer_weight_jerk
  cdr << ros_message.optimizer_weight_jerk;
  // Member: optimizer_weight_obstacle
  cdr << ros_message.optimizer_weight_obstacle;
  // Member: optimizer_step_size
  cdr << ros_message.optimizer_step_size;
  // Member: optimizer_iterations
  cdr << ros_message.optimizer_iterations;
  // Member: optimizer_clearance
  cdr << ros_message.optimizer_clearance;
  // Member: force_path_planning
  cdr << (ros_message.force_path_planning ? true : false);
  // Member: max_segment_length
  cdr << ros_message.max_segment_length;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interface_package
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  interface_package::msg::NavigationConfig & ros_message)
{
  // Member: stop_distance
  cdr >> ros_message.stop_distance;

  // Member: linear_gain
  cdr >> ros_message.linear_gain;

  // Member: max_speed
  cdr >> ros_message.max_speed;

  // Member: max_angular_speed
  cdr >> ros_message.max_angular_speed;

  // Member: angular_gain
  cdr >> ros_message.angular_gain;

  // Member: planner_resolution
  cdr >> ros_message.planner_resolution;

  // Member: planner_clearance
  cdr >> ros_message.planner_clearance;

  // Member: collision_threshold
  cdr >> ros_message.collision_threshold;

  // Member: optimizer_weight_smooth
  cdr >> ros_message.optimizer_weight_smooth;

  // Member: optimizer_weight_jerk
  cdr >> ros_message.optimizer_weight_jerk;

  // Member: optimizer_weight_obstacle
  cdr >> ros_message.optimizer_weight_obstacle;

  // Member: optimizer_step_size
  cdr >> ros_message.optimizer_step_size;

  // Member: optimizer_iterations
  cdr >> ros_message.optimizer_iterations;

  // Member: optimizer_clearance
  cdr >> ros_message.optimizer_clearance;

  // Member: force_path_planning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.force_path_planning = tmp ? true : false;
  }

  // Member: max_segment_length
  cdr >> ros_message.max_segment_length;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interface_package
get_serialized_size(
  const interface_package::msg::NavigationConfig & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: stop_distance
  {
    size_t item_size = sizeof(ros_message.stop_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: linear_gain
  {
    size_t item_size = sizeof(ros_message.linear_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_speed
  {
    size_t item_size = sizeof(ros_message.max_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_angular_speed
  {
    size_t item_size = sizeof(ros_message.max_angular_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angular_gain
  {
    size_t item_size = sizeof(ros_message.angular_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: planner_resolution
  {
    size_t item_size = sizeof(ros_message.planner_resolution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: planner_clearance
  {
    size_t item_size = sizeof(ros_message.planner_clearance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: collision_threshold
  {
    size_t item_size = sizeof(ros_message.collision_threshold);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: optimizer_weight_smooth
  {
    size_t item_size = sizeof(ros_message.optimizer_weight_smooth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: optimizer_weight_jerk
  {
    size_t item_size = sizeof(ros_message.optimizer_weight_jerk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: optimizer_weight_obstacle
  {
    size_t item_size = sizeof(ros_message.optimizer_weight_obstacle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: optimizer_step_size
  {
    size_t item_size = sizeof(ros_message.optimizer_step_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: optimizer_iterations
  {
    size_t item_size = sizeof(ros_message.optimizer_iterations);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: optimizer_clearance
  {
    size_t item_size = sizeof(ros_message.optimizer_clearance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: force_path_planning
  {
    size_t item_size = sizeof(ros_message.force_path_planning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_segment_length
  {
    size_t item_size = sizeof(ros_message.max_segment_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interface_package
max_serialized_size_NavigationConfig(
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


  // Member: stop_distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: linear_gain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_angular_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angular_gain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: planner_resolution
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: planner_clearance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: collision_threshold
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: optimizer_weight_smooth
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: optimizer_weight_jerk
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: optimizer_weight_obstacle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: optimizer_step_size
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: optimizer_iterations
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: optimizer_clearance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: force_path_planning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: max_segment_length
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
    using DataType = interface_package::msg::NavigationConfig;
    is_plain =
      (
      offsetof(DataType, max_segment_length) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _NavigationConfig__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const interface_package::msg::NavigationConfig *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NavigationConfig__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<interface_package::msg::NavigationConfig *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NavigationConfig__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const interface_package::msg::NavigationConfig *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NavigationConfig__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_NavigationConfig(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _NavigationConfig__callbacks = {
  "interface_package::msg",
  "NavigationConfig",
  _NavigationConfig__cdr_serialize,
  _NavigationConfig__cdr_deserialize,
  _NavigationConfig__get_serialized_size,
  _NavigationConfig__max_serialized_size
};

static rosidl_message_type_support_t _NavigationConfig__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NavigationConfig__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace interface_package

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_interface_package
const rosidl_message_type_support_t *
get_message_type_support_handle<interface_package::msg::NavigationConfig>()
{
  return &interface_package::msg::typesupport_fastrtps_cpp::_NavigationConfig__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_package, msg, NavigationConfig)() {
  return &interface_package::msg::typesupport_fastrtps_cpp::_NavigationConfig__handle;
}

#ifdef __cplusplus
}
#endif
