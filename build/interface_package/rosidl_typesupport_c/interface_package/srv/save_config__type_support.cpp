// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from interface_package:srv/SaveConfig.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "interface_package/srv/detail/save_config__struct.h"
#include "interface_package/srv/detail/save_config__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace interface_package
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SaveConfig_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SaveConfig_Request_type_support_ids_t;

static const _SaveConfig_Request_type_support_ids_t _SaveConfig_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SaveConfig_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SaveConfig_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SaveConfig_Request_type_support_symbol_names_t _SaveConfig_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interface_package, srv, SaveConfig_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interface_package, srv, SaveConfig_Request)),
  }
};

typedef struct _SaveConfig_Request_type_support_data_t
{
  void * data[2];
} _SaveConfig_Request_type_support_data_t;

static _SaveConfig_Request_type_support_data_t _SaveConfig_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SaveConfig_Request_message_typesupport_map = {
  2,
  "interface_package",
  &_SaveConfig_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SaveConfig_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SaveConfig_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SaveConfig_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SaveConfig_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace interface_package

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, interface_package, srv, SaveConfig_Request)() {
  return &::interface_package::srv::rosidl_typesupport_c::SaveConfig_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interface_package/srv/detail/save_config__struct.h"
// already included above
// #include "interface_package/srv/detail/save_config__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interface_package
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SaveConfig_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SaveConfig_Response_type_support_ids_t;

static const _SaveConfig_Response_type_support_ids_t _SaveConfig_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SaveConfig_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SaveConfig_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SaveConfig_Response_type_support_symbol_names_t _SaveConfig_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interface_package, srv, SaveConfig_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interface_package, srv, SaveConfig_Response)),
  }
};

typedef struct _SaveConfig_Response_type_support_data_t
{
  void * data[2];
} _SaveConfig_Response_type_support_data_t;

static _SaveConfig_Response_type_support_data_t _SaveConfig_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SaveConfig_Response_message_typesupport_map = {
  2,
  "interface_package",
  &_SaveConfig_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SaveConfig_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SaveConfig_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SaveConfig_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SaveConfig_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace interface_package

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, interface_package, srv, SaveConfig_Response)() {
  return &::interface_package::srv::rosidl_typesupport_c::SaveConfig_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "interface_package/srv/detail/save_config__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interface_package
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SaveConfig_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SaveConfig_type_support_ids_t;

static const _SaveConfig_type_support_ids_t _SaveConfig_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SaveConfig_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SaveConfig_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SaveConfig_type_support_symbol_names_t _SaveConfig_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interface_package, srv, SaveConfig)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interface_package, srv, SaveConfig)),
  }
};

typedef struct _SaveConfig_type_support_data_t
{
  void * data[2];
} _SaveConfig_type_support_data_t;

static _SaveConfig_type_support_data_t _SaveConfig_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SaveConfig_service_typesupport_map = {
  2,
  "interface_package",
  &_SaveConfig_service_typesupport_ids.typesupport_identifier[0],
  &_SaveConfig_service_typesupport_symbol_names.symbol_name[0],
  &_SaveConfig_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SaveConfig_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SaveConfig_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace interface_package

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, interface_package, srv, SaveConfig)() {
  return &::interface_package::srv::rosidl_typesupport_c::SaveConfig_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
