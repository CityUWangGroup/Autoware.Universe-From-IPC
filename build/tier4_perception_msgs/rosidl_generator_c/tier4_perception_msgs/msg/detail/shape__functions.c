// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_perception_msgs:msg/Shape.idl
// generated code does not contain a copyright notice
#include "tier4_perception_msgs/msg/detail/shape__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `dimensions`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `footprint`
#include "geometry_msgs/msg/detail/polygon__functions.h"

bool
tier4_perception_msgs__msg__Shape__init(tier4_perception_msgs__msg__Shape * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // dimensions
  if (!geometry_msgs__msg__Vector3__init(&msg->dimensions)) {
    tier4_perception_msgs__msg__Shape__fini(msg);
    return false;
  }
  // footprint
  if (!geometry_msgs__msg__Polygon__init(&msg->footprint)) {
    tier4_perception_msgs__msg__Shape__fini(msg);
    return false;
  }
  return true;
}

void
tier4_perception_msgs__msg__Shape__fini(tier4_perception_msgs__msg__Shape * msg)
{
  if (!msg) {
    return;
  }
  // type
  // dimensions
  geometry_msgs__msg__Vector3__fini(&msg->dimensions);
  // footprint
  geometry_msgs__msg__Polygon__fini(&msg->footprint);
}

bool
tier4_perception_msgs__msg__Shape__are_equal(const tier4_perception_msgs__msg__Shape * lhs, const tier4_perception_msgs__msg__Shape * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // dimensions
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->dimensions), &(rhs->dimensions)))
  {
    return false;
  }
  // footprint
  if (!geometry_msgs__msg__Polygon__are_equal(
      &(lhs->footprint), &(rhs->footprint)))
  {
    return false;
  }
  return true;
}

bool
tier4_perception_msgs__msg__Shape__copy(
  const tier4_perception_msgs__msg__Shape * input,
  tier4_perception_msgs__msg__Shape * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  // dimensions
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->dimensions), &(output->dimensions)))
  {
    return false;
  }
  // footprint
  if (!geometry_msgs__msg__Polygon__copy(
      &(input->footprint), &(output->footprint)))
  {
    return false;
  }
  return true;
}

tier4_perception_msgs__msg__Shape *
tier4_perception_msgs__msg__Shape__create()
{
  tier4_perception_msgs__msg__Shape * msg = (tier4_perception_msgs__msg__Shape *)malloc(sizeof(tier4_perception_msgs__msg__Shape));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_perception_msgs__msg__Shape));
  bool success = tier4_perception_msgs__msg__Shape__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tier4_perception_msgs__msg__Shape__destroy(tier4_perception_msgs__msg__Shape * msg)
{
  if (msg) {
    tier4_perception_msgs__msg__Shape__fini(msg);
  }
  free(msg);
}


bool
tier4_perception_msgs__msg__Shape__Sequence__init(tier4_perception_msgs__msg__Shape__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tier4_perception_msgs__msg__Shape * data = NULL;
  if (size) {
    data = (tier4_perception_msgs__msg__Shape *)calloc(size, sizeof(tier4_perception_msgs__msg__Shape));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_perception_msgs__msg__Shape__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_perception_msgs__msg__Shape__fini(&data[i - 1]);
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
tier4_perception_msgs__msg__Shape__Sequence__fini(tier4_perception_msgs__msg__Shape__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_perception_msgs__msg__Shape__fini(&array->data[i]);
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

tier4_perception_msgs__msg__Shape__Sequence *
tier4_perception_msgs__msg__Shape__Sequence__create(size_t size)
{
  tier4_perception_msgs__msg__Shape__Sequence * array = (tier4_perception_msgs__msg__Shape__Sequence *)malloc(sizeof(tier4_perception_msgs__msg__Shape__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tier4_perception_msgs__msg__Shape__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tier4_perception_msgs__msg__Shape__Sequence__destroy(tier4_perception_msgs__msg__Shape__Sequence * array)
{
  if (array) {
    tier4_perception_msgs__msg__Shape__Sequence__fini(array);
  }
  free(array);
}

bool
tier4_perception_msgs__msg__Shape__Sequence__are_equal(const tier4_perception_msgs__msg__Shape__Sequence * lhs, const tier4_perception_msgs__msg__Shape__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_perception_msgs__msg__Shape__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_perception_msgs__msg__Shape__Sequence__copy(
  const tier4_perception_msgs__msg__Shape__Sequence * input,
  tier4_perception_msgs__msg__Shape__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_perception_msgs__msg__Shape);
    tier4_perception_msgs__msg__Shape * data =
      (tier4_perception_msgs__msg__Shape *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_perception_msgs__msg__Shape__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_perception_msgs__msg__Shape__fini(&data[i]);
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
    if (!tier4_perception_msgs__msg__Shape__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
