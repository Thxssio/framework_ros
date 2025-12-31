// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from interface_package:msg/WorldState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "interface_package/msg/detail/world_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interface_package
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void WorldState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interface_package::msg::WorldState(_init);
}

void WorldState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interface_package::msg::WorldState *>(message_memory);
  typed_message->~WorldState();
}

size_t size_function__WorldState__friendly(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<interface_package::msg::RobotState> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WorldState__friendly(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<interface_package::msg::RobotState> *>(untyped_member);
  return &member[index];
}

void * get_function__WorldState__friendly(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<interface_package::msg::RobotState> *>(untyped_member);
  return &member[index];
}

void fetch_function__WorldState__friendly(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const interface_package::msg::RobotState *>(
    get_const_function__WorldState__friendly(untyped_member, index));
  auto & value = *reinterpret_cast<interface_package::msg::RobotState *>(untyped_value);
  value = item;
}

void assign_function__WorldState__friendly(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<interface_package::msg::RobotState *>(
    get_function__WorldState__friendly(untyped_member, index));
  const auto & value = *reinterpret_cast<const interface_package::msg::RobotState *>(untyped_value);
  item = value;
}

void resize_function__WorldState__friendly(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<interface_package::msg::RobotState> *>(untyped_member);
  member->resize(size);
}

size_t size_function__WorldState__opponent(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<interface_package::msg::RobotState> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WorldState__opponent(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<interface_package::msg::RobotState> *>(untyped_member);
  return &member[index];
}

void * get_function__WorldState__opponent(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<interface_package::msg::RobotState> *>(untyped_member);
  return &member[index];
}

void fetch_function__WorldState__opponent(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const interface_package::msg::RobotState *>(
    get_const_function__WorldState__opponent(untyped_member, index));
  auto & value = *reinterpret_cast<interface_package::msg::RobotState *>(untyped_value);
  value = item;
}

void assign_function__WorldState__opponent(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<interface_package::msg::RobotState *>(
    get_function__WorldState__opponent(untyped_member, index));
  const auto & value = *reinterpret_cast<const interface_package::msg::RobotState *>(untyped_value);
  item = value;
}

void resize_function__WorldState__opponent(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<interface_package::msg::RobotState> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember WorldState_message_member_array[7] = {
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface_package::msg::WorldState, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "capture_timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface_package::msg::WorldState, capture_timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "field",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<interface_package::msg::FieldDimensions>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface_package::msg::WorldState, field),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "friendly",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<interface_package::msg::RobotState>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface_package::msg::WorldState, friendly),  // bytes offset in struct
    nullptr,  // default value
    size_function__WorldState__friendly,  // size() function pointer
    get_const_function__WorldState__friendly,  // get_const(index) function pointer
    get_function__WorldState__friendly,  // get(index) function pointer
    fetch_function__WorldState__friendly,  // fetch(index, &value) function pointer
    assign_function__WorldState__friendly,  // assign(index, value) function pointer
    resize_function__WorldState__friendly  // resize(index) function pointer
  },
  {
    "opponent",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<interface_package::msg::RobotState>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface_package::msg::WorldState, opponent),  // bytes offset in struct
    nullptr,  // default value
    size_function__WorldState__opponent,  // size() function pointer
    get_const_function__WorldState__opponent,  // get_const(index) function pointer
    get_function__WorldState__opponent,  // get(index) function pointer
    fetch_function__WorldState__opponent,  // fetch(index, &value) function pointer
    assign_function__WorldState__opponent,  // assign(index, value) function pointer
    resize_function__WorldState__opponent  // resize(index) function pointer
  },
  {
    "ball",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<interface_package::msg::BallState>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface_package::msg::WorldState, ball),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "friendly_color",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<interface_package::msg::TeamColor>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface_package::msg::WorldState, friendly_color),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers WorldState_message_members = {
  "interface_package::msg",  // message namespace
  "WorldState",  // message name
  7,  // number of fields
  sizeof(interface_package::msg::WorldState),
  WorldState_message_member_array,  // message members
  WorldState_init_function,  // function to initialize message memory (memory has to be allocated)
  WorldState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t WorldState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &WorldState_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace interface_package


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interface_package::msg::WorldState>()
{
  return &::interface_package::msg::rosidl_typesupport_introspection_cpp::WorldState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface_package, msg, WorldState)() {
  return &::interface_package::msg::rosidl_typesupport_introspection_cpp::WorldState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
