// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from interface_package:msg/PrepareKickoffParameters.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "interface_package/msg/detail/prepare_kickoff_parameters__struct.hpp"
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

void PrepareKickoffParameters_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interface_package::msg::PrepareKickoffParameters(_init);
}

void PrepareKickoffParameters_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interface_package::msg::PrepareKickoffParameters *>(message_memory);
  typed_message->~PrepareKickoffParameters();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PrepareKickoffParameters_message_member_array[3] = {
  {
    "offset",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface_package::msg::PrepareKickoffParameters, offset),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "approach_tolerance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface_package::msg::PrepareKickoffParameters, approach_tolerance),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "heading_tolerance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface_package::msg::PrepareKickoffParameters, heading_tolerance),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PrepareKickoffParameters_message_members = {
  "interface_package::msg",  // message namespace
  "PrepareKickoffParameters",  // message name
  3,  // number of fields
  sizeof(interface_package::msg::PrepareKickoffParameters),
  PrepareKickoffParameters_message_member_array,  // message members
  PrepareKickoffParameters_init_function,  // function to initialize message memory (memory has to be allocated)
  PrepareKickoffParameters_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PrepareKickoffParameters_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PrepareKickoffParameters_message_members,
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
get_message_type_support_handle<interface_package::msg::PrepareKickoffParameters>()
{
  return &::interface_package::msg::rosidl_typesupport_introspection_cpp::PrepareKickoffParameters_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface_package, msg, PrepareKickoffParameters)() {
  return &::interface_package::msg::rosidl_typesupport_introspection_cpp::PrepareKickoffParameters_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
