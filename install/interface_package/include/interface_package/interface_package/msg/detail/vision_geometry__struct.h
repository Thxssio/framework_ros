// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_package:msg/VisionGeometry.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__VISION_GEOMETRY__STRUCT_H_
#define INTERFACE_PACKAGE__MSG__DETAIL__VISION_GEOMETRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'field'
#include "interface_package/msg/detail/field_dimensions__struct.h"
// Member 'camera_ids'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/VisionGeometry in the package interface_package.
typedef struct interface_package__msg__VisionGeometry
{
  builtin_interfaces__msg__Time stamp;
  interface_package__msg__FieldDimensions field;
  uint32_t expected_cameras;
  uint32_t camera_count;
  rosidl_runtime_c__uint32__Sequence camera_ids;
} interface_package__msg__VisionGeometry;

// Struct for a sequence of interface_package__msg__VisionGeometry.
typedef struct interface_package__msg__VisionGeometry__Sequence
{
  interface_package__msg__VisionGeometry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_package__msg__VisionGeometry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__VISION_GEOMETRY__STRUCT_H_
