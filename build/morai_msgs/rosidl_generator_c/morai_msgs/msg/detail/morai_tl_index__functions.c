// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/MoraiTLIndex.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/morai_tl_index__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `idx`
#include "rosidl_runtime_c/string_functions.h"

bool
morai_msgs__msg__MoraiTLIndex__init(morai_msgs__msg__MoraiTLIndex * msg)
{
  if (!msg) {
    return false;
  }
  // idx
  if (!rosidl_runtime_c__String__init(&msg->idx)) {
    morai_msgs__msg__MoraiTLIndex__fini(msg);
    return false;
  }
  return true;
}

void
morai_msgs__msg__MoraiTLIndex__fini(morai_msgs__msg__MoraiTLIndex * msg)
{
  if (!msg) {
    return;
  }
  // idx
  rosidl_runtime_c__String__fini(&msg->idx);
}

bool
morai_msgs__msg__MoraiTLIndex__are_equal(const morai_msgs__msg__MoraiTLIndex * lhs, const morai_msgs__msg__MoraiTLIndex * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // idx
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->idx), &(rhs->idx)))
  {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__MoraiTLIndex__copy(
  const morai_msgs__msg__MoraiTLIndex * input,
  morai_msgs__msg__MoraiTLIndex * output)
{
  if (!input || !output) {
    return false;
  }
  // idx
  if (!rosidl_runtime_c__String__copy(
      &(input->idx), &(output->idx)))
  {
    return false;
  }
  return true;
}

morai_msgs__msg__MoraiTLIndex *
morai_msgs__msg__MoraiTLIndex__create()
{
  morai_msgs__msg__MoraiTLIndex * msg = (morai_msgs__msg__MoraiTLIndex *)malloc(sizeof(morai_msgs__msg__MoraiTLIndex));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__MoraiTLIndex));
  bool success = morai_msgs__msg__MoraiTLIndex__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__MoraiTLIndex__destroy(morai_msgs__msg__MoraiTLIndex * msg)
{
  if (msg) {
    morai_msgs__msg__MoraiTLIndex__fini(msg);
  }
  free(msg);
}


bool
morai_msgs__msg__MoraiTLIndex__Sequence__init(morai_msgs__msg__MoraiTLIndex__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  morai_msgs__msg__MoraiTLIndex * data = NULL;
  if (size) {
    data = (morai_msgs__msg__MoraiTLIndex *)calloc(size, sizeof(morai_msgs__msg__MoraiTLIndex));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__MoraiTLIndex__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__MoraiTLIndex__fini(&data[i - 1]);
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
morai_msgs__msg__MoraiTLIndex__Sequence__fini(morai_msgs__msg__MoraiTLIndex__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      morai_msgs__msg__MoraiTLIndex__fini(&array->data[i]);
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

morai_msgs__msg__MoraiTLIndex__Sequence *
morai_msgs__msg__MoraiTLIndex__Sequence__create(size_t size)
{
  morai_msgs__msg__MoraiTLIndex__Sequence * array = (morai_msgs__msg__MoraiTLIndex__Sequence *)malloc(sizeof(morai_msgs__msg__MoraiTLIndex__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__MoraiTLIndex__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__MoraiTLIndex__Sequence__destroy(morai_msgs__msg__MoraiTLIndex__Sequence * array)
{
  if (array) {
    morai_msgs__msg__MoraiTLIndex__Sequence__fini(array);
  }
  free(array);
}

bool
morai_msgs__msg__MoraiTLIndex__Sequence__are_equal(const morai_msgs__msg__MoraiTLIndex__Sequence * lhs, const morai_msgs__msg__MoraiTLIndex__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__MoraiTLIndex__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__MoraiTLIndex__Sequence__copy(
  const morai_msgs__msg__MoraiTLIndex__Sequence * input,
  morai_msgs__msg__MoraiTLIndex__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__MoraiTLIndex);
    morai_msgs__msg__MoraiTLIndex * data =
      (morai_msgs__msg__MoraiTLIndex *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__MoraiTLIndex__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__MoraiTLIndex__fini(&data[i]);
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
    if (!morai_msgs__msg__MoraiTLIndex__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
