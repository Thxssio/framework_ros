// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interface_package:msg/PrepareKickoffParameters.idl
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
#include "interface_package/msg/detail/prepare_kickoff_parameters__struct.h"
#include "interface_package/msg/detail/prepare_kickoff_parameters__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool interface_package__msg__prepare_kickoff_parameters__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[75];
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
    assert(strncmp("interface_package.msg._prepare_kickoff_parameters.PrepareKickoffParameters", full_classname_dest, 74) == 0);
  }
  interface_package__msg__PrepareKickoffParameters * ros_message = _ros_message;
  {  // offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "offset");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->offset = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // approach_tolerance
    PyObject * field = PyObject_GetAttrString(_pymsg, "approach_tolerance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->approach_tolerance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_tolerance
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_tolerance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_tolerance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interface_package__msg__prepare_kickoff_parameters__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PrepareKickoffParameters */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interface_package.msg._prepare_kickoff_parameters");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PrepareKickoffParameters");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interface_package__msg__PrepareKickoffParameters * ros_message = (interface_package__msg__PrepareKickoffParameters *)raw_ros_message;
  {  // offset
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // approach_tolerance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->approach_tolerance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "approach_tolerance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_tolerance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_tolerance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_tolerance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
