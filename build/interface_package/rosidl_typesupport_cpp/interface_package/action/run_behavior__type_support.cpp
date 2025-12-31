// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from interface_package:action/RunBehavior.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "interface_package/action/detail/run_behavior__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace interface_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RunBehavior_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunBehavior_Goal_type_support_ids_t;

static const _RunBehavior_Goal_type_support_ids_t _RunBehavior_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunBehavior_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunBehavior_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunBehavior_Goal_type_support_symbol_names_t _RunBehavior_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_package, action, RunBehavior_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface_package, action, RunBehavior_Goal)),
  }
};

typedef struct _RunBehavior_Goal_type_support_data_t
{
  void * data[2];
} _RunBehavior_Goal_type_support_data_t;

static _RunBehavior_Goal_type_support_data_t _RunBehavior_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunBehavior_Goal_message_typesupport_map = {
  2,
  "interface_package",
  &_RunBehavior_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_RunBehavior_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_RunBehavior_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunBehavior_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunBehavior_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace interface_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interface_package::action::RunBehavior_Goal>()
{
  return &::interface_package::action::rosidl_typesupport_cpp::RunBehavior_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interface_package, action, RunBehavior_Goal)() {
  return get_message_type_support_handle<interface_package::action::RunBehavior_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interface_package/action/detail/run_behavior__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interface_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RunBehavior_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunBehavior_Result_type_support_ids_t;

static const _RunBehavior_Result_type_support_ids_t _RunBehavior_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunBehavior_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunBehavior_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunBehavior_Result_type_support_symbol_names_t _RunBehavior_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_package, action, RunBehavior_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface_package, action, RunBehavior_Result)),
  }
};

typedef struct _RunBehavior_Result_type_support_data_t
{
  void * data[2];
} _RunBehavior_Result_type_support_data_t;

static _RunBehavior_Result_type_support_data_t _RunBehavior_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunBehavior_Result_message_typesupport_map = {
  2,
  "interface_package",
  &_RunBehavior_Result_message_typesupport_ids.typesupport_identifier[0],
  &_RunBehavior_Result_message_typesupport_symbol_names.symbol_name[0],
  &_RunBehavior_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunBehavior_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunBehavior_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace interface_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interface_package::action::RunBehavior_Result>()
{
  return &::interface_package::action::rosidl_typesupport_cpp::RunBehavior_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interface_package, action, RunBehavior_Result)() {
  return get_message_type_support_handle<interface_package::action::RunBehavior_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interface_package/action/detail/run_behavior__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interface_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RunBehavior_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunBehavior_Feedback_type_support_ids_t;

static const _RunBehavior_Feedback_type_support_ids_t _RunBehavior_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunBehavior_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunBehavior_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunBehavior_Feedback_type_support_symbol_names_t _RunBehavior_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_package, action, RunBehavior_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface_package, action, RunBehavior_Feedback)),
  }
};

typedef struct _RunBehavior_Feedback_type_support_data_t
{
  void * data[2];
} _RunBehavior_Feedback_type_support_data_t;

static _RunBehavior_Feedback_type_support_data_t _RunBehavior_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunBehavior_Feedback_message_typesupport_map = {
  2,
  "interface_package",
  &_RunBehavior_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_RunBehavior_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_RunBehavior_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunBehavior_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunBehavior_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace interface_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interface_package::action::RunBehavior_Feedback>()
{
  return &::interface_package::action::rosidl_typesupport_cpp::RunBehavior_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interface_package, action, RunBehavior_Feedback)() {
  return get_message_type_support_handle<interface_package::action::RunBehavior_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interface_package/action/detail/run_behavior__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interface_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RunBehavior_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunBehavior_SendGoal_Request_type_support_ids_t;

static const _RunBehavior_SendGoal_Request_type_support_ids_t _RunBehavior_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunBehavior_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunBehavior_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunBehavior_SendGoal_Request_type_support_symbol_names_t _RunBehavior_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_package, action, RunBehavior_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface_package, action, RunBehavior_SendGoal_Request)),
  }
};

typedef struct _RunBehavior_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _RunBehavior_SendGoal_Request_type_support_data_t;

static _RunBehavior_SendGoal_Request_type_support_data_t _RunBehavior_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunBehavior_SendGoal_Request_message_typesupport_map = {
  2,
  "interface_package",
  &_RunBehavior_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_RunBehavior_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_RunBehavior_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunBehavior_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunBehavior_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace interface_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interface_package::action::RunBehavior_SendGoal_Request>()
{
  return &::interface_package::action::rosidl_typesupport_cpp::RunBehavior_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interface_package, action, RunBehavior_SendGoal_Request)() {
  return get_message_type_support_handle<interface_package::action::RunBehavior_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interface_package/action/detail/run_behavior__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interface_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RunBehavior_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunBehavior_SendGoal_Response_type_support_ids_t;

static const _RunBehavior_SendGoal_Response_type_support_ids_t _RunBehavior_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunBehavior_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunBehavior_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunBehavior_SendGoal_Response_type_support_symbol_names_t _RunBehavior_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_package, action, RunBehavior_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface_package, action, RunBehavior_SendGoal_Response)),
  }
};

typedef struct _RunBehavior_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _RunBehavior_SendGoal_Response_type_support_data_t;

static _RunBehavior_SendGoal_Response_type_support_data_t _RunBehavior_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunBehavior_SendGoal_Response_message_typesupport_map = {
  2,
  "interface_package",
  &_RunBehavior_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_RunBehavior_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_RunBehavior_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunBehavior_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunBehavior_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace interface_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interface_package::action::RunBehavior_SendGoal_Response>()
{
  return &::interface_package::action::rosidl_typesupport_cpp::RunBehavior_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interface_package, action, RunBehavior_SendGoal_Response)() {
  return get_message_type_support_handle<interface_package::action::RunBehavior_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "interface_package/action/detail/run_behavior__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interface_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RunBehavior_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunBehavior_SendGoal_type_support_ids_t;

static const _RunBehavior_SendGoal_type_support_ids_t _RunBehavior_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunBehavior_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunBehavior_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunBehavior_SendGoal_type_support_symbol_names_t _RunBehavior_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_package, action, RunBehavior_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface_package, action, RunBehavior_SendGoal)),
  }
};

typedef struct _RunBehavior_SendGoal_type_support_data_t
{
  void * data[2];
} _RunBehavior_SendGoal_type_support_data_t;

static _RunBehavior_SendGoal_type_support_data_t _RunBehavior_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunBehavior_SendGoal_service_typesupport_map = {
  2,
  "interface_package",
  &_RunBehavior_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_RunBehavior_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_RunBehavior_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t RunBehavior_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunBehavior_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace interface_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<interface_package::action::RunBehavior_SendGoal>()
{
  return &::interface_package::action::rosidl_typesupport_cpp::RunBehavior_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, interface_package, action, RunBehavior_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<interface_package::action::RunBehavior_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interface_package/action/detail/run_behavior__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interface_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RunBehavior_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunBehavior_GetResult_Request_type_support_ids_t;

static const _RunBehavior_GetResult_Request_type_support_ids_t _RunBehavior_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunBehavior_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunBehavior_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunBehavior_GetResult_Request_type_support_symbol_names_t _RunBehavior_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_package, action, RunBehavior_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface_package, action, RunBehavior_GetResult_Request)),
  }
};

typedef struct _RunBehavior_GetResult_Request_type_support_data_t
{
  void * data[2];
} _RunBehavior_GetResult_Request_type_support_data_t;

static _RunBehavior_GetResult_Request_type_support_data_t _RunBehavior_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunBehavior_GetResult_Request_message_typesupport_map = {
  2,
  "interface_package",
  &_RunBehavior_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_RunBehavior_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_RunBehavior_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunBehavior_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunBehavior_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace interface_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interface_package::action::RunBehavior_GetResult_Request>()
{
  return &::interface_package::action::rosidl_typesupport_cpp::RunBehavior_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interface_package, action, RunBehavior_GetResult_Request)() {
  return get_message_type_support_handle<interface_package::action::RunBehavior_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interface_package/action/detail/run_behavior__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interface_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RunBehavior_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunBehavior_GetResult_Response_type_support_ids_t;

static const _RunBehavior_GetResult_Response_type_support_ids_t _RunBehavior_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunBehavior_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunBehavior_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunBehavior_GetResult_Response_type_support_symbol_names_t _RunBehavior_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_package, action, RunBehavior_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface_package, action, RunBehavior_GetResult_Response)),
  }
};

typedef struct _RunBehavior_GetResult_Response_type_support_data_t
{
  void * data[2];
} _RunBehavior_GetResult_Response_type_support_data_t;

static _RunBehavior_GetResult_Response_type_support_data_t _RunBehavior_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunBehavior_GetResult_Response_message_typesupport_map = {
  2,
  "interface_package",
  &_RunBehavior_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_RunBehavior_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_RunBehavior_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunBehavior_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunBehavior_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace interface_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interface_package::action::RunBehavior_GetResult_Response>()
{
  return &::interface_package::action::rosidl_typesupport_cpp::RunBehavior_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interface_package, action, RunBehavior_GetResult_Response)() {
  return get_message_type_support_handle<interface_package::action::RunBehavior_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "interface_package/action/detail/run_behavior__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interface_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RunBehavior_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunBehavior_GetResult_type_support_ids_t;

static const _RunBehavior_GetResult_type_support_ids_t _RunBehavior_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunBehavior_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunBehavior_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunBehavior_GetResult_type_support_symbol_names_t _RunBehavior_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_package, action, RunBehavior_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface_package, action, RunBehavior_GetResult)),
  }
};

typedef struct _RunBehavior_GetResult_type_support_data_t
{
  void * data[2];
} _RunBehavior_GetResult_type_support_data_t;

static _RunBehavior_GetResult_type_support_data_t _RunBehavior_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunBehavior_GetResult_service_typesupport_map = {
  2,
  "interface_package",
  &_RunBehavior_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_RunBehavior_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_RunBehavior_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t RunBehavior_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunBehavior_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace interface_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<interface_package::action::RunBehavior_GetResult>()
{
  return &::interface_package::action::rosidl_typesupport_cpp::RunBehavior_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, interface_package, action, RunBehavior_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<interface_package::action::RunBehavior_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interface_package/action/detail/run_behavior__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interface_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RunBehavior_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RunBehavior_FeedbackMessage_type_support_ids_t;

static const _RunBehavior_FeedbackMessage_type_support_ids_t _RunBehavior_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RunBehavior_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RunBehavior_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RunBehavior_FeedbackMessage_type_support_symbol_names_t _RunBehavior_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_package, action, RunBehavior_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface_package, action, RunBehavior_FeedbackMessage)),
  }
};

typedef struct _RunBehavior_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _RunBehavior_FeedbackMessage_type_support_data_t;

static _RunBehavior_FeedbackMessage_type_support_data_t _RunBehavior_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RunBehavior_FeedbackMessage_message_typesupport_map = {
  2,
  "interface_package",
  &_RunBehavior_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_RunBehavior_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_RunBehavior_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RunBehavior_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RunBehavior_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace interface_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interface_package::action::RunBehavior_FeedbackMessage>()
{
  return &::interface_package::action::rosidl_typesupport_cpp::RunBehavior_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interface_package, action, RunBehavior_FeedbackMessage)() {
  return get_message_type_support_handle<interface_package::action::RunBehavior_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "interface_package/action/detail/run_behavior__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace interface_package
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t RunBehavior_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace interface_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<interface_package::action::RunBehavior>()
{
  using ::interface_package::action::rosidl_typesupport_cpp::RunBehavior_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  RunBehavior_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::interface_package::action::RunBehavior::Impl::SendGoalService>();
  RunBehavior_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::interface_package::action::RunBehavior::Impl::GetResultService>();
  RunBehavior_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::interface_package::action::RunBehavior::Impl::CancelGoalService>();
  RunBehavior_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::interface_package::action::RunBehavior::Impl::FeedbackMessage>();
  RunBehavior_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::interface_package::action::RunBehavior::Impl::GoalStatusMessage>();
  return &RunBehavior_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, interface_package, action, RunBehavior)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<interface_package::action::RunBehavior>();
}

#ifdef __cplusplus
}
#endif
