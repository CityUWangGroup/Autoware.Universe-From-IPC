// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_perception_msgs:msg/DetectedObject.idl
// generated code does not contain a copyright notice
#include "autoware_auto_perception_msgs/msg/detail/detected_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `classification`
#include "autoware_auto_perception_msgs/msg/detail/object_classification__functions.h"
// Member `kinematics`
#include "autoware_auto_perception_msgs/msg/detail/detected_object_kinematics__functions.h"
// Member `shape`
#include "autoware_auto_perception_msgs/msg/detail/shape__functions.h"

bool
autoware_auto_perception_msgs__msg__DetectedObject__init(autoware_auto_perception_msgs__msg__DetectedObject * msg)
{
  if (!msg) {
    return false;
  }
  // existence_probability
  // classification
  if (!autoware_auto_perception_msgs__msg__ObjectClassification__Sequence__init(&msg->classification, 0)) {
    autoware_auto_perception_msgs__msg__DetectedObject__fini(msg);
    return false;
  }
  // kinematics
  if (!autoware_auto_perception_msgs__msg__DetectedObjectKinematics__init(&msg->kinematics)) {
    autoware_auto_perception_msgs__msg__DetectedObject__fini(msg);
    return false;
  }
  // shape
  if (!autoware_auto_perception_msgs__msg__Shape__init(&msg->shape)) {
    autoware_auto_perception_msgs__msg__DetectedObject__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_perception_msgs__msg__DetectedObject__fini(autoware_auto_perception_msgs__msg__DetectedObject * msg)
{
  if (!msg) {
    return;
  }
  // existence_probability
  // classification
  autoware_auto_perception_msgs__msg__ObjectClassification__Sequence__fini(&msg->classification);
  // kinematics
  autoware_auto_perception_msgs__msg__DetectedObjectKinematics__fini(&msg->kinematics);
  // shape
  autoware_auto_perception_msgs__msg__Shape__fini(&msg->shape);
}

bool
autoware_auto_perception_msgs__msg__DetectedObject__are_equal(const autoware_auto_perception_msgs__msg__DetectedObject * lhs, const autoware_auto_perception_msgs__msg__DetectedObject * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // existence_probability
  if (lhs->existence_probability != rhs->existence_probability) {
    return false;
  }
  // classification
  if (!autoware_auto_perception_msgs__msg__ObjectClassification__Sequence__are_equal(
      &(lhs->classification), &(rhs->classification)))
  {
    return false;
  }
  // kinematics
  if (!autoware_auto_perception_msgs__msg__DetectedObjectKinematics__are_equal(
      &(lhs->kinematics), &(rhs->kinematics)))
  {
    return false;
  }
  // shape
  if (!autoware_auto_perception_msgs__msg__Shape__are_equal(
      &(lhs->shape), &(rhs->shape)))
  {
    return false;
  }
  return true;
}

bool
autoware_auto_perception_msgs__msg__DetectedObject__copy(
  const autoware_auto_perception_msgs__msg__DetectedObject * input,
  autoware_auto_perception_msgs__msg__DetectedObject * output)
{
  if (!input || !output) {
    return false;
  }
  // existence_probability
  output->existence_probability = input->existence_probability;
  // classification
  if (!autoware_auto_perception_msgs__msg__ObjectClassification__Sequence__copy(
      &(input->classification), &(output->classification)))
  {
    return false;
  }
  // kinematics
  if (!autoware_auto_perception_msgs__msg__DetectedObjectKinematics__copy(
      &(input->kinematics), &(output->kinematics)))
  {
    return false;
  }
  // shape
  if (!autoware_auto_perception_msgs__msg__Shape__copy(
      &(input->shape), &(output->shape)))
  {
    return false;
  }
  return true;
}

autoware_auto_perception_msgs__msg__DetectedObject *
autoware_auto_perception_msgs__msg__DetectedObject__create()
{
  autoware_auto_perception_msgs__msg__DetectedObject * msg = (autoware_auto_perception_msgs__msg__DetectedObject *)malloc(sizeof(autoware_auto_perception_msgs__msg__DetectedObject));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_perception_msgs__msg__DetectedObject));
  bool success = autoware_auto_perception_msgs__msg__DetectedObject__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_perception_msgs__msg__DetectedObject__destroy(autoware_auto_perception_msgs__msg__DetectedObject * msg)
{
  if (msg) {
    autoware_auto_perception_msgs__msg__DetectedObject__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_perception_msgs__msg__DetectedObject__Sequence__init(autoware_auto_perception_msgs__msg__DetectedObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_perception_msgs__msg__DetectedObject * data = NULL;
  if (size) {
    data = (autoware_auto_perception_msgs__msg__DetectedObject *)calloc(size, sizeof(autoware_auto_perception_msgs__msg__DetectedObject));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_perception_msgs__msg__DetectedObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_perception_msgs__msg__DetectedObject__fini(&data[i - 1]);
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
autoware_auto_perception_msgs__msg__DetectedObject__Sequence__fini(autoware_auto_perception_msgs__msg__DetectedObject__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_perception_msgs__msg__DetectedObject__fini(&array->data[i]);
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

autoware_auto_perception_msgs__msg__DetectedObject__Sequence *
autoware_auto_perception_msgs__msg__DetectedObject__Sequence__create(size_t size)
{
  autoware_auto_perception_msgs__msg__DetectedObject__Sequence * array = (autoware_auto_perception_msgs__msg__DetectedObject__Sequence *)malloc(sizeof(autoware_auto_perception_msgs__msg__DetectedObject__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_perception_msgs__msg__DetectedObject__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_perception_msgs__msg__DetectedObject__Sequence__destroy(autoware_auto_perception_msgs__msg__DetectedObject__Sequence * array)
{
  if (array) {
    autoware_auto_perception_msgs__msg__DetectedObject__Sequence__fini(array);
  }
  free(array);
}

bool
autoware_auto_perception_msgs__msg__DetectedObject__Sequence__are_equal(const autoware_auto_perception_msgs__msg__DetectedObject__Sequence * lhs, const autoware_auto_perception_msgs__msg__DetectedObject__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_perception_msgs__msg__DetectedObject__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_perception_msgs__msg__DetectedObject__Sequence__copy(
  const autoware_auto_perception_msgs__msg__DetectedObject__Sequence * input,
  autoware_auto_perception_msgs__msg__DetectedObject__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_perception_msgs__msg__DetectedObject);
    autoware_auto_perception_msgs__msg__DetectedObject * data =
      (autoware_auto_perception_msgs__msg__DetectedObject *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_perception_msgs__msg__DetectedObject__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autoware_auto_perception_msgs__msg__DetectedObject__fini(&data[i]);
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
    if (!autoware_auto_perception_msgs__msg__DetectedObject__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
