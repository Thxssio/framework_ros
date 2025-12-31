// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interface_package:msg/RobotState.idl
// generated code does not contain a copyright notice
#include "interface_package/msg/detail/robot_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "interface_package/msg/detail/pose2_d__functions.h"
// Member `twist`
#include "interface_package/msg/detail/twist2_d__functions.h"

bool
interface_package__msg__RobotState__init(interface_package__msg__RobotState * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // pose
  if (!interface_package__msg__Pose2D__init(&msg->pose)) {
    interface_package__msg__RobotState__fini(msg);
    return false;
  }
  // twist
  if (!interface_package__msg__Twist2D__init(&msg->twist)) {
    interface_package__msg__RobotState__fini(msg);
    return false;
  }
  // visible
  // confidence
  return true;
}

void
interface_package__msg__RobotState__fini(interface_package__msg__RobotState * msg)
{
  if (!msg) {
    return;
  }
  // id
  // pose
  interface_package__msg__Pose2D__fini(&msg->pose);
  // twist
  interface_package__msg__Twist2D__fini(&msg->twist);
  // visible
  // confidence
}

bool
interface_package__msg__RobotState__are_equal(const interface_package__msg__RobotState * lhs, const interface_package__msg__RobotState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // pose
  if (!interface_package__msg__Pose2D__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // twist
  if (!interface_package__msg__Twist2D__are_equal(
      &(lhs->twist), &(rhs->twist)))
  {
    return false;
  }
  // visible
  if (lhs->visible != rhs->visible) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  return true;
}

bool
interface_package__msg__RobotState__copy(
  const interface_package__msg__RobotState * input,
  interface_package__msg__RobotState * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // pose
  if (!interface_package__msg__Pose2D__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // twist
  if (!interface_package__msg__Twist2D__copy(
      &(input->twist), &(output->twist)))
  {
    return false;
  }
  // visible
  output->visible = input->visible;
  // confidence
  output->confidence = input->confidence;
  return true;
}

interface_package__msg__RobotState *
interface_package__msg__RobotState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__msg__RobotState * msg = (interface_package__msg__RobotState *)allocator.allocate(sizeof(interface_package__msg__RobotState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interface_package__msg__RobotState));
  bool success = interface_package__msg__RobotState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interface_package__msg__RobotState__destroy(interface_package__msg__RobotState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interface_package__msg__RobotState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interface_package__msg__RobotState__Sequence__init(interface_package__msg__RobotState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__msg__RobotState * data = NULL;

  if (size) {
    data = (interface_package__msg__RobotState *)allocator.zero_allocate(size, sizeof(interface_package__msg__RobotState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interface_package__msg__RobotState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interface_package__msg__RobotState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interface_package__msg__RobotState__Sequence__fini(interface_package__msg__RobotState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interface_package__msg__RobotState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interface_package__msg__RobotState__Sequence *
interface_package__msg__RobotState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__msg__RobotState__Sequence * array = (interface_package__msg__RobotState__Sequence *)allocator.allocate(sizeof(interface_package__msg__RobotState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interface_package__msg__RobotState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interface_package__msg__RobotState__Sequence__destroy(interface_package__msg__RobotState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interface_package__msg__RobotState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interface_package__msg__RobotState__Sequence__are_equal(const interface_package__msg__RobotState__Sequence * lhs, const interface_package__msg__RobotState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interface_package__msg__RobotState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interface_package__msg__RobotState__Sequence__copy(
  const interface_package__msg__RobotState__Sequence * input,
  interface_package__msg__RobotState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interface_package__msg__RobotState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interface_package__msg__RobotState * data =
      (interface_package__msg__RobotState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interface_package__msg__RobotState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interface_package__msg__RobotState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interface_package__msg__RobotState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
