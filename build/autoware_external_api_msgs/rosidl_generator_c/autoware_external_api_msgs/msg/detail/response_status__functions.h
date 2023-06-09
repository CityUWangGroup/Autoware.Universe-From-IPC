// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from autoware_external_api_msgs:msg/ResponseStatus.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_EXTERNAL_API_MSGS__MSG__DETAIL__RESPONSE_STATUS__FUNCTIONS_H_
#define AUTOWARE_EXTERNAL_API_MSGS__MSG__DETAIL__RESPONSE_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "autoware_external_api_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "autoware_external_api_msgs/msg/detail/response_status__struct.h"

/// Initialize msg/ResponseStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * autoware_external_api_msgs__msg__ResponseStatus
 * )) before or use
 * autoware_external_api_msgs__msg__ResponseStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_external_api_msgs
bool
autoware_external_api_msgs__msg__ResponseStatus__init(autoware_external_api_msgs__msg__ResponseStatus * msg);

/// Finalize msg/ResponseStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_external_api_msgs
void
autoware_external_api_msgs__msg__ResponseStatus__fini(autoware_external_api_msgs__msg__ResponseStatus * msg);

/// Create msg/ResponseStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * autoware_external_api_msgs__msg__ResponseStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_external_api_msgs
autoware_external_api_msgs__msg__ResponseStatus *
autoware_external_api_msgs__msg__ResponseStatus__create();

/// Destroy msg/ResponseStatus message.
/**
 * It calls
 * autoware_external_api_msgs__msg__ResponseStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_external_api_msgs
void
autoware_external_api_msgs__msg__ResponseStatus__destroy(autoware_external_api_msgs__msg__ResponseStatus * msg);

/// Check for msg/ResponseStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_external_api_msgs
bool
autoware_external_api_msgs__msg__ResponseStatus__are_equal(const autoware_external_api_msgs__msg__ResponseStatus * lhs, const autoware_external_api_msgs__msg__ResponseStatus * rhs);

/// Copy a msg/ResponseStatus message.
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
ROSIDL_GENERATOR_C_PUBLIC_autoware_external_api_msgs
bool
autoware_external_api_msgs__msg__ResponseStatus__copy(
  const autoware_external_api_msgs__msg__ResponseStatus * input,
  autoware_external_api_msgs__msg__ResponseStatus * output);

/// Initialize array of msg/ResponseStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * autoware_external_api_msgs__msg__ResponseStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_external_api_msgs
bool
autoware_external_api_msgs__msg__ResponseStatus__Sequence__init(autoware_external_api_msgs__msg__ResponseStatus__Sequence * array, size_t size);

/// Finalize array of msg/ResponseStatus messages.
/**
 * It calls
 * autoware_external_api_msgs__msg__ResponseStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_external_api_msgs
void
autoware_external_api_msgs__msg__ResponseStatus__Sequence__fini(autoware_external_api_msgs__msg__ResponseStatus__Sequence * array);

/// Create array of msg/ResponseStatus messages.
/**
 * It allocates the memory for the array and calls
 * autoware_external_api_msgs__msg__ResponseStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_external_api_msgs
autoware_external_api_msgs__msg__ResponseStatus__Sequence *
autoware_external_api_msgs__msg__ResponseStatus__Sequence__create(size_t size);

/// Destroy array of msg/ResponseStatus messages.
/**
 * It calls
 * autoware_external_api_msgs__msg__ResponseStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_external_api_msgs
void
autoware_external_api_msgs__msg__ResponseStatus__Sequence__destroy(autoware_external_api_msgs__msg__ResponseStatus__Sequence * array);

/// Check for msg/ResponseStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_external_api_msgs
bool
autoware_external_api_msgs__msg__ResponseStatus__Sequence__are_equal(const autoware_external_api_msgs__msg__ResponseStatus__Sequence * lhs, const autoware_external_api_msgs__msg__ResponseStatus__Sequence * rhs);

/// Copy an array of msg/ResponseStatus messages.
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
ROSIDL_GENERATOR_C_PUBLIC_autoware_external_api_msgs
bool
autoware_external_api_msgs__msg__ResponseStatus__Sequence__copy(
  const autoware_external_api_msgs__msg__ResponseStatus__Sequence * input,
  autoware_external_api_msgs__msg__ResponseStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_EXTERNAL_API_MSGS__MSG__DETAIL__RESPONSE_STATUS__FUNCTIONS_H_
