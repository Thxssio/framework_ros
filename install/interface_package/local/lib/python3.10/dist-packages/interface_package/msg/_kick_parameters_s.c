// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interface_package:msg/KickParameters.idl
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
#include "interface_package/msg/detail/kick_parameters__struct.h"
#include "interface_package/msg/detail/kick_parameters__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool interface_package__msg__kick_parameters__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("interface_package.msg._kick_parameters.KickParameters", full_classname_dest, 53) == 0);
  }
  interface_package__msg__KickParameters * ros_message = _ros_message;
  {  // kick_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "kick_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kick_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // kick_angle_deg
    PyObject * field = PyObject_GetAttrString(_pymsg, "kick_angle_deg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kick_angle_deg = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // kick_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "kick_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kick_distance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // facing_tolerance
    PyObject * field = PyObject_GetAttrString(_pymsg, "facing_tolerance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->facing_tolerance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // kick_push_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "kick_push_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kick_push_speed = PyFloat_AS_DOUBLE(field);
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
PyObject * interface_package__msg__kick_parameters__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of KickParameters */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interface_package.msg._kick_parameters");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "KickParameters");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interface_package__msg__KickParameters * ros_message = (interface_package__msg__KickParameters *)raw_ros_message;
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
  {  // kick_angle_deg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->kick_angle_deg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kick_angle_deg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kick_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->kick_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kick_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // facing_tolerance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->facing_tolerance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "facing_tolerance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kick_push_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->kick_push_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kick_push_speed", field);
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
