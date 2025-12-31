// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interface_package:msg/VisionDetection.idl
// generated code does not contain a copyright notice
#include "interface_package/msg/detail/vision_detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `yellow`
// Member `blue`
#include "interface_package/msg/detail/robot_state__functions.h"
// Member `ball`
#include "interface_package/msg/detail/ball_state__functions.h"

bool
interface_package__msg__VisionDetection__init(interface_package__msg__VisionDetection * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    interface_package__msg__VisionDetection__fini(msg);
    return false;
  }
  // capture_timestamp
  // yellow
  if (!interface_package__msg__RobotState__Sequence__init(&msg->yellow, 0)) {
    interface_package__msg__VisionDetection__fini(msg);
    return false;
  }
  // blue
  if (!interface_package__msg__RobotState__Sequence__init(&msg->blue, 0)) {
    interface_package__msg__VisionDetection__fini(msg);
    return false;
  }
  // ball
  if (!interface_package__msg__BallState__init(&msg->ball)) {
    interface_package__msg__VisionDetection__fini(msg);
    return false;
  }
  return true;
}

void
interface_package__msg__VisionDetection__fini(interface_package__msg__VisionDetection * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // capture_timestamp
  // yellow
  interface_package__msg__RobotState__Sequence__fini(&msg->yellow);
  // blue
  interface_package__msg__RobotState__Sequence__fini(&msg->blue);
  // ball
  interface_package__msg__BallState__fini(&msg->ball);
}

bool
interface_package__msg__VisionDetection__are_equal(const interface_package__msg__VisionDetection * lhs, const interface_package__msg__VisionDetection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // capture_timestamp
  if (lhs->capture_timestamp != rhs->capture_timestamp) {
    return false;
  }
  // yellow
  if (!interface_package__msg__RobotState__Sequence__are_equal(
      &(lhs->yellow), &(rhs->yellow)))
  {
    return false;
  }
  // blue
  if (!interface_package__msg__RobotState__Sequence__are_equal(
      &(lhs->blue), &(rhs->blue)))
  {
    return false;
  }
  // ball
  if (!interface_package__msg__BallState__are_equal(
      &(lhs->ball), &(rhs->ball)))
  {
    return false;
  }
  return true;
}

bool
interface_package__msg__VisionDetection__copy(
  const interface_package__msg__VisionDetection * input,
  interface_package__msg__VisionDetection * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // capture_timestamp
  output->capture_timestamp = input->capture_timestamp;
  // yellow
  if (!interface_package__msg__RobotState__Sequence__copy(
      &(input->yellow), &(output->yellow)))
  {
    return false;
  }
  // blue
  if (!interface_package__msg__RobotState__Sequence__copy(
      &(input->blue), &(output->blue)))
  {
    return false;
  }
  // ball
  if (!interface_package__msg__BallState__copy(
      &(input->ball), &(output->ball)))
  {
    return false;
  }
  return true;
}

interface_package__msg__VisionDetection *
interface_package__msg__VisionDetection__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__msg__VisionDetection * msg = (interface_package__msg__VisionDetection *)allocator.allocate(sizeof(interface_package__msg__VisionDetection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interface_package__msg__VisionDetection));
  bool success = interface_package__msg__VisionDetection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interface_package__msg__VisionDetection__destroy(interface_package__msg__VisionDetection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interface_package__msg__VisionDetection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interface_package__msg__VisionDetection__Sequence__init(interface_package__msg__VisionDetection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__msg__VisionDetection * data = NULL;

  if (size) {
    data = (interface_package__msg__VisionDetection *)allocator.zero_allocate(size, sizeof(interface_package__msg__VisionDetection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interface_package__msg__VisionDetection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interface_package__msg__VisionDetection__fini(&data[i - 1]);
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
interface_package__msg__VisionDetection__Sequence__fini(interface_package__msg__VisionDetection__Sequence * array)
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
      interface_package__msg__VisionDetection__fini(&array->data[i]);
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

interface_package__msg__VisionDetection__Sequence *
interface_package__msg__VisionDetection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__msg__VisionDetection__Sequence * array = (interface_package__msg__VisionDetection__Sequence *)allocator.allocate(sizeof(interface_package__msg__VisionDetection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interface_package__msg__VisionDetection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interface_package__msg__VisionDetection__Sequence__destroy(interface_package__msg__VisionDetection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interface_package__msg__VisionDetection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interface_package__msg__VisionDetection__Sequence__are_equal(const interface_package__msg__VisionDetection__Sequence * lhs, const interface_package__msg__VisionDetection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interface_package__msg__VisionDetection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interface_package__msg__VisionDetection__Sequence__copy(
  const interface_package__msg__VisionDetection__Sequence * input,
  interface_package__msg__VisionDetection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interface_package__msg__VisionDetection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interface_package__msg__VisionDetection * data =
      (interface_package__msg__VisionDetection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interface_package__msg__VisionDetection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interface_package__msg__VisionDetection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interface_package__msg__VisionDetection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
