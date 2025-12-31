// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interface_package:msg/RobotTarget.idl
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
#include "interface_package/msg/detail/robot_target__struct.h"
#include "interface_package/msg/detail/robot_target__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
bool interface_package__msg__pose2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * interface_package__msg__pose2_d__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool interface_package__msg__robot_target__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("interface_package.msg._robot_target.RobotTarget", full_classname_dest, 47) == 0);
  }
  interface_package__msg__RobotTarget * ros_message = _ros_message;
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // robot_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->robot_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // target
    PyObject * field = PyObject_GetAttrString(_pymsg, "target");
    if (!field) {
      return false;
    }
    if (!interface_package__msg__pose2_d__convert_from_py(field, &ros_message->target)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // force_path
    PyObject * field = PyObject_GetAttrString(_pymsg, "force_path");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->force_path = (Py_True == field);
    Py_DECREF(field);
  }
  {  // allow_goal_area
    PyObject * field = PyObject_GetAttrString(_pymsg, "allow_goal_area");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->allow_goal_area = (Py_True == field);
    Py_DECREF(field);
  }
  {  // avoid_ball
    PyObject * field = PyObject_GetAttrString(_pymsg, "avoid_ball");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->avoid_ball = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interface_package__msg__robot_target__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RobotTarget */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interface_package.msg._robot_target");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RobotTarget");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interface_package__msg__RobotTarget * ros_message = (interface_package__msg__RobotTarget *)raw_ros_message;
  {  // stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robot_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->robot_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target
    PyObject * field = NULL;
    field = interface_package__msg__pose2_d__convert_to_py(&ros_message->target);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // force_path
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->force_path ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "force_path", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // allow_goal_area
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->allow_goal_area ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "allow_goal_area", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // avoid_ball
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->avoid_ball ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "avoid_ball", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
