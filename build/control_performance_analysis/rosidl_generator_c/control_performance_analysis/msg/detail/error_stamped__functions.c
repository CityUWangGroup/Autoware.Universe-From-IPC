// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from control_performance_analysis:msg/ErrorStamped.idl
// generated code does not contain a copyright notice
#include "control_performance_analysis/msg/detail/error_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `error`
#include "control_performance_analysis/msg/detail/error__functions.h"

bool
control_performance_analysis__msg__ErrorStamped__init(control_performance_analysis__msg__ErrorStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    control_performance_analysis__msg__ErrorStamped__fini(msg);
    return false;
  }
  // error
  if (!control_performance_analysis__msg__Error__init(&msg->error)) {
    control_performance_analysis__msg__ErrorStamped__fini(msg);
    return false;
  }
  return true;
}

void
control_performance_analysis__msg__ErrorStamped__fini(control_performance_analysis__msg__ErrorStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // error
  control_performance_analysis__msg__Error__fini(&msg->error);
}

bool
control_performance_analysis__msg__ErrorStamped__are_equal(const control_performance_analysis__msg__ErrorStamped * lhs, const control_performance_analysis__msg__ErrorStamped * rhs)
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
  // error
  if (!control_performance_analysis__msg__Error__are_equal(
      &(lhs->error), &(rhs->error)))
  {
    return false;
  }
  return true;
}

bool
control_performance_analysis__msg__ErrorStamped__copy(
  const control_performance_analysis__msg__ErrorStamped * input,
  control_performance_analysis__msg__ErrorStamped * output)
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
  // error
  if (!control_performance_analysis__msg__Error__copy(
      &(input->error), &(output->error)))
  {
    return false;
  }
  return true;
}

control_performance_analysis__msg__ErrorStamped *
control_performance_analysis__msg__ErrorStamped__create()
{
  control_performance_analysis__msg__ErrorStamped * msg = (control_performance_analysis__msg__ErrorStamped *)malloc(sizeof(control_performance_analysis__msg__ErrorStamped));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_performance_analysis__msg__ErrorStamped));
  bool success = control_performance_analysis__msg__ErrorStamped__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
control_performance_analysis__msg__ErrorStamped__destroy(control_performance_analysis__msg__ErrorStamped * msg)
{
  if (msg) {
    control_performance_analysis__msg__ErrorStamped__fini(msg);
  }
  free(msg);
}


bool
control_performance_analysis__msg__ErrorStamped__Sequence__init(control_performance_analysis__msg__ErrorStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  control_performance_analysis__msg__ErrorStamped * data = NULL;
  if (size) {
    data = (control_performance_analysis__msg__ErrorStamped *)calloc(size, sizeof(control_performance_analysis__msg__ErrorStamped));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_performance_analysis__msg__ErrorStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_performance_analysis__msg__ErrorStamped__fini(&data[i - 1]);
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
control_performance_analysis__msg__ErrorStamped__Sequence__fini(control_performance_analysis__msg__ErrorStamped__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_performance_analysis__msg__ErrorStamped__fini(&array->data[i]);
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

control_performance_analysis__msg__ErrorStamped__Sequence *
control_performance_analysis__msg__ErrorStamped__Sequence__create(size_t size)
{
  control_performance_analysis__msg__ErrorStamped__Sequence * array = (control_performance_analysis__msg__ErrorStamped__Sequence *)malloc(sizeof(control_performance_analysis__msg__ErrorStamped__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = control_performance_analysis__msg__ErrorStamped__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
control_performance_analysis__msg__ErrorStamped__Sequence__destroy(control_performance_analysis__msg__ErrorStamped__Sequence * array)
{
  if (array) {
    control_performance_analysis__msg__ErrorStamped__Sequence__fini(array);
  }
  free(array);
}

bool
control_performance_analysis__msg__ErrorStamped__Sequence__are_equal(const control_performance_analysis__msg__ErrorStamped__Sequence * lhs, const control_performance_analysis__msg__ErrorStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!control_performance_analysis__msg__ErrorStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
control_performance_analysis__msg__ErrorStamped__Sequence__copy(
  const control_performance_analysis__msg__ErrorStamped__Sequence * input,
  control_performance_analysis__msg__ErrorStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(control_performance_analysis__msg__ErrorStamped);
    control_performance_analysis__msg__ErrorStamped * data =
      (control_performance_analysis__msg__ErrorStamped *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!control_performance_analysis__msg__ErrorStamped__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          control_performance_analysis__msg__ErrorStamped__fini(&data[i]);
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
    if (!control_performance_analysis__msg__ErrorStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
