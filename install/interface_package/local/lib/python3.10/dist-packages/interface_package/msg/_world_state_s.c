// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interface_package:msg/WorldState.idl
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
#include "interface_package/msg/detail/world_state__struct.h"
#include "interface_package/msg/detail/world_state__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "interface_package/msg/detail/robot_state__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
bool interface_package__msg__field_dimensions__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * interface_package__msg__field_dimensions__convert_to_py(void * raw_ros_message);
bool interface_package__msg__robot_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * interface_package__msg__robot_state__convert_to_py(void * raw_ros_message);
bool interface_package__msg__robot_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * interface_package__msg__robot_state__convert_to_py(void * raw_ros_message);
bool interface_package__msg__ball_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * interface_package__msg__ball_state__convert_to_py(void * raw_ros_message);
bool interface_package__msg__team_color__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * interface_package__msg__team_color__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool interface_package__msg__world_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("interface_package.msg._world_state.WorldState", full_classname_dest, 45) == 0);
  }
  interface_package__msg__WorldState * ros_message = _ros_message;
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
  {  // capture_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "capture_timestamp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->capture_timestamp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // field
    PyObject * field = PyObject_GetAttrString(_pymsg, "field");
    if (!field) {
      return false;
    }
    if (!interface_package__msg__field_dimensions__convert_from_py(field, &ros_message->field)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // friendly
    PyObject * field = PyObject_GetAttrString(_pymsg, "friendly");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'friendly'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!interface_package__msg__RobotState__Sequence__init(&(ros_message->friendly), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create interface_package__msg__RobotState__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    interface_package__msg__RobotState * dest = ros_message->friendly.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!interface_package__msg__robot_state__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // opponent
    PyObject * field = PyObject_GetAttrString(_pymsg, "opponent");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'opponent'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!interface_package__msg__RobotState__Sequence__init(&(ros_message->opponent), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create interface_package__msg__RobotState__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    interface_package__msg__RobotState * dest = ros_message->opponent.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!interface_package__msg__robot_state__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // ball
    PyObject * field = PyObject_GetAttrString(_pymsg, "ball");
    if (!field) {
      return false;
    }
    if (!interface_package__msg__ball_state__convert_from_py(field, &ros_message->ball)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // friendly_color
    PyObject * field = PyObject_GetAttrString(_pymsg, "friendly_color");
    if (!field) {
      return false;
    }
    if (!interface_package__msg__team_color__convert_from_py(field, &ros_message->friendly_color)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interface_package__msg__world_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of WorldState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interface_package.msg._world_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "WorldState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interface_package__msg__WorldState * ros_message = (interface_package__msg__WorldState *)raw_ros_message;
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
  {  // capture_timestamp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->capture_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "capture_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // field
    PyObject * field = NULL;
    field = interface_package__msg__field_dimensions__convert_to_py(&ros_message->field);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "field", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // friendly
    PyObject * field = NULL;
    size_t size = ros_message->friendly.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    interface_package__msg__RobotState * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->friendly.data[i]);
      PyObject * pyitem = interface_package__msg__robot_state__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "friendly", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // opponent
    PyObject * field = NULL;
    size_t size = ros_message->opponent.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    interface_package__msg__RobotState * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->opponent.data[i]);
      PyObject * pyitem = interface_package__msg__robot_state__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "opponent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ball
    PyObject * field = NULL;
    field = interface_package__msg__ball_state__convert_to_py(&ros_message->ball);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ball", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // friendly_color
    PyObject * field = NULL;
    field = interface_package__msg__team_color__convert_to_py(&ros_message->friendly_color);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "friendly_color", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
