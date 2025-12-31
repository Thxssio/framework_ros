// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interface_package:msg/PathPreview.idl
// generated code does not contain a copyright notice
#include "interface_package/msg/detail/path_preview__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `path`
// Member `direct`
#include "interface_package/msg/detail/pose2_d__functions.h"

bool
interface_package__msg__PathPreview__init(interface_package__msg__PathPreview * msg)
{
  if (!msg) {
    return false;
  }
  // robot_id
  // path
  if (!interface_package__msg__Pose2D__Sequence__init(&msg->path, 0)) {
    interface_package__msg__PathPreview__fini(msg);
    return false;
  }
  // direct
  if (!interface_package__msg__Pose2D__Sequence__init(&msg->direct, 0)) {
    interface_package__msg__PathPreview__fini(msg);
    return false;
  }
  return true;
}

void
interface_package__msg__PathPreview__fini(interface_package__msg__PathPreview * msg)
{
  if (!msg) {
    return;
  }
  // robot_id
  // path
  interface_package__msg__Pose2D__Sequence__fini(&msg->path);
  // direct
  interface_package__msg__Pose2D__Sequence__fini(&msg->direct);
}

bool
interface_package__msg__PathPreview__are_equal(const interface_package__msg__PathPreview * lhs, const interface_package__msg__PathPreview * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_id
  if (lhs->robot_id != rhs->robot_id) {
    return false;
  }
  // path
  if (!interface_package__msg__Pose2D__Sequence__are_equal(
      &(lhs->path), &(rhs->path)))
  {
    return false;
  }
  // direct
  if (!interface_package__msg__Pose2D__Sequence__are_equal(
      &(lhs->direct), &(rhs->direct)))
  {
    return false;
  }
  return true;
}

bool
interface_package__msg__PathPreview__copy(
  const interface_package__msg__PathPreview * input,
  interface_package__msg__PathPreview * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_id
  output->robot_id = input->robot_id;
  // path
  if (!interface_package__msg__Pose2D__Sequence__copy(
      &(input->path), &(output->path)))
  {
    return false;
  }
  // direct
  if (!interface_package__msg__Pose2D__Sequence__copy(
      &(input->direct), &(output->direct)))
  {
    return false;
  }
  return true;
}

interface_package__msg__PathPreview *
interface_package__msg__PathPreview__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__msg__PathPreview * msg = (interface_package__msg__PathPreview *)allocator.allocate(sizeof(interface_package__msg__PathPreview), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interface_package__msg__PathPreview));
  bool success = interface_package__msg__PathPreview__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interface_package__msg__PathPreview__destroy(interface_package__msg__PathPreview * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interface_package__msg__PathPreview__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interface_package__msg__PathPreview__Sequence__init(interface_package__msg__PathPreview__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__msg__PathPreview * data = NULL;

  if (size) {
    data = (interface_package__msg__PathPreview *)allocator.zero_allocate(size, sizeof(interface_package__msg__PathPreview), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interface_package__msg__PathPreview__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interface_package__msg__PathPreview__fini(&data[i - 1]);
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
interface_package__msg__PathPreview__Sequence__fini(interface_package__msg__PathPreview__Sequence * array)
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
      interface_package__msg__PathPreview__fini(&array->data[i]);
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

interface_package__msg__PathPreview__Sequence *
interface_package__msg__PathPreview__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__msg__PathPreview__Sequence * array = (interface_package__msg__PathPreview__Sequence *)allocator.allocate(sizeof(interface_package__msg__PathPreview__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interface_package__msg__PathPreview__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interface_package__msg__PathPreview__Sequence__destroy(interface_package__msg__PathPreview__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interface_package__msg__PathPreview__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interface_package__msg__PathPreview__Sequence__are_equal(const interface_package__msg__PathPreview__Sequence * lhs, const interface_package__msg__PathPreview__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interface_package__msg__PathPreview__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interface_package__msg__PathPreview__Sequence__copy(
  const interface_package__msg__PathPreview__Sequence * input,
  interface_package__msg__PathPreview__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interface_package__msg__PathPreview);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interface_package__msg__PathPreview * data =
      (interface_package__msg__PathPreview *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interface_package__msg__PathPreview__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interface_package__msg__PathPreview__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interface_package__msg__PathPreview__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
