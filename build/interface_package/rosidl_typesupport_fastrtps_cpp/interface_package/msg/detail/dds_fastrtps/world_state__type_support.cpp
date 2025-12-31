// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from interface_package:msg/WorldState.idl
// generated code does not contain a copyright notice
#include "interface_package/msg/detail/world_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "interface_package/msg/detail/world_state__struct.hpp"

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
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Time &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces

namespace interface_package
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const interface_package::msg::FieldDimensions &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  interface_package::msg::FieldDimensions &);
size_t get_serialized_size(
  const interface_package::msg::FieldDimensions &,
  size_t current_alignment);
size_t
max_serialized_size_FieldDimensions(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace interface_package

namespace interface_package
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const interface_package::msg::RobotState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  interface_package::msg::RobotState &);
size_t get_serialized_size(
  const interface_package::msg::RobotState &,
  size_t current_alignment);
size_t
max_serialized_size_RobotState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace interface_package

// functions for interface_package::msg::RobotState already declared above

namespace interface_package
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const interface_package::msg::BallState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  interface_package::msg::BallState &);
size_t get_serialized_size(
  const interface_package::msg::BallState &,
  size_t current_alignment);
size_t
max_serialized_size_BallState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace interface_package

namespace interface_package
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const interface_package::msg::TeamColor &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  interface_package::msg::TeamColor &);
size_t get_serialized_size(
  const interface_package::msg::TeamColor &,
  size_t current_alignment);
size_t
max_serialized_size_TeamColor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace interface_package


namespace interface_package
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interface_package
cdr_serialize(
  const interface_package::msg::WorldState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);
  // Member: capture_timestamp
  cdr << ros_message.capture_timestamp;
  // Member: field
  interface_package::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.field,
    cdr);
  // Member: friendly
  {
    size_t size = ros_message.friendly.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      interface_package::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.friendly[i],
        cdr);
    }
  }
  // Member: opponent
  {
    size_t size = ros_message.opponent.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      interface_package::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.opponent[i],
        cdr);
    }
  }
  // Member: ball
  interface_package::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.ball,
    cdr);
  // Member: friendly_color
  interface_package::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.friendly_color,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interface_package
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  interface_package::msg::WorldState & ros_message)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  // Member: capture_timestamp
  cdr >> ros_message.capture_timestamp;

  // Member: field
  interface_package::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.field);

  // Member: friendly
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    ros_message.friendly.resize(size);
    for (size_t i = 0; i < size; i++) {
      interface_package::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.friendly[i]);
    }
  }

  // Member: opponent
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    ros_message.opponent.resize(size);
    for (size_t i = 0; i < size; i++) {
      interface_package::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.opponent[i]);
    }
  }

  // Member: ball
  interface_package::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.ball);

  // Member: friendly_color
  interface_package::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.friendly_color);

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interface_package
get_serialized_size(
  const interface_package::msg::WorldState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: stamp

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.stamp, current_alignment);
  // Member: capture_timestamp
  {
    size_t item_size = sizeof(ros_message.capture_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: field

  current_alignment +=
    interface_package::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.field, current_alignment);
  // Member: friendly
  {
    size_t array_size = ros_message.friendly.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        interface_package::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.friendly[index], current_alignment);
    }
  }
  // Member: opponent
  {
    size_t array_size = ros_message.opponent.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        interface_package::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.opponent[index], current_alignment);
    }
  }
  // Member: ball

  current_alignment +=
    interface_package::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.ball, current_alignment);
  // Member: friendly_color

  current_alignment +=
    interface_package::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.friendly_color, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interface_package
max_serialized_size_WorldState(
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


  // Member: stamp
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: capture_timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: field
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        interface_package::msg::typesupport_fastrtps_cpp::max_serialized_size_FieldDimensions(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: friendly
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        interface_package::msg::typesupport_fastrtps_cpp::max_serialized_size_RobotState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: opponent
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        interface_package::msg::typesupport_fastrtps_cpp::max_serialized_size_RobotState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: ball
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        interface_package::msg::typesupport_fastrtps_cpp::max_serialized_size_BallState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: friendly_color
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        interface_package::msg::typesupport_fastrtps_cpp::max_serialized_size_TeamColor(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = interface_package::msg::WorldState;
    is_plain =
      (
      offsetof(DataType, friendly_color) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _WorldState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const interface_package::msg::WorldState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _WorldState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<interface_package::msg::WorldState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _WorldState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const interface_package::msg::WorldState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _WorldState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_WorldState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _WorldState__callbacks = {
  "interface_package::msg",
  "WorldState",
  _WorldState__cdr_serialize,
  _WorldState__cdr_deserialize,
  _WorldState__get_serialized_size,
  _WorldState__max_serialized_size
};

static rosidl_message_type_support_t _WorldState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_WorldState__callbacks,
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
get_message_type_support_handle<interface_package::msg::WorldState>()
{
  return &interface_package::msg::typesupport_fastrtps_cpp::_WorldState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_package, msg, WorldState)() {
  return &interface_package::msg::typesupport_fastrtps_cpp::_WorldState__handle;
}

#ifdef __cplusplus
}
#endif
