// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/IntersectionControl.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/intersection_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
morai_msgs__msg__IntersectionControl__init(morai_msgs__msg__IntersectionControl * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    morai_msgs__msg__IntersectionControl__fini(msg);
    return false;
  }
  // intersection_index
  // intersection_status
  // intersection_status_time
  return true;
}

void
morai_msgs__msg__IntersectionControl__fini(morai_msgs__msg__IntersectionControl * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // intersection_index
  // intersection_status
  // intersection_status_time
}

bool
morai_msgs__msg__IntersectionControl__are_equal(const morai_msgs__msg__IntersectionControl * lhs, const morai_msgs__msg__IntersectionControl * rhs)
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
  // intersection_index
  if (lhs->intersection_index != rhs->intersection_index) {
    return false;
  }
  // intersection_status
  if (lhs->intersection_status != rhs->intersection_status) {
    return false;
  }
  // intersection_status_time
  if (lhs->intersection_status_time != rhs->intersection_status_time) {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__IntersectionControl__copy(
  const morai_msgs__msg__IntersectionControl * input,
  morai_msgs__msg__IntersectionControl * output)
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
  // intersection_index
  output->intersection_index = input->intersection_index;
  // intersection_status
  output->intersection_status = input->intersection_status;
  // intersection_status_time
  output->intersection_status_time = input->intersection_status_time;
  return true;
}

morai_msgs__msg__IntersectionControl *
morai_msgs__msg__IntersectionControl__create()
{
  morai_msgs__msg__IntersectionControl * msg = (morai_msgs__msg__IntersectionControl *)malloc(sizeof(morai_msgs__msg__IntersectionControl));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__IntersectionControl));
  bool success = morai_msgs__msg__IntersectionControl__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__IntersectionControl__destroy(morai_msgs__msg__IntersectionControl * msg)
{
  if (msg) {
    morai_msgs__msg__IntersectionControl__fini(msg);
  }
  free(msg);
}


bool
morai_msgs__msg__IntersectionControl__Sequence__init(morai_msgs__msg__IntersectionControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  morai_msgs__msg__IntersectionControl * data = NULL;
  if (size) {
    data = (morai_msgs__msg__IntersectionControl *)calloc(size, sizeof(morai_msgs__msg__IntersectionControl));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__IntersectionControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__IntersectionControl__fini(&data[i - 1]);
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
morai_msgs__msg__IntersectionControl__Sequence__fini(morai_msgs__msg__IntersectionControl__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      morai_msgs__msg__IntersectionControl__fini(&array->data[i]);
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

morai_msgs__msg__IntersectionControl__Sequence *
morai_msgs__msg__IntersectionControl__Sequence__create(size_t size)
{
  morai_msgs__msg__IntersectionControl__Sequence * array = (morai_msgs__msg__IntersectionControl__Sequence *)malloc(sizeof(morai_msgs__msg__IntersectionControl__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__IntersectionControl__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__IntersectionControl__Sequence__destroy(morai_msgs__msg__IntersectionControl__Sequence * array)
{
  if (array) {
    morai_msgs__msg__IntersectionControl__Sequence__fini(array);
  }
  free(array);
}

bool
morai_msgs__msg__IntersectionControl__Sequence__are_equal(const morai_msgs__msg__IntersectionControl__Sequence * lhs, const morai_msgs__msg__IntersectionControl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__IntersectionControl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__IntersectionControl__Sequence__copy(
  const morai_msgs__msg__IntersectionControl__Sequence * input,
  morai_msgs__msg__IntersectionControl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__IntersectionControl);
    morai_msgs__msg__IntersectionControl * data =
      (morai_msgs__msg__IntersectionControl *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__IntersectionControl__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__IntersectionControl__fini(&data[i]);
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
    if (!morai_msgs__msg__IntersectionControl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
