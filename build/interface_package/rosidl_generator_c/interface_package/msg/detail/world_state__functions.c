// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interface_package:msg/WorldState.idl
// generated code does not contain a copyright notice
#include "interface_package/msg/detail/world_state__functions.h"

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
// Member `friendly`
// Member `opponent`
#include "interface_package/msg/detail/robot_state__functions.h"
// Member `ball`
#include "interface_package/msg/detail/ball_state__functions.h"
// Member `friendly_color`
#include "interface_package/msg/detail/team_color__functions.h"

bool
interface_package__msg__WorldState__init(interface_package__msg__WorldState * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    interface_package__msg__WorldState__fini(msg);
    return false;
  }
  // capture_timestamp
  // field
  if (!interface_package__msg__FieldDimensions__init(&msg->field)) {
    interface_package__msg__WorldState__fini(msg);
    return false;
  }
  // friendly
  if (!interface_package__msg__RobotState__Sequence__init(&msg->friendly, 0)) {
    interface_package__msg__WorldState__fini(msg);
    return false;
  }
  // opponent
  if (!interface_package__msg__RobotState__Sequence__init(&msg->opponent, 0)) {
    interface_package__msg__WorldState__fini(msg);
    return false;
  }
  // ball
  if (!interface_package__msg__BallState__init(&msg->ball)) {
    interface_package__msg__WorldState__fini(msg);
    return false;
  }
  // friendly_color
  if (!interface_package__msg__TeamColor__init(&msg->friendly_color)) {
    interface_package__msg__WorldState__fini(msg);
    return false;
  }
  return true;
}

void
interface_package__msg__WorldState__fini(interface_package__msg__WorldState * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // capture_timestamp
  // field
  interface_package__msg__FieldDimensions__fini(&msg->field);
  // friendly
  interface_package__msg__RobotState__Sequence__fini(&msg->friendly);
  // opponent
  interface_package__msg__RobotState__Sequence__fini(&msg->opponent);
  // ball
  interface_package__msg__BallState__fini(&msg->ball);
  // friendly_color
  interface_package__msg__TeamColor__fini(&msg->friendly_color);
}

bool
interface_package__msg__WorldState__are_equal(const interface_package__msg__WorldState * lhs, const interface_package__msg__WorldState * rhs)
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
  // field
  if (!interface_package__msg__FieldDimensions__are_equal(
      &(lhs->field), &(rhs->field)))
  {
    return false;
  }
  // friendly
  if (!interface_package__msg__RobotState__Sequence__are_equal(
      &(lhs->friendly), &(rhs->friendly)))
  {
    return false;
  }
  // opponent
  if (!interface_package__msg__RobotState__Sequence__are_equal(
      &(lhs->opponent), &(rhs->opponent)))
  {
    return false;
  }
  // ball
  if (!interface_package__msg__BallState__are_equal(
      &(lhs->ball), &(rhs->ball)))
  {
    return false;
  }
  // friendly_color
  if (!interface_package__msg__TeamColor__are_equal(
      &(lhs->friendly_color), &(rhs->friendly_color)))
  {
    return false;
  }
  return true;
}

bool
interface_package__msg__WorldState__copy(
  const interface_package__msg__WorldState * input,
  interface_package__msg__WorldState * output)
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
  // field
  if (!interface_package__msg__FieldDimensions__copy(
      &(input->field), &(output->field)))
  {
    return false;
  }
  // friendly
  if (!interface_package__msg__RobotState__Sequence__copy(
      &(input->friendly), &(output->friendly)))
  {
    return false;
  }
  // opponent
  if (!interface_package__msg__RobotState__Sequence__copy(
      &(input->opponent), &(output->opponent)))
  {
    return false;
  }
  // ball
  if (!interface_package__msg__BallState__copy(
      &(input->ball), &(output->ball)))
  {
    return false;
  }
  // friendly_color
  if (!interface_package__msg__TeamColor__copy(
      &(input->friendly_color), &(output->friendly_color)))
  {
    return false;
  }
  return true;
}

interface_package__msg__WorldState *
interface_package__msg__WorldState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__msg__WorldState * msg = (interface_package__msg__WorldState *)allocator.allocate(sizeof(interface_package__msg__WorldState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interface_package__msg__WorldState));
  bool success = interface_package__msg__WorldState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interface_package__msg__WorldState__destroy(interface_package__msg__WorldState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interface_package__msg__WorldState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interface_package__msg__WorldState__Sequence__init(interface_package__msg__WorldState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__msg__WorldState * data = NULL;

  if (size) {
    data = (interface_package__msg__WorldState *)allocator.zero_allocate(size, sizeof(interface_package__msg__WorldState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interface_package__msg__WorldState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interface_package__msg__WorldState__fini(&data[i - 1]);
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
interface_package__msg__WorldState__Sequence__fini(interface_package__msg__WorldState__Sequence * array)
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
      interface_package__msg__WorldState__fini(&array->data[i]);
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

interface_package__msg__WorldState__Sequence *
interface_package__msg__WorldState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__msg__WorldState__Sequence * array = (interface_package__msg__WorldState__Sequence *)allocator.allocate(sizeof(interface_package__msg__WorldState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interface_package__msg__WorldState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interface_package__msg__WorldState__Sequence__destroy(interface_package__msg__WorldState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interface_package__msg__WorldState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interface_package__msg__WorldState__Sequence__are_equal(const interface_package__msg__WorldState__Sequence * lhs, const interface_package__msg__WorldState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interface_package__msg__WorldState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interface_package__msg__WorldState__Sequence__copy(
  const interface_package__msg__WorldState__Sequence * input,
  interface_package__msg__WorldState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interface_package__msg__WorldState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interface_package__msg__WorldState * data =
      (interface_package__msg__WorldState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interface_package__msg__WorldState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interface_package__msg__WorldState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interface_package__msg__WorldState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
