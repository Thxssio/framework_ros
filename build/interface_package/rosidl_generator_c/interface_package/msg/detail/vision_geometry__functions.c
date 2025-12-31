// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interface_package:msg/VisionGeometry.idl
// generated code does not contain a copyright notice
#include "interface_package/msg/detail/vision_geometry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `field`
#include "interface_package/msg/detail/field_dimensions__functions.h"
// Member `camera_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
interface_package__msg__VisionGeometry__init(interface_package__msg__VisionGeometry * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    interface_package__msg__VisionGeometry__fini(msg);
    return false;
  }
  // field
  if (!interface_package__msg__FieldDimensions__init(&msg->field)) {
    interface_package__msg__VisionGeometry__fini(msg);
    return false;
  }
  // expected_cameras
  // camera_count
  // camera_ids
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->camera_ids, 0)) {
    interface_package__msg__VisionGeometry__fini(msg);
    return false;
  }
  return true;
}

void
interface_package__msg__VisionGeometry__fini(interface_package__msg__VisionGeometry * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // field
  interface_package__msg__FieldDimensions__fini(&msg->field);
  // expected_cameras
  // camera_count
  // camera_ids
  rosidl_runtime_c__uint32__Sequence__fini(&msg->camera_ids);
}

bool
interface_package__msg__VisionGeometry__are_equal(const interface_package__msg__VisionGeometry * lhs, const interface_package__msg__VisionGeometry * rhs)
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
  // field
  if (!interface_package__msg__FieldDimensions__are_equal(
      &(lhs->field), &(rhs->field)))
  {
    return false;
  }
  // expected_cameras
  if (lhs->expected_cameras != rhs->expected_cameras) {
    return false;
  }
  // camera_count
  if (lhs->camera_count != rhs->camera_count) {
    return false;
  }
  // camera_ids
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->camera_ids), &(rhs->camera_ids)))
  {
    return false;
  }
  return true;
}

bool
interface_package__msg__VisionGeometry__copy(
  const interface_package__msg__VisionGeometry * input,
  interface_package__msg__VisionGeometry * output)
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
  // field
  if (!interface_package__msg__FieldDimensions__copy(
      &(input->field), &(output->field)))
  {
    return false;
  }
  // expected_cameras
  output->expected_cameras = input->expected_cameras;
  // camera_count
  output->camera_count = input->camera_count;
  // camera_ids
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->camera_ids), &(output->camera_ids)))
  {
    return false;
  }
  return true;
}

interface_package__msg__VisionGeometry *
interface_package__msg__VisionGeometry__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__msg__VisionGeometry * msg = (interface_package__msg__VisionGeometry *)allocator.allocate(sizeof(interface_package__msg__VisionGeometry), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interface_package__msg__VisionGeometry));
  bool success = interface_package__msg__VisionGeometry__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interface_package__msg__VisionGeometry__destroy(interface_package__msg__VisionGeometry * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interface_package__msg__VisionGeometry__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interface_package__msg__VisionGeometry__Sequence__init(interface_package__msg__VisionGeometry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__msg__VisionGeometry * data = NULL;

  if (size) {
    data = (interface_package__msg__VisionGeometry *)allocator.zero_allocate(size, sizeof(interface_package__msg__VisionGeometry), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interface_package__msg__VisionGeometry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interface_package__msg__VisionGeometry__fini(&data[i - 1]);
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
interface_package__msg__VisionGeometry__Sequence__fini(interface_package__msg__VisionGeometry__Sequence * array)
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
      interface_package__msg__VisionGeometry__fini(&array->data[i]);
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

interface_package__msg__VisionGeometry__Sequence *
interface_package__msg__VisionGeometry__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__msg__VisionGeometry__Sequence * array = (interface_package__msg__VisionGeometry__Sequence *)allocator.allocate(sizeof(interface_package__msg__VisionGeometry__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interface_package__msg__VisionGeometry__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interface_package__msg__VisionGeometry__Sequence__destroy(interface_package__msg__VisionGeometry__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interface_package__msg__VisionGeometry__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interface_package__msg__VisionGeometry__Sequence__are_equal(const interface_package__msg__VisionGeometry__Sequence * lhs, const interface_package__msg__VisionGeometry__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interface_package__msg__VisionGeometry__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interface_package__msg__VisionGeometry__Sequence__copy(
  const interface_package__msg__VisionGeometry__Sequence * input,
  interface_package__msg__VisionGeometry__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interface_package__msg__VisionGeometry);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interface_package__msg__VisionGeometry * data =
      (interface_package__msg__VisionGeometry *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interface_package__msg__VisionGeometry__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interface_package__msg__VisionGeometry__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interface_package__msg__VisionGeometry__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
