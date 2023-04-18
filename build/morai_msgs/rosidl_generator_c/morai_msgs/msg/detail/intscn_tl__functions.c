// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/IntscnTL.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/intscn_tl__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `idx`
#include "rosidl_runtime_c/string_functions.h"
// Member `state`
// Member `delta_time`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
morai_msgs__msg__IntscnTL__init(morai_msgs__msg__IntscnTL * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    morai_msgs__msg__IntscnTL__fini(msg);
    return false;
  }
  // idx
  if (!rosidl_runtime_c__String__Sequence__init(&msg->idx, 0)) {
    morai_msgs__msg__IntscnTL__fini(msg);
    return false;
  }
  // state
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->state, 0)) {
    morai_msgs__msg__IntscnTL__fini(msg);
    return false;
  }
  // delta_time
  if (!rosidl_runtime_c__float__Sequence__init(&msg->delta_time, 0)) {
    morai_msgs__msg__IntscnTL__fini(msg);
    return false;
  }
  return true;
}

void
morai_msgs__msg__IntscnTL__fini(morai_msgs__msg__IntscnTL * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // idx
  rosidl_runtime_c__String__Sequence__fini(&msg->idx);
  // state
  rosidl_runtime_c__int32__Sequence__fini(&msg->state);
  // delta_time
  rosidl_runtime_c__float__Sequence__fini(&msg->delta_time);
}

bool
morai_msgs__msg__IntscnTL__are_equal(const morai_msgs__msg__IntscnTL * lhs, const morai_msgs__msg__IntscnTL * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // idx
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->idx), &(rhs->idx)))
  {
    return false;
  }
  // state
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // delta_time
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->delta_time), &(rhs->delta_time)))
  {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__IntscnTL__copy(
  const morai_msgs__msg__IntscnTL * input,
  morai_msgs__msg__IntscnTL * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // idx
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->idx), &(output->idx)))
  {
    return false;
  }
  // state
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // delta_time
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->delta_time), &(output->delta_time)))
  {
    return false;
  }
  return true;
}

morai_msgs__msg__IntscnTL *
morai_msgs__msg__IntscnTL__create()
{
  morai_msgs__msg__IntscnTL * msg = (morai_msgs__msg__IntscnTL *)malloc(sizeof(morai_msgs__msg__IntscnTL));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__IntscnTL));
  bool success = morai_msgs__msg__IntscnTL__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__IntscnTL__destroy(morai_msgs__msg__IntscnTL * msg)
{
  if (msg) {
    morai_msgs__msg__IntscnTL__fini(msg);
  }
  free(msg);
}


bool
morai_msgs__msg__IntscnTL__Sequence__init(morai_msgs__msg__IntscnTL__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  morai_msgs__msg__IntscnTL * data = NULL;
  if (size) {
    data = (morai_msgs__msg__IntscnTL *)calloc(size, sizeof(morai_msgs__msg__IntscnTL));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__IntscnTL__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__IntscnTL__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
morai_msgs__msg__IntscnTL__Sequence__fini(morai_msgs__msg__IntscnTL__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      morai_msgs__msg__IntscnTL__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

morai_msgs__msg__IntscnTL__Sequence *
morai_msgs__msg__IntscnTL__Sequence__create(size_t size)
{
  morai_msgs__msg__IntscnTL__Sequence * array = (morai_msgs__msg__IntscnTL__Sequence *)malloc(sizeof(morai_msgs__msg__IntscnTL__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__IntscnTL__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__IntscnTL__Sequence__destroy(morai_msgs__msg__IntscnTL__Sequence * array)
{
  if (array) {
    morai_msgs__msg__IntscnTL__Sequence__fini(array);
  }
  free(array);
}

bool
morai_msgs__msg__IntscnTL__Sequence__are_equal(const morai_msgs__msg__IntscnTL__Sequence * lhs, const morai_msgs__msg__IntscnTL__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__IntscnTL__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__IntscnTL__Sequence__copy(
  const morai_msgs__msg__IntscnTL__Sequence * input,
  morai_msgs__msg__IntscnTL__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__IntscnTL);
    morai_msgs__msg__IntscnTL * data =
      (morai_msgs__msg__IntscnTL *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__IntscnTL__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__IntscnTL__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!morai_msgs__msg__IntscnTL__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
