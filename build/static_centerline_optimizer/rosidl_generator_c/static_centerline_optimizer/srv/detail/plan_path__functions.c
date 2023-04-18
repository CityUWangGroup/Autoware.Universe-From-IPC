// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from static_centerline_optimizer:srv/PlanPath.idl
// generated code does not contain a copyright notice
#include "static_centerline_optimizer/srv/detail/plan_path__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `route`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
static_centerline_optimizer__srv__PlanPath_Request__init(static_centerline_optimizer__srv__PlanPath_Request * msg)
{
  if (!msg) {
    return false;
  }
  // map_id
  // route
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->route, 0)) {
    static_centerline_optimizer__srv__PlanPath_Request__fini(msg);
    return false;
  }
  return true;
}

void
static_centerline_optimizer__srv__PlanPath_Request__fini(static_centerline_optimizer__srv__PlanPath_Request * msg)
{
  if (!msg) {
    return;
  }
  // map_id
  // route
  rosidl_runtime_c__uint32__Sequence__fini(&msg->route);
}

bool
static_centerline_optimizer__srv__PlanPath_Request__are_equal(const static_centerline_optimizer__srv__PlanPath_Request * lhs, const static_centerline_optimizer__srv__PlanPath_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // map_id
  if (lhs->map_id != rhs->map_id) {
    return false;
  }
  // route
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->route), &(rhs->route)))
  {
    return false;
  }
  return true;
}

bool
static_centerline_optimizer__srv__PlanPath_Request__copy(
  const static_centerline_optimizer__srv__PlanPath_Request * input,
  static_centerline_optimizer__srv__PlanPath_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // map_id
  output->map_id = input->map_id;
  // route
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->route), &(output->route)))
  {
    return false;
  }
  return true;
}

static_centerline_optimizer__srv__PlanPath_Request *
static_centerline_optimizer__srv__PlanPath_Request__create()
{
  static_centerline_optimizer__srv__PlanPath_Request * msg = (static_centerline_optimizer__srv__PlanPath_Request *)malloc(sizeof(static_centerline_optimizer__srv__PlanPath_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(static_centerline_optimizer__srv__PlanPath_Request));
  bool success = static_centerline_optimizer__srv__PlanPath_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
static_centerline_optimizer__srv__PlanPath_Request__destroy(static_centerline_optimizer__srv__PlanPath_Request * msg)
{
  if (msg) {
    static_centerline_optimizer__srv__PlanPath_Request__fini(msg);
  }
  free(msg);
}


bool
static_centerline_optimizer__srv__PlanPath_Request__Sequence__init(static_centerline_optimizer__srv__PlanPath_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  static_centerline_optimizer__srv__PlanPath_Request * data = NULL;
  if (size) {
    data = (static_centerline_optimizer__srv__PlanPath_Request *)calloc(size, sizeof(static_centerline_optimizer__srv__PlanPath_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = static_centerline_optimizer__srv__PlanPath_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        static_centerline_optimizer__srv__PlanPath_Request__fini(&data[i - 1]);
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
static_centerline_optimizer__srv__PlanPath_Request__Sequence__fini(static_centerline_optimizer__srv__PlanPath_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      static_centerline_optimizer__srv__PlanPath_Request__fini(&array->data[i]);
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

static_centerline_optimizer__srv__PlanPath_Request__Sequence *
static_centerline_optimizer__srv__PlanPath_Request__Sequence__create(size_t size)
{
  static_centerline_optimizer__srv__PlanPath_Request__Sequence * array = (static_centerline_optimizer__srv__PlanPath_Request__Sequence *)malloc(sizeof(static_centerline_optimizer__srv__PlanPath_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = static_centerline_optimizer__srv__PlanPath_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
static_centerline_optimizer__srv__PlanPath_Request__Sequence__destroy(static_centerline_optimizer__srv__PlanPath_Request__Sequence * array)
{
  if (array) {
    static_centerline_optimizer__srv__PlanPath_Request__Sequence__fini(array);
  }
  free(array);
}

bool
static_centerline_optimizer__srv__PlanPath_Request__Sequence__are_equal(const static_centerline_optimizer__srv__PlanPath_Request__Sequence * lhs, const static_centerline_optimizer__srv__PlanPath_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!static_centerline_optimizer__srv__PlanPath_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
static_centerline_optimizer__srv__PlanPath_Request__Sequence__copy(
  const static_centerline_optimizer__srv__PlanPath_Request__Sequence * input,
  static_centerline_optimizer__srv__PlanPath_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(static_centerline_optimizer__srv__PlanPath_Request);
    static_centerline_optimizer__srv__PlanPath_Request * data =
      (static_centerline_optimizer__srv__PlanPath_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!static_centerline_optimizer__srv__PlanPath_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          static_centerline_optimizer__srv__PlanPath_Request__fini(&data[i]);
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
    if (!static_centerline_optimizer__srv__PlanPath_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `points_with_lane_ids`
#include "static_centerline_optimizer/msg/detail/points_with_lane_id__functions.h"
// Member `message`
#include "rosidl_runtime_c/string_functions.h"
// Member `unconnected_lane_ids`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
static_centerline_optimizer__srv__PlanPath_Response__init(static_centerline_optimizer__srv__PlanPath_Response * msg)
{
  if (!msg) {
    return false;
  }
  // points_with_lane_ids
  if (!static_centerline_optimizer__msg__PointsWithLaneId__Sequence__init(&msg->points_with_lane_ids, 0)) {
    static_centerline_optimizer__srv__PlanPath_Response__fini(msg);
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    static_centerline_optimizer__srv__PlanPath_Response__fini(msg);
    return false;
  }
  // unconnected_lane_ids
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->unconnected_lane_ids, 0)) {
    static_centerline_optimizer__srv__PlanPath_Response__fini(msg);
    return false;
  }
  return true;
}

void
static_centerline_optimizer__srv__PlanPath_Response__fini(static_centerline_optimizer__srv__PlanPath_Response * msg)
{
  if (!msg) {
    return;
  }
  // points_with_lane_ids
  static_centerline_optimizer__msg__PointsWithLaneId__Sequence__fini(&msg->points_with_lane_ids);
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // unconnected_lane_ids
  rosidl_runtime_c__uint32__Sequence__fini(&msg->unconnected_lane_ids);
}

bool
static_centerline_optimizer__srv__PlanPath_Response__are_equal(const static_centerline_optimizer__srv__PlanPath_Response * lhs, const static_centerline_optimizer__srv__PlanPath_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // points_with_lane_ids
  if (!static_centerline_optimizer__msg__PointsWithLaneId__Sequence__are_equal(
      &(lhs->points_with_lane_ids), &(rhs->points_with_lane_ids)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // unconnected_lane_ids
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->unconnected_lane_ids), &(rhs->unconnected_lane_ids)))
  {
    return false;
  }
  return true;
}

bool
static_centerline_optimizer__srv__PlanPath_Response__copy(
  const static_centerline_optimizer__srv__PlanPath_Response * input,
  static_centerline_optimizer__srv__PlanPath_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // points_with_lane_ids
  if (!static_centerline_optimizer__msg__PointsWithLaneId__Sequence__copy(
      &(input->points_with_lane_ids), &(output->points_with_lane_ids)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // unconnected_lane_ids
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->unconnected_lane_ids), &(output->unconnected_lane_ids)))
  {
    return false;
  }
  return true;
}

static_centerline_optimizer__srv__PlanPath_Response *
static_centerline_optimizer__srv__PlanPath_Response__create()
{
  static_centerline_optimizer__srv__PlanPath_Response * msg = (static_centerline_optimizer__srv__PlanPath_Response *)malloc(sizeof(static_centerline_optimizer__srv__PlanPath_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(static_centerline_optimizer__srv__PlanPath_Response));
  bool success = static_centerline_optimizer__srv__PlanPath_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
static_centerline_optimizer__srv__PlanPath_Response__destroy(static_centerline_optimizer__srv__PlanPath_Response * msg)
{
  if (msg) {
    static_centerline_optimizer__srv__PlanPath_Response__fini(msg);
  }
  free(msg);
}


bool
static_centerline_optimizer__srv__PlanPath_Response__Sequence__init(static_centerline_optimizer__srv__PlanPath_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  static_centerline_optimizer__srv__PlanPath_Response * data = NULL;
  if (size) {
    data = (static_centerline_optimizer__srv__PlanPath_Response *)calloc(size, sizeof(static_centerline_optimizer__srv__PlanPath_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = static_centerline_optimizer__srv__PlanPath_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        static_centerline_optimizer__srv__PlanPath_Response__fini(&data[i - 1]);
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
static_centerline_optimizer__srv__PlanPath_Response__Sequence__fini(static_centerline_optimizer__srv__PlanPath_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      static_centerline_optimizer__srv__PlanPath_Response__fini(&array->data[i]);
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

static_centerline_optimizer__srv__PlanPath_Response__Sequence *
static_centerline_optimizer__srv__PlanPath_Response__Sequence__create(size_t size)
{
  static_centerline_optimizer__srv__PlanPath_Response__Sequence * array = (static_centerline_optimizer__srv__PlanPath_Response__Sequence *)malloc(sizeof(static_centerline_optimizer__srv__PlanPath_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = static_centerline_optimizer__srv__PlanPath_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
static_centerline_optimizer__srv__PlanPath_Response__Sequence__destroy(static_centerline_optimizer__srv__PlanPath_Response__Sequence * array)
{
  if (array) {
    static_centerline_optimizer__srv__PlanPath_Response__Sequence__fini(array);
  }
  free(array);
}

bool
static_centerline_optimizer__srv__PlanPath_Response__Sequence__are_equal(const static_centerline_optimizer__srv__PlanPath_Response__Sequence * lhs, const static_centerline_optimizer__srv__PlanPath_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!static_centerline_optimizer__srv__PlanPath_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
static_centerline_optimizer__srv__PlanPath_Response__Sequence__copy(
  const static_centerline_optimizer__srv__PlanPath_Response__Sequence * input,
  static_centerline_optimizer__srv__PlanPath_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(static_centerline_optimizer__srv__PlanPath_Response);
    static_centerline_optimizer__srv__PlanPath_Response * data =
      (static_centerline_optimizer__srv__PlanPath_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!static_centerline_optimizer__srv__PlanPath_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          static_centerline_optimizer__srv__PlanPath_Response__fini(&data[i]);
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
    if (!static_centerline_optimizer__srv__PlanPath_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
