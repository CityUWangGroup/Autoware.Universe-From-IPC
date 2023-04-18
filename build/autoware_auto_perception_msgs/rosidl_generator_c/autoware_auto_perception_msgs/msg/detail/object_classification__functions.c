// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_perception_msgs:msg/ObjectClassification.idl
// generated code does not contain a copyright notice
#include "autoware_auto_perception_msgs/msg/detail/object_classification__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
autoware_auto_perception_msgs__msg__ObjectClassification__init(autoware_auto_perception_msgs__msg__ObjectClassification * msg)
{
  if (!msg) {
    return false;
  }
  // label
  // probability
  return true;
}

void
autoware_auto_perception_msgs__msg__ObjectClassification__fini(autoware_auto_perception_msgs__msg__ObjectClassification * msg)
{
  if (!msg) {
    return;
  }
  // label
  // probability
}

bool
autoware_auto_perception_msgs__msg__ObjectClassification__are_equal(const autoware_auto_perception_msgs__msg__ObjectClassification * lhs, const autoware_auto_perception_msgs__msg__ObjectClassification * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // label
  if (lhs->label != rhs->label) {
    return false;
  }
  // probability
  if (lhs->probability != rhs->probability) {
    return false;
  }
  return true;
}

bool
autoware_auto_perception_msgs__msg__ObjectClassification__copy(
  const autoware_auto_perception_msgs__msg__ObjectClassification * input,
  autoware_auto_perception_msgs__msg__ObjectClassification * output)
{
  if (!input || !output) {
    return false;
  }
  // label
  output->label = input->label;
  // probability
  output->probability = input->probability;
  return true;
}

autoware_auto_perception_msgs__msg__ObjectClassification *
autoware_auto_perception_msgs__msg__ObjectClassification__create()
{
  autoware_auto_perception_msgs__msg__ObjectClassification * msg = (autoware_auto_perception_msgs__msg__ObjectClassification *)malloc(sizeof(autoware_auto_perception_msgs__msg__ObjectClassification));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_perception_msgs__msg__ObjectClassification));
  bool success = autoware_auto_perception_msgs__msg__ObjectClassification__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_perception_msgs__msg__ObjectClassification__destroy(autoware_auto_perception_msgs__msg__ObjectClassification * msg)
{
  if (msg) {
    autoware_auto_perception_msgs__msg__ObjectClassification__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_perception_msgs__msg__ObjectClassification__Sequence__init(autoware_auto_perception_msgs__msg__ObjectClassification__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_perception_msgs__msg__ObjectClassification * data = NULL;
  if (size) {
    data = (autoware_auto_perception_msgs__msg__ObjectClassification *)calloc(size, sizeof(autoware_auto_perception_msgs__msg__ObjectClassification));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_perception_msgs__msg__ObjectClassification__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_perception_msgs__msg__ObjectClassification__fini(&data[i - 1]);
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
autoware_auto_perception_msgs__msg__ObjectClassification__Sequence__fini(autoware_auto_perception_msgs__msg__ObjectClassification__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_perception_msgs__msg__ObjectClassification__fini(&array->data[i]);
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

autoware_auto_perception_msgs__msg__ObjectClassification__Sequence *
autoware_auto_perception_msgs__msg__ObjectClassification__Sequence__create(size_t size)
{
  autoware_auto_perception_msgs__msg__ObjectClassification__Sequence * array = (autoware_auto_perception_msgs__msg__ObjectClassification__Sequence *)malloc(sizeof(autoware_auto_perception_msgs__msg__ObjectClassification__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_perception_msgs__msg__ObjectClassification__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_perception_msgs__msg__ObjectClassification__Sequence__destroy(autoware_auto_perception_msgs__msg__ObjectClassification__Sequence * array)
{
  if (array) {
    autoware_auto_perception_msgs__msg__ObjectClassification__Sequence__fini(array);
  }
  free(array);
}

bool
autoware_auto_perception_msgs__msg__ObjectClassification__Sequence__are_equal(const autoware_auto_perception_msgs__msg__ObjectClassification__Sequence * lhs, const autoware_auto_perception_msgs__msg__ObjectClassification__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_perception_msgs__msg__ObjectClassification__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_perception_msgs__msg__ObjectClassification__Sequence__copy(
  const autoware_auto_perception_msgs__msg__ObjectClassification__Sequence * input,
  autoware_auto_perception_msgs__msg__ObjectClassification__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_perception_msgs__msg__ObjectClassification);
    autoware_auto_perception_msgs__msg__ObjectClassification * data =
      (autoware_auto_perception_msgs__msg__ObjectClassification *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_perception_msgs__msg__ObjectClassification__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autoware_auto_perception_msgs__msg__ObjectClassification__fini(&data[i]);
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
    if (!autoware_auto_perception_msgs__msg__ObjectClassification__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
