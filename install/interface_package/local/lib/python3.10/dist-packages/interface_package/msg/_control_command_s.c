// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interface_package:msg/ControlCommand.idl
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
#include "interface_package/msg/detail/control_command__struct.h"
#include "interface_package/msg/detail/control_command__functions.h"

bool interface_package__msg__twist2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * interface_package__msg__twist2_d__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool interface_package__msg__control_command__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("interface_package.msg._control_command.ControlCommand", full_classname_dest, 53) == 0);
  }
  interface_package__msg__ControlCommand * ros_message = _ros_message;
  {  // has_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_velocity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_velocity = (Py_True == field);
    Py_DECREF(field);
  }
  {  // velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity");
    if (!field) {
      return false;
    }
    if (!interface_package__msg__twist2_d__convert_from_py(field, &ros_message->velocity)) {
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
    assert(PyBool_Check(field));
    ros_message->kick = (Py_True == field);
    Py_DECREF(field);
  }
  {  // kick_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "kick_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kick_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dribbler
    PyObject * field = PyObject_GetAttrString(_pymsg, "dribbler");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dribbler = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dribbler_rpm
    PyObject * field = PyObject_GetAttrString(_pymsg, "dribbler_rpm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dribbler_rpm = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interface_package__msg__control_command__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ControlCommand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interface_package.msg._control_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ControlCommand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interface_package__msg__ControlCommand * ros_message = (interface_package__msg__ControlCommand *)raw_ros_message;
  {  // has_velocity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_velocity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity
    PyObject * field = NULL;
    field = interface_package__msg__twist2_d__convert_to_py(&ros_message->velocity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kick
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->kick ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kick", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kick_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->kick_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kick_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dribbler
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dribbler ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dribbler", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dribbler_rpm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dribbler_rpm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dribbler_rpm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
