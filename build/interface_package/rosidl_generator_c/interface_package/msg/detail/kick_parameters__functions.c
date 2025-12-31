// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interface_package:msg/KickParameters.idl
// generated code does not contain a copyright notice
#include "interface_package/msg/detail/kick_parameters__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
interface_package__msg__KickParameters__init(interface_package__msg__KickParameters * msg)
{
  if (!msg) {
    return false;
  }
  // kick_speed
  // kick_angle_deg
  // kick_distance
  // facing_tolerance
  // kick_push_speed
  // dribbler_rpm
  return true;
}

void
interface_package__msg__KickParameters__fini(interface_package__msg__KickParameters * msg)
{
  if (!msg) {
    return;
  }
  // kick_speed
  // kick_angle_deg
  // kick_distance
  // facing_tolerance
  // kick_push_speed
  // dribbler_rpm
}

bool
interface_package__msg__KickParameters__are_equal(const interface_package__msg__KickParameters * lhs, const interface_package__msg__KickParameters * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // kick_speed
  if (lhs->kick_speed != rhs->kick_speed) {
    return false;
  }
  // kick_angle_deg
  if (lhs->kick_angle_deg != rhs->kick_angle_deg) {
    return false;
  }
  // kick_distance
  if (lhs->kick_distance != rhs->kick_distance) {
    return false;
  }
  // facing_tolerance
  if (lhs->facing_tolerance != rhs->facing_tolerance) {
    return false;
  }
  // kick_push_speed
  if (lhs->kick_push_speed != rhs->kick_push_speed) {
    return false;
  }
  // dribbler_rpm
  if (lhs->dribbler_rpm != rhs->dribbler_rpm) {
    return false;
  }
  return true;
}

bool
interface_package__msg__KickParameters__copy(
  const interface_package__msg__KickParameters * input,
  interface_package__msg__KickParameters * output)
{
  if (!input || !output) {
    return false;
  }
  // kick_speed
  output->kick_speed = input->kick_speed;
  // kick_angle_deg
  output->kick_angle_deg = input->kick_angle_deg;
  // kick_distance
  output->kick_distance = input->kick_distance;
  // facing_tolerance
  output->facing_tolerance = input->facing_tolerance;
  // kick_push_speed
  output->kick_push_speed = input->kick_push_speed;
  // dribbler_rpm
  output->dribbler_rpm = input->dribbler_rpm;
  return true;
}

interface_package__msg__KickParameters *
interface_package__msg__KickParameters__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__msg__KickParameters * msg = (interface_package__msg__KickParameters *)allocator.allocate(sizeof(interface_package__msg__KickParameters), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interface_package__msg__KickParameters));
  bool success = interface_package__msg__KickParameters__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interface_package__msg__KickParameters__destroy(interface_package__msg__KickParameters * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interface_package__msg__KickParameters__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interface_package__msg__KickParameters__Sequence__init(interface_package__msg__KickParameters__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__msg__KickParameters * data = NULL;

  if (size) {
    data = (interface_package__msg__KickParameters *)allocator.zero_allocate(size, sizeof(interface_package__msg__KickParameters), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interface_package__msg__KickParameters__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interface_package__msg__KickParameters__fini(&data[i - 1]);
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
interface_package__msg__KickParameters__Sequence__fini(interface_package__msg__KickParameters__Sequence * array)
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
      interface_package__msg__KickParameters__fini(&array->data[i]);
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

interface_package__msg__KickParameters__Sequence *
interface_package__msg__KickParameters__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__msg__KickParameters__Sequence * array = (interface_package__msg__KickParameters__Sequence *)allocator.allocate(sizeof(interface_package__msg__KickParameters__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interface_package__msg__KickParameters__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interface_package__msg__KickParameters__Sequence__destroy(interface_package__msg__KickParameters__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interface_package__msg__KickParameters__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interface_package__msg__KickParameters__Sequence__are_equal(const interface_package__msg__KickParameters__Sequence * lhs, const interface_package__msg__KickParameters__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interface_package__msg__KickParameters__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interface_package__msg__KickParameters__Sequence__copy(
  const interface_package__msg__KickParameters__Sequence * input,
  interface_package__msg__KickParameters__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interface_package__msg__KickParameters);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interface_package__msg__KickParameters * data =
      (interface_package__msg__KickParameters *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interface_package__msg__KickParameters__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interface_package__msg__KickParameters__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interface_package__msg__KickParameters__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
