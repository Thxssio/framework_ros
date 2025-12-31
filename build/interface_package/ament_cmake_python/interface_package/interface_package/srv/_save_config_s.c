// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interface_package:srv/SaveConfig.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "interface_package/srv/detail/save_config__struct.h"
#include "interface_package/srv/detail/save_config__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool interface_package__msg__navigation_config__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * interface_package__msg__navigation_config__convert_to_py(void * raw_ros_message);
bool interface_package__msg__kick_parameters__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * interface_package__msg__kick_parameters__convert_to_py(void * raw_ros_message);
bool interface_package__msg__prepare_kickoff_parameters__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * interface_package__msg__prepare_kickoff_parameters__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool interface_package__srv__save_config__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("interface_package.srv._save_config.SaveConfig_Request", full_classname_dest, 53) == 0);
  }
  interface_package__srv__SaveConfig_Request * ros_message = _ros_message;
  {  // kind
    PyObject * field = PyObject_GetAttrString(_pymsg, "kind");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->kind = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // path
    PyObject * field = PyObject_GetAttrString(_pymsg, "path");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->path, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // nav
    PyObject * field = PyObject_GetAttrString(_pymsg, "nav");
    if (!field) {
      return false;
    }
    if (!interface_package__msg__navigation_config__convert_from_py(field, &ros_message->nav)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // kick
    PyObject * field = PyObject_GetAttrString(_pymsg, "kick");
    if (!field) {
      return false;
    }
    if (!interface_package__msg__kick_parameters__convert_from_py(field, &ros_message->kick)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // prep
    PyObject * field = PyObject_GetAttrString(_pymsg, "prep");
    if (!field) {
      return false;
    }
    if (!interface_package__msg__prepare_kickoff_parameters__convert_from_py(field, &ros_message->prep)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interface_package__srv__save_config__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SaveConfig_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interface_package.srv._save_config");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SaveConfig_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interface_package__srv__SaveConfig_Request * ros_message = (interface_package__srv__SaveConfig_Request *)raw_ros_message;
  {  // kind
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->kind);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kind", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // path
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->path.data,
      strlen(ros_message->path.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "path", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nav
    PyObject * field = NULL;
    field = interface_package__msg__navigation_config__convert_to_py(&ros_message->nav);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "nav", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kick
    PyObject * field = NULL;
    field = interface_package__msg__kick_parameters__convert_to_py(&ros_message->kick);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "kick", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prep
    PyObject * field = NULL;
    field = interface_package__msg__prepare_kickoff_parameters__convert_to_py(&ros_message->prep);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "prep", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "interface_package/srv/detail/save_config__struct.h"
// already included above
// #include "interface_package/srv/detail/save_config__functions.h"

// already included above
// #include "rosidl_runtime_c/string.h"
// already included above
// #include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool interface_package__srv__save_config__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("interface_package.srv._save_config.SaveConfig_Response", full_classname_dest, 54) == 0);
  }
  interface_package__srv__SaveConfig_Response * ros_message = _ros_message;
  {  // ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "ok");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ok = (Py_True == field);
    Py_DECREF(field);
  }
  {  // message
    PyObject * field = PyObject_GetAttrString(_pymsg, "message");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->message, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interface_package__srv__save_config__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SaveConfig_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interface_package.srv._save_config");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SaveConfig_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interface_package__srv__SaveConfig_Response * ros_message = (interface_package__srv__SaveConfig_Response *)raw_ros_message;
  {  // ok
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ok ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // message
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->message.data,
      strlen(ros_message->message.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "message", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
