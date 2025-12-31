// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interface_package:msg/RobotTarget.idl
// generated code does not contain a copyright notice
#include "interface_package/msg/detail/robot_target__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `target`
#include "interface_package/msg/detail/pose2_d__functions.h"

bool
interface_package__msg__RobotTarget__init(interface_package__msg__RobotTarget * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    interface_package__msg__RobotTarget__fini(msg);
    return false;
  }
  // robot_id
  // target
  if (!interface_package__msg__Pose2D__init(&msg->target)) {
    interface_package__msg__RobotTarget__fini(msg);
    return false;
  }
  // force_path
  // allow_goal_area
  // avoid_ball
  return true;
}

void
interface_package__msg__RobotTarget__fini(interface_package__msg__RobotTarget * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // robot_id
  // target
  interface_package__msg__Pose2D__fini(&msg->target);
  // force_path
  // allow_goal_area
  // avoid_ball
}

bool
interface_package__msg__RobotTarget__are_equal(const interface_package__msg__RobotTarget * lhs, const interface_package__msg__RobotTarget * rhs)
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
  // robot_id
  if (lhs->robot_id != rhs->robot_id) {
    return false;
  }
  // target
  if (!interface_package__msg__Pose2D__are_equal(
      &(lhs->target), &(rhs->target)))
  {
    return false;
  }
  // force_path
  if (lhs->force_path != rhs->force_path) {
    return false;
  }
  // allow_goal_area
  if (lhs->allow_goal_area != rhs->allow_goal_area) {
    return false;
  }
  // avoid_ball
  if (lhs->avoid_ball != rhs->avoid_ball) {
    return false;
  }
  return true;
}

bool
interface_package__msg__RobotTarget__copy(
  const interface_package__msg__RobotTarget * input,
  interface_package__msg__RobotTarget * output)
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
  // robot_id
  output->robot_id = input->robot_id;
  // target
  if (!interface_package__msg__Pose2D__copy(
      &(input->target), &(output->target)))
  {
    return false;
  }
  // force_path
  output->force_path = input->force_path;
  // allow_goal_area
  output->allow_goal_area = input->allow_goal_area;
  // avoid_ball
  output->avoid_ball = input->avoid_ball;
  return true;
}

interface_package__msg__RobotTarget *
interface_package__msg__RobotTarget__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__msg__RobotTarget * msg = (interface_package__msg__RobotTarget *)allocator.allocate(sizeof(interface_package__msg__RobotTarget), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interface_package__msg__RobotTarget));
  bool success = interface_package__msg__RobotTarget__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interface_package__msg__RobotTarget__destroy(interface_package__msg__RobotTarget * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interface_package__msg__RobotTarget__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interface_package__msg__RobotTarget__Sequence__init(interface_package__msg__RobotTarget__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__msg__RobotTarget * data = NULL;

  if (size) {
    data = (interface_package__msg__RobotTarget *)allocator.zero_allocate(size, sizeof(interface_package__msg__RobotTarget), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interface_package__msg__RobotTarget__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interface_package__msg__RobotTarget__fini(&data[i - 1]);
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
interface_package__msg__RobotTarget__Sequence__fini(interface_package__msg__RobotTarget__Sequence * array)
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
      interface_package__msg__RobotTarget__fini(&array->data[i]);
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

interface_package__msg__RobotTarget__Sequence *
interface_package__msg__RobotTarget__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__msg__RobotTarget__Sequence * array = (interface_package__msg__RobotTarget__Sequence *)allocator.allocate(sizeof(interface_package__msg__RobotTarget__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interface_package__msg__RobotTarget__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interface_package__msg__RobotTarget__Sequence__destroy(interface_package__msg__RobotTarget__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interface_package__msg__RobotTarget__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interface_package__msg__RobotTarget__Sequence__are_equal(const interface_package__msg__RobotTarget__Sequence * lhs, const interface_package__msg__RobotTarget__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interface_package__msg__RobotTarget__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interface_package__msg__RobotTarget__Sequence__copy(
  const interface_package__msg__RobotTarget__Sequence * input,
  interface_package__msg__RobotTarget__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interface_package__msg__RobotTarget);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interface_package__msg__RobotTarget * data =
      (interface_package__msg__RobotTarget *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interface_package__msg__RobotTarget__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interface_package__msg__RobotTarget__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interface_package__msg__RobotTarget__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
