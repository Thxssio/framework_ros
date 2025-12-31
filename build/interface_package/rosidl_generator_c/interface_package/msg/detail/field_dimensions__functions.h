// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from interface_package:msg/FieldDimensions.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PACKAGE__MSG__DETAIL__FIELD_DIMENSIONS__FUNCTIONS_H_
#define INTERFACE_PACKAGE__MSG__DETAIL__FIELD_DIMENSIONS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "interface_package/msg/rosidl_generator_c__visibility_control.h"

#include "interface_package/msg/detail/field_dimensions__struct.h"

/// Initialize msg/FieldDimensions message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * interface_package__msg__FieldDimensions
 * )) before or use
 * interface_package__msg__FieldDimensions__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_package
bool
interface_package__msg__FieldDimensions__init(interface_package__msg__FieldDimensions * msg);

/// Finalize msg/FieldDimensions message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_package
void
interface_package__msg__FieldDimensions__fini(interface_package__msg__FieldDimensions * msg);

/// Create msg/FieldDimensions message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * interface_package__msg__FieldDimensions__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_package
interface_package__msg__FieldDimensions *
interface_package__msg__FieldDimensions__create();

/// Destroy msg/FieldDimensions message.
/**
 * It calls
 * interface_package__msg__FieldDimensions__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_package
void
interface_package__msg__FieldDimensions__destroy(interface_package__msg__FieldDimensions * msg);

/// Check for msg/FieldDimensions message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_package
bool
interface_package__msg__FieldDimensions__are_equal(const interface_package__msg__FieldDimensions * lhs, const interface_package__msg__FieldDimensions * rhs);

/// Copy a msg/FieldDimensions message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_package
bool
interface_package__msg__FieldDimensions__copy(
  const interface_package__msg__FieldDimensions * input,
  interface_package__msg__FieldDimensions * output);

/// Initialize array of msg/FieldDimensions messages.
/**
 * It allocates the memory for the number of elements and calls
 * interface_package__msg__FieldDimensions__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_package
bool
interface_package__msg__FieldDimensions__Sequence__init(interface_package__msg__FieldDimensions__Sequence * array, size_t size);

/// Finalize array of msg/FieldDimensions messages.
/**
 * It calls
 * interface_package__msg__FieldDimensions__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_package
void
interface_package__msg__FieldDimensions__Sequence__fini(interface_package__msg__FieldDimensions__Sequence * array);

/// Create array of msg/FieldDimensions messages.
/**
 * It allocates the memory for the array and calls
 * interface_package__msg__FieldDimensions__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_package
interface_package__msg__FieldDimensions__Sequence *
interface_package__msg__FieldDimensions__Sequence__create(size_t size);

/// Destroy array of msg/FieldDimensions messages.
/**
 * It calls
 * interface_package__msg__FieldDimensions__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_package
void
interface_package__msg__FieldDimensions__Sequence__destroy(interface_package__msg__FieldDimensions__Sequence * array);

/// Check for msg/FieldDimensions message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_package
bool
interface_package__msg__FieldDimensions__Sequence__are_equal(const interface_package__msg__FieldDimensions__Sequence * lhs, const interface_package__msg__FieldDimensions__Sequence * rhs);

/// Copy an array of msg/FieldDimensions messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_interface_package
bool
interface_package__msg__FieldDimensions__Sequence__copy(
  const interface_package__msg__FieldDimensions__Sequence * input,
  interface_package__msg__FieldDimensions__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_PACKAGE__MSG__DETAIL__FIELD_DIMENSIONS__FUNCTIONS_H_
