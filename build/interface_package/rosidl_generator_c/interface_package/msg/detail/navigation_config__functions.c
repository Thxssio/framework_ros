// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interface_package:msg/NavigationConfig.idl
// generated code does not contain a copyright notice
#include "interface_package/msg/detail/navigation_config__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
interface_package__msg__NavigationConfig__init(interface_package__msg__NavigationConfig * msg)
{
  if (!msg) {
    return false;
  }
  // stop_distance
  // linear_gain
  // max_speed
  // max_angular_speed
  // angular_gain
  // planner_resolution
  // planner_clearance
  // collision_threshold
  // optimizer_weight_smooth
  // optimizer_weight_jerk
  // optimizer_weight_obstacle
  // optimizer_step_size
  // optimizer_iterations
  // optimizer_clearance
  // force_path_planning
  // max_segment_length
  return true;
}

void
interface_package__msg__NavigationConfig__fini(interface_package__msg__NavigationConfig * msg)
{
  if (!msg) {
    return;
  }
  // stop_distance
  // linear_gain
  // max_speed
  // max_angular_speed
  // angular_gain
  // planner_resolution
  // planner_clearance
  // collision_threshold
  // optimizer_weight_smooth
  // optimizer_weight_jerk
  // optimizer_weight_obstacle
  // optimizer_step_size
  // optimizer_iterations
  // optimizer_clearance
  // force_path_planning
  // max_segment_length
}

bool
interface_package__msg__NavigationConfig__are_equal(const interface_package__msg__NavigationConfig * lhs, const interface_package__msg__NavigationConfig * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stop_distance
  if (lhs->stop_distance != rhs->stop_distance) {
    return false;
  }
  // linear_gain
  if (lhs->linear_gain != rhs->linear_gain) {
    return false;
  }
  // max_speed
  if (lhs->max_speed != rhs->max_speed) {
    return false;
  }
  // max_angular_speed
  if (lhs->max_angular_speed != rhs->max_angular_speed) {
    return false;
  }
  // angular_gain
  if (lhs->angular_gain != rhs->angular_gain) {
    return false;
  }
  // planner_resolution
  if (lhs->planner_resolution != rhs->planner_resolution) {
    return false;
  }
  // planner_clearance
  if (lhs->planner_clearance != rhs->planner_clearance) {
    return false;
  }
  // collision_threshold
  if (lhs->collision_threshold != rhs->collision_threshold) {
    return false;
  }
  // optimizer_weight_smooth
  if (lhs->optimizer_weight_smooth != rhs->optimizer_weight_smooth) {
    return false;
  }
  // optimizer_weight_jerk
  if (lhs->optimizer_weight_jerk != rhs->optimizer_weight_jerk) {
    return false;
  }
  // optimizer_weight_obstacle
  if (lhs->optimizer_weight_obstacle != rhs->optimizer_weight_obstacle) {
    return false;
  }
  // optimizer_step_size
  if (lhs->optimizer_step_size != rhs->optimizer_step_size) {
    return false;
  }
  // optimizer_iterations
  if (lhs->optimizer_iterations != rhs->optimizer_iterations) {
    return false;
  }
  // optimizer_clearance
  if (lhs->optimizer_clearance != rhs->optimizer_clearance) {
    return false;
  }
  // force_path_planning
  if (lhs->force_path_planning != rhs->force_path_planning) {
    return false;
  }
  // max_segment_length
  if (lhs->max_segment_length != rhs->max_segment_length) {
    return false;
  }
  return true;
}

bool
interface_package__msg__NavigationConfig__copy(
  const interface_package__msg__NavigationConfig * input,
  interface_package__msg__NavigationConfig * output)
{
  if (!input || !output) {
    return false;
  }
  // stop_distance
  output->stop_distance = input->stop_distance;
  // linear_gain
  output->linear_gain = input->linear_gain;
  // max_speed
  output->max_speed = input->max_speed;
  // max_angular_speed
  output->max_angular_speed = input->max_angular_speed;
  // angular_gain
  output->angular_gain = input->angular_gain;
  // planner_resolution
  output->planner_resolution = input->planner_resolution;
  // planner_clearance
  output->planner_clearance = input->planner_clearance;
  // collision_threshold
  output->collision_threshold = input->collision_threshold;
  // optimizer_weight_smooth
  output->optimizer_weight_smooth = input->optimizer_weight_smooth;
  // optimizer_weight_jerk
  output->optimizer_weight_jerk = input->optimizer_weight_jerk;
  // optimizer_weight_obstacle
  output->optimizer_weight_obstacle = input->optimizer_weight_obstacle;
  // optimizer_step_size
  output->optimizer_step_size = input->optimizer_step_size;
  // optimizer_iterations
  output->optimizer_iterations = input->optimizer_iterations;
  // optimizer_clearance
  output->optimizer_clearance = input->optimizer_clearance;
  // force_path_planning
  output->force_path_planning = input->force_path_planning;
  // max_segment_length
  output->max_segment_length = input->max_segment_length;
  return true;
}

interface_package__msg__NavigationConfig *
interface_package__msg__NavigationConfig__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__msg__NavigationConfig * msg = (interface_package__msg__NavigationConfig *)allocator.allocate(sizeof(interface_package__msg__NavigationConfig), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interface_package__msg__NavigationConfig));
  bool success = interface_package__msg__NavigationConfig__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interface_package__msg__NavigationConfig__destroy(interface_package__msg__NavigationConfig * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interface_package__msg__NavigationConfig__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interface_package__msg__NavigationConfig__Sequence__init(interface_package__msg__NavigationConfig__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__msg__NavigationConfig * data = NULL;

  if (size) {
    data = (interface_package__msg__NavigationConfig *)allocator.zero_allocate(size, sizeof(interface_package__msg__NavigationConfig), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interface_package__msg__NavigationConfig__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interface_package__msg__NavigationConfig__fini(&data[i - 1]);
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
interface_package__msg__NavigationConfig__Sequence__fini(interface_package__msg__NavigationConfig__Sequence * array)
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
      interface_package__msg__NavigationConfig__fini(&array->data[i]);
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

interface_package__msg__NavigationConfig__Sequence *
interface_package__msg__NavigationConfig__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_package__msg__NavigationConfig__Sequence * array = (interface_package__msg__NavigationConfig__Sequence *)allocator.allocate(sizeof(interface_package__msg__NavigationConfig__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interface_package__msg__NavigationConfig__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interface_package__msg__NavigationConfig__Sequence__destroy(interface_package__msg__NavigationConfig__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interface_package__msg__NavigationConfig__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interface_package__msg__NavigationConfig__Sequence__are_equal(const interface_package__msg__NavigationConfig__Sequence * lhs, const interface_package__msg__NavigationConfig__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interface_package__msg__NavigationConfig__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interface_package__msg__NavigationConfig__Sequence__copy(
  const interface_package__msg__NavigationConfig__Sequence * input,
  interface_package__msg__NavigationConfig__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interface_package__msg__NavigationConfig);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interface_package__msg__NavigationConfig * data =
      (interface_package__msg__NavigationConfig *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interface_package__msg__NavigationConfig__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interface_package__msg__NavigationConfig__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interface_package__msg__NavigationConfig__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
