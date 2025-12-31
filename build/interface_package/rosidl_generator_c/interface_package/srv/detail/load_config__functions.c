// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interface_package:srv/LoadConfig.idl
// generated code does not contain a copyright notice
#include "interface_package/srv/detail/load_config__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `path`
#include "rosidl_runtime_c/string_functions.h"

bool
interface_package__srv__LoadConfig_Request__init(interface_package__srv__LoadConfig_Request * msg)
{
  if (!msg) {
    return false;
  }
  // kind
  // path
  if (!rosidl_runtime_c__String__init(&msg->path)) {
    interface_package__srv__LoadConfig_Request__fini(msg);
    return false;
  }
  return true;
}

void
interface_package__srv__LoadConfig_Request__fini(interface_package__srv__LoadConfig_Request * msg)
{
  if (!msg) {
    return;
  }
  // kind
  // path
  rosidl_runtime_c__String__fini(&msg->path);
}

bool
interface_package__srv__LoadConfig_Request__are_equal(const interface_package__srv__LoadConfig_Request * lhs, const interface_package__srv__LoadConfig_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // kind
  if (lhs->kind != rhs->kind) {
    return false;
  }
  // path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->path), &(rhs->path)))
  {
    return false;
  }
  return true;
}

bool
interface_package__srv__LoadConfig_Request__copy(
  const interface_package__srv__LoadConfig_Request * input,
  interface_package__srv__LoadConfig_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // kind
  output->kind = input->kind;
  // path
  if (!rosidl_runtime_c__String__copy(
      &(input->path), &(output->path)))
  {
    return false;
  }
  return true;
}

interface_package__srv__LoadConfig_Request *
interface_package__srv__LoadConfig_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__srv__LoadConfig_Request * msg = (interface_package__srv__LoadConfig_Request *)allocator.allocate(sizeof(interface_package__srv__LoadConfig_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interface_package__srv__LoadConfig_Request));
  bool success = interface_package__srv__LoadConfig_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interface_package__srv__LoadConfig_Request__destroy(interface_package__srv__LoadConfig_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interface_package__srv__LoadConfig_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interface_package__srv__LoadConfig_Request__Sequence__init(interface_package__srv__LoadConfig_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__srv__LoadConfig_Request * data = NULL;

  if (size) {
    data = (interface_package__srv__LoadConfig_Request *)allocator.zero_allocate(size, sizeof(interface_package__srv__LoadConfig_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interface_package__srv__LoadConfig_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interface_package__srv__LoadConfig_Request__fini(&data[i - 1]);
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
interface_package__srv__LoadConfig_Request__Sequence__fini(interface_package__srv__LoadConfig_Request__Sequence * array)
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
      interface_package__srv__LoadConfig_Request__fini(&array->data[i]);
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

interface_package__srv__LoadConfig_Request__Sequence *
interface_package__srv__LoadConfig_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__srv__LoadConfig_Request__Sequence * array = (interface_package__srv__LoadConfig_Request__Sequence *)allocator.allocate(sizeof(interface_package__srv__LoadConfig_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interface_package__srv__LoadConfig_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interface_package__srv__LoadConfig_Request__Sequence__destroy(interface_package__srv__LoadConfig_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interface_package__srv__LoadConfig_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interface_package__srv__LoadConfig_Request__Sequence__are_equal(const interface_package__srv__LoadConfig_Request__Sequence * lhs, const interface_package__srv__LoadConfig_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interface_package__srv__LoadConfig_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interface_package__srv__LoadConfig_Request__Sequence__copy(
  const interface_package__srv__LoadConfig_Request__Sequence * input,
  interface_package__srv__LoadConfig_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interface_package__srv__LoadConfig_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interface_package__srv__LoadConfig_Request * data =
      (interface_package__srv__LoadConfig_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interface_package__srv__LoadConfig_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interface_package__srv__LoadConfig_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interface_package__srv__LoadConfig_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `nav`
#include "interface_package/msg/detail/navigation_config__functions.h"
// Member `kick`
#include "interface_package/msg/detail/kick_parameters__functions.h"
// Member `prep`
#include "interface_package/msg/detail/prepare_kickoff_parameters__functions.h"

bool
interface_package__srv__LoadConfig_Response__init(interface_package__srv__LoadConfig_Response * msg)
{
  if (!msg) {
    return false;
  }
  // ok
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    interface_package__srv__LoadConfig_Response__fini(msg);
    return false;
  }
  // nav
  if (!interface_package__msg__NavigationConfig__init(&msg->nav)) {
    interface_package__srv__LoadConfig_Response__fini(msg);
    return false;
  }
  // kick
  if (!interface_package__msg__KickParameters__init(&msg->kick)) {
    interface_package__srv__LoadConfig_Response__fini(msg);
    return false;
  }
  // prep
  if (!interface_package__msg__PrepareKickoffParameters__init(&msg->prep)) {
    interface_package__srv__LoadConfig_Response__fini(msg);
    return false;
  }
  return true;
}

void
interface_package__srv__LoadConfig_Response__fini(interface_package__srv__LoadConfig_Response * msg)
{
  if (!msg) {
    return;
  }
  // ok
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // nav
  interface_package__msg__NavigationConfig__fini(&msg->nav);
  // kick
  interface_package__msg__KickParameters__fini(&msg->kick);
  // prep
  interface_package__msg__PrepareKickoffParameters__fini(&msg->prep);
}

bool
interface_package__srv__LoadConfig_Response__are_equal(const interface_package__srv__LoadConfig_Response * lhs, const interface_package__srv__LoadConfig_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ok
  if (lhs->ok != rhs->ok) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // nav
  if (!interface_package__msg__NavigationConfig__are_equal(
      &(lhs->nav), &(rhs->nav)))
  {
    return false;
  }
  // kick
  if (!interface_package__msg__KickParameters__are_equal(
      &(lhs->kick), &(rhs->kick)))
  {
    return false;
  }
  // prep
  if (!interface_package__msg__PrepareKickoffParameters__are_equal(
      &(lhs->prep), &(rhs->prep)))
  {
    return false;
  }
  return true;
}

bool
interface_package__srv__LoadConfig_Response__copy(
  const interface_package__srv__LoadConfig_Response * input,
  interface_package__srv__LoadConfig_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // ok
  output->ok = input->ok;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // nav
  if (!interface_package__msg__NavigationConfig__copy(
      &(input->nav), &(output->nav)))
  {
    return false;
  }
  // kick
  if (!interface_package__msg__KickParameters__copy(
      &(input->kick), &(output->kick)))
  {
    return false;
  }
  // prep
  if (!interface_package__msg__PrepareKickoffParameters__copy(
      &(input->prep), &(output->prep)))
  {
    return false;
  }
  return true;
}

interface_package__srv__LoadConfig_Response *
interface_package__srv__LoadConfig_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__srv__LoadConfig_Response * msg = (interface_package__srv__LoadConfig_Response *)allocator.allocate(sizeof(interface_package__srv__LoadConfig_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interface_package__srv__LoadConfig_Response));
  bool success = interface_package__srv__LoadConfig_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interface_package__srv__LoadConfig_Response__destroy(interface_package__srv__LoadConfig_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interface_package__srv__LoadConfig_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interface_package__srv__LoadConfig_Response__Sequence__init(interface_package__srv__LoadConfig_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__srv__LoadConfig_Response * data = NULL;

  if (size) {
    data = (interface_package__srv__LoadConfig_Response *)allocator.zero_allocate(size, sizeof(interface_package__srv__LoadConfig_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interface_package__srv__LoadConfig_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interface_package__srv__LoadConfig_Response__fini(&data[i - 1]);
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
interface_package__srv__LoadConfig_Response__Sequence__fini(interface_package__srv__LoadConfig_Response__Sequence * array)
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
      interface_package__srv__LoadConfig_Response__fini(&array->data[i]);
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

interface_package__srv__LoadConfig_Response__Sequence *
interface_package__srv__LoadConfig_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__srv__LoadConfig_Response__Sequence * array = (interface_package__srv__LoadConfig_Response__Sequence *)allocator.allocate(sizeof(interface_package__srv__LoadConfig_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interface_package__srv__LoadConfig_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interface_package__srv__LoadConfig_Response__Sequence__destroy(interface_package__srv__LoadConfig_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interface_package__srv__LoadConfig_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interface_package__srv__LoadConfig_Response__Sequence__are_equal(const interface_package__srv__LoadConfig_Response__Sequence * lhs, const interface_package__srv__LoadConfig_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interface_package__srv__LoadConfig_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interface_package__srv__LoadConfig_Response__Sequence__copy(
  const interface_package__srv__LoadConfig_Response__Sequence * input,
  interface_package__srv__LoadConfig_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interface_package__srv__LoadConfig_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interface_package__srv__LoadConfig_Response * data =
      (interface_package__srv__LoadConfig_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interface_package__srv__LoadConfig_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interface_package__srv__LoadConfig_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interface_package__srv__LoadConfig_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
