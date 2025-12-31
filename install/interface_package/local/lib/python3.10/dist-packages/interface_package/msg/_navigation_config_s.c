// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interface_package:msg/NavigationConfig.idl
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
#include "interface_package/msg/detail/navigation_config__struct.h"
#include "interface_package/msg/detail/navigation_config__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool interface_package__msg__navigation_config__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
    assert(strncmp("interface_package.msg._navigation_config.NavigationConfig", full_classname_dest, 57) == 0);
  }
  interface_package__msg__NavigationConfig * ros_message = _ros_message;
  {  // stop_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "stop_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->stop_distance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // linear_gain
    PyObject * field = PyObject_GetAttrString(_pymsg, "linear_gain");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->linear_gain = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_angular_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_angular_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_angular_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angular_gain
    PyObject * field = PyObject_GetAttrString(_pymsg, "angular_gain");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angular_gain = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // planner_resolution
    PyObject * field = PyObject_GetAttrString(_pymsg, "planner_resolution");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->planner_resolution = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // planner_clearance
    PyObject * field = PyObject_GetAttrString(_pymsg, "planner_clearance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->planner_clearance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // collision_threshold
    PyObject * field = PyObject_GetAttrString(_pymsg, "collision_threshold");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->collision_threshold = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // optimizer_weight_smooth
    PyObject * field = PyObject_GetAttrString(_pymsg, "optimizer_weight_smooth");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->optimizer_weight_smooth = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // optimizer_weight_jerk
    PyObject * field = PyObject_GetAttrString(_pymsg, "optimizer_weight_jerk");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->optimizer_weight_jerk = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // optimizer_weight_obstacle
    PyObject * field = PyObject_GetAttrString(_pymsg, "optimizer_weight_obstacle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->optimizer_weight_obstacle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // optimizer_step_size
    PyObject * field = PyObject_GetAttrString(_pymsg, "optimizer_step_size");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->optimizer_step_size = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // optimizer_iterations
    PyObject * field = PyObject_GetAttrString(_pymsg, "optimizer_iterations");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->optimizer_iterations = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // optimizer_clearance
    PyObject * field = PyObject_GetAttrString(_pymsg, "optimizer_clearance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->optimizer_clearance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // force_path_planning
    PyObject * field = PyObject_GetAttrString(_pymsg, "force_path_planning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->force_path_planning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // max_segment_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_segment_length");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_segment_length = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interface_package__msg__navigation_config__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of NavigationConfig */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interface_package.msg._navigation_config");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NavigationConfig");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interface_package__msg__NavigationConfig * ros_message = (interface_package__msg__NavigationConfig *)raw_ros_message;
  {  // stop_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->stop_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stop_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // linear_gain
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->linear_gain);
    {
      int rc = PyObject_SetAttrString(_pymessage, "linear_gain", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_angular_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_angular_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_angular_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angular_gain
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angular_gain);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angular_gain", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // planner_resolution
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->planner_resolution);
    {
      int rc = PyObject_SetAttrString(_pymessage, "planner_resolution", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // planner_clearance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->planner_clearance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "planner_clearance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // collision_threshold
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->collision_threshold);
    {
      int rc = PyObject_SetAttrString(_pymessage, "collision_threshold", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // optimizer_weight_smooth
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->optimizer_weight_smooth);
    {
      int rc = PyObject_SetAttrString(_pymessage, "optimizer_weight_smooth", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // optimizer_weight_jerk
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->optimizer_weight_jerk);
    {
      int rc = PyObject_SetAttrString(_pymessage, "optimizer_weight_jerk", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // optimizer_weight_obstacle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->optimizer_weight_obstacle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "optimizer_weight_obstacle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // optimizer_step_size
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->optimizer_step_size);
    {
      int rc = PyObject_SetAttrString(_pymessage, "optimizer_step_size", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // optimizer_iterations
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->optimizer_iterations);
    {
      int rc = PyObject_SetAttrString(_pymessage, "optimizer_iterations", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // optimizer_clearance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->optimizer_clearance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "optimizer_clearance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // force_path_planning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->force_path_planning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "force_path_planning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_segment_length
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_segment_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_segment_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
