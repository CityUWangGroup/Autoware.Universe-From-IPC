// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from static_centerline_optimizer:msg/PointsWithLaneId.idl
// generated code does not contain a copyright notice
#include "static_centerline_optimizer/msg/detail/points_with_lane_id__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `points`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
static_centerline_optimizer__msg__PointsWithLaneId__init(static_centerline_optimizer__msg__PointsWithLaneId * msg)
{
  if (!msg) {
    return false;
  }
  // lane_id
  // points
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->points, 0)) {
    static_centerline_optimizer__msg__PointsWithLaneId__fini(msg);
    return false;
  }
  return true;
}

void
static_centerline_optimizer__msg__PointsWithLaneId__fini(static_centerline_optimizer__msg__PointsWithLaneId * msg)
{
  if (!msg) {
    return;
  }
  // lane_id
  // points
  geometry_msgs__msg__Point__Sequence__fini(&msg->points);
}

bool
static_centerline_optimizer__msg__PointsWithLaneId__are_equal(const static_centerline_optimizer__msg__PointsWithLaneId * lhs, const static_centerline_optimizer__msg__PointsWithLaneId * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lane_id
  if (lhs->lane_id != rhs->lane_id) {
    return false;
  }
  // points
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  return true;
}

bool
static_centerline_optimizer__msg__PointsWithLaneId__copy(
  const static_centerline_optimizer__msg__PointsWithLaneId * input,
  static_centerline_optimizer__msg__PointsWithLaneId * output)
{
  if (!input || !output) {
    return false;
  }
  // lane_id
  output->lane_id = input->lane_id;
  // points
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  return true;
}

static_centerline_optimizer__msg__PointsWithLaneId *
static_centerline_optimizer__msg__PointsWithLaneId__create()
{
  static_centerline_optimizer__msg__PointsWithLaneId * msg = (static_centerline_optimizer__msg__PointsWithLaneId *)malloc(sizeof(static_centerline_optimizer__msg__PointsWithLaneId));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(static_centerline_optimizer__msg__PointsWithLaneId));
  bool success = static_centerline_optimizer__msg__PointsWithLaneId__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
static_centerline_optimizer__msg__PointsWithLaneId__destroy(static_centerline_optimizer__msg__PointsWithLaneId * msg)
{
  if (msg) {
    static_centerline_optimizer__msg__PointsWithLaneId__fini(msg);
  }
  free(msg);
}


bool
static_centerline_optimizer__msg__PointsWithLaneId__Sequence__init(static_centerline_optimizer__msg__PointsWithLaneId__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  static_centerline_optimizer__msg__PointsWithLaneId * data = NULL;
  if (size) {
    data = (static_centerline_optimizer__msg__PointsWithLaneId *)calloc(size, sizeof(static_centerline_optimizer__msg__PointsWithLaneId));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = static_centerline_optimizer__msg__PointsWithLaneId__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        static_centerline_optimizer__msg__PointsWithLaneId__fini(&data[i - 1]);
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
static_centerline_optimizer__msg__PointsWithLaneId__Sequence__fini(static_centerline_optimizer__msg__PointsWithLaneId__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      static_centerline_optimizer__msg__PointsWithLaneId__fini(&array->data[i]);
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

static_centerline_optimizer__msg__PointsWithLaneId__Sequence *
static_centerline_optimizer__msg__PointsWithLaneId__Sequence__create(size_t size)
{
  static_centerline_optimizer__msg__PointsWithLaneId__Sequence * array = (static_centerline_optimizer__msg__PointsWithLaneId__Sequence *)malloc(sizeof(static_centerline_optimizer__msg__PointsWithLaneId__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = static_centerline_optimizer__msg__PointsWithLaneId__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
static_centerline_optimizer__msg__PointsWithLaneId__Sequence__destroy(static_centerline_optimizer__msg__PointsWithLaneId__Sequence * array)
{
  if (array) {
    static_centerline_optimizer__msg__PointsWithLaneId__Sequence__fini(array);
  }
  free(array);
}

bool
static_centerline_optimizer__msg__PointsWithLaneId__Sequence__are_equal(const static_centerline_optimizer__msg__PointsWithLaneId__Sequence * lhs, const static_centerline_optimizer__msg__PointsWithLaneId__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!static_centerline_optimizer__msg__PointsWithLaneId__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
static_centerline_optimizer__msg__PointsWithLaneId__Sequence__copy(
  const static_centerline_optimizer__msg__PointsWithLaneId__Sequence * input,
  static_centerline_optimizer__msg__PointsWithLaneId__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(static_centerline_optimizer__msg__PointsWithLaneId);
    static_centerline_optimizer__msg__PointsWithLaneId * data =
      (static_centerline_optimizer__msg__PointsWithLaneId *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!static_centerline_optimizer__msg__PointsWithLaneId__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          static_centerline_optimizer__msg__PointsWithLaneId__fini(&data[i]);
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
    if (!static_centerline_optimizer__msg__PointsWithLaneId__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
