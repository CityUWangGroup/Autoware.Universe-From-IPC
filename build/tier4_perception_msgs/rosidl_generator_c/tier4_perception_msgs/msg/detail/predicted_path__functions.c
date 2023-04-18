// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_perception_msgs:msg/PredictedPath.idl
// generated code does not contain a copyright notice
#include "tier4_perception_msgs/msg/detail/predicted_path__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `path`
#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__functions.h"

bool
tier4_perception_msgs__msg__PredictedPath__init(tier4_perception_msgs__msg__PredictedPath * msg)
{
  if (!msg) {
    return false;
  }
  // path
  if (!geometry_msgs__msg__PoseWithCovarianceStamped__Sequence__init(&msg->path, 0)) {
    tier4_perception_msgs__msg__PredictedPath__fini(msg);
    return false;
  }
  // confidence
  return true;
}

void
tier4_perception_msgs__msg__PredictedPath__fini(tier4_perception_msgs__msg__PredictedPath * msg)
{
  if (!msg) {
    return;
  }
  // path
  geometry_msgs__msg__PoseWithCovarianceStamped__Sequence__fini(&msg->path);
  // confidence
}

bool
tier4_perception_msgs__msg__PredictedPath__are_equal(const tier4_perception_msgs__msg__PredictedPath * lhs, const tier4_perception_msgs__msg__PredictedPath * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // path
  if (!geometry_msgs__msg__PoseWithCovarianceStamped__Sequence__are_equal(
      &(lhs->path), &(rhs->path)))
  {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  return true;
}

bool
tier4_perception_msgs__msg__PredictedPath__copy(
  const tier4_perception_msgs__msg__PredictedPath * input,
  tier4_perception_msgs__msg__PredictedPath * output)
{
  if (!input || !output) {
    return false;
  }
  // path
  if (!geometry_msgs__msg__PoseWithCovarianceStamped__Sequence__copy(
      &(input->path), &(output->path)))
  {
    return false;
  }
  // confidence
  output->confidence = input->confidence;
  return true;
}

tier4_perception_msgs__msg__PredictedPath *
tier4_perception_msgs__msg__PredictedPath__create()
{
  tier4_perception_msgs__msg__PredictedPath * msg = (tier4_perception_msgs__msg__PredictedPath *)malloc(sizeof(tier4_perception_msgs__msg__PredictedPath));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_perception_msgs__msg__PredictedPath));
  bool success = tier4_perception_msgs__msg__PredictedPath__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tier4_perception_msgs__msg__PredictedPath__destroy(tier4_perception_msgs__msg__PredictedPath * msg)
{
  if (msg) {
    tier4_perception_msgs__msg__PredictedPath__fini(msg);
  }
  free(msg);
}


bool
tier4_perception_msgs__msg__PredictedPath__Sequence__init(tier4_perception_msgs__msg__PredictedPath__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tier4_perception_msgs__msg__PredictedPath * data = NULL;
  if (size) {
    data = (tier4_perception_msgs__msg__PredictedPath *)calloc(size, sizeof(tier4_perception_msgs__msg__PredictedPath));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_perception_msgs__msg__PredictedPath__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_perception_msgs__msg__PredictedPath__fini(&data[i - 1]);
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
tier4_perception_msgs__msg__PredictedPath__Sequence__fini(tier4_perception_msgs__msg__PredictedPath__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_perception_msgs__msg__PredictedPath__fini(&array->data[i]);
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

tier4_perception_msgs__msg__PredictedPath__Sequence *
tier4_perception_msgs__msg__PredictedPath__Sequence__create(size_t size)
{
  tier4_perception_msgs__msg__PredictedPath__Sequence * array = (tier4_perception_msgs__msg__PredictedPath__Sequence *)malloc(sizeof(tier4_perception_msgs__msg__PredictedPath__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tier4_perception_msgs__msg__PredictedPath__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tier4_perception_msgs__msg__PredictedPath__Sequence__destroy(tier4_perception_msgs__msg__PredictedPath__Sequence * array)
{
  if (array) {
    tier4_perception_msgs__msg__PredictedPath__Sequence__fini(array);
  }
  free(array);
}

bool
tier4_perception_msgs__msg__PredictedPath__Sequence__are_equal(const tier4_perception_msgs__msg__PredictedPath__Sequence * lhs, const tier4_perception_msgs__msg__PredictedPath__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_perception_msgs__msg__PredictedPath__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_perception_msgs__msg__PredictedPath__Sequence__copy(
  const tier4_perception_msgs__msg__PredictedPath__Sequence * input,
  tier4_perception_msgs__msg__PredictedPath__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_perception_msgs__msg__PredictedPath);
    tier4_perception_msgs__msg__PredictedPath * data =
      (tier4_perception_msgs__msg__PredictedPath *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_perception_msgs__msg__PredictedPath__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_perception_msgs__msg__PredictedPath__fini(&data[i]);
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
    if (!tier4_perception_msgs__msg__PredictedPath__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
