// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_perception_msgs:msg/LookingTrafficSignal.idl
// generated code does not contain a copyright notice
#include "autoware_auto_perception_msgs/msg/detail/looking_traffic_signal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `perception`
// Member `external`
// Member `result`
#include "autoware_auto_perception_msgs/msg/detail/traffic_signal_with_judge__functions.h"

bool
autoware_auto_perception_msgs__msg__LookingTrafficSignal__init(autoware_auto_perception_msgs__msg__LookingTrafficSignal * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autoware_auto_perception_msgs__msg__LookingTrafficSignal__fini(msg);
    return false;
  }
  // is_module_running
  // perception
  if (!autoware_auto_perception_msgs__msg__TrafficSignalWithJudge__init(&msg->perception)) {
    autoware_auto_perception_msgs__msg__LookingTrafficSignal__fini(msg);
    return false;
  }
  // external
  if (!autoware_auto_perception_msgs__msg__TrafficSignalWithJudge__init(&msg->external)) {
    autoware_auto_perception_msgs__msg__LookingTrafficSignal__fini(msg);
    return false;
  }
  // result
  if (!autoware_auto_perception_msgs__msg__TrafficSignalWithJudge__init(&msg->result)) {
    autoware_auto_perception_msgs__msg__LookingTrafficSignal__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_perception_msgs__msg__LookingTrafficSignal__fini(autoware_auto_perception_msgs__msg__LookingTrafficSignal * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // is_module_running
  // perception
  autoware_auto_perception_msgs__msg__TrafficSignalWithJudge__fini(&msg->perception);
  // external
  autoware_auto_perception_msgs__msg__TrafficSignalWithJudge__fini(&msg->external);
  // result
  autoware_auto_perception_msgs__msg__TrafficSignalWithJudge__fini(&msg->result);
}

bool
autoware_auto_perception_msgs__msg__LookingTrafficSignal__are_equal(const autoware_auto_perception_msgs__msg__LookingTrafficSignal * lhs, const autoware_auto_perception_msgs__msg__LookingTrafficSignal * rhs)
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
  // is_module_running
  if (lhs->is_module_running != rhs->is_module_running) {
    return false;
  }
  // perception
  if (!autoware_auto_perception_msgs__msg__TrafficSignalWithJudge__are_equal(
      &(lhs->perception), &(rhs->perception)))
  {
    return false;
  }
  // external
  if (!autoware_auto_perception_msgs__msg__TrafficSignalWithJudge__are_equal(
      &(lhs->external), &(rhs->external)))
  {
    return false;
  }
  // result
  if (!autoware_auto_perception_msgs__msg__TrafficSignalWithJudge__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
autoware_auto_perception_msgs__msg__LookingTrafficSignal__copy(
  const autoware_auto_perception_msgs__msg__LookingTrafficSignal * input,
  autoware_auto_perception_msgs__msg__LookingTrafficSignal * output)
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
  // is_module_running
  output->is_module_running = input->is_module_running;
  // perception
  if (!autoware_auto_perception_msgs__msg__TrafficSignalWithJudge__copy(
      &(input->perception), &(output->perception)))
  {
    return false;
  }
  // external
  if (!autoware_auto_perception_msgs__msg__TrafficSignalWithJudge__copy(
      &(input->external), &(output->external)))
  {
    return false;
  }
  // result
  if (!autoware_auto_perception_msgs__msg__TrafficSignalWithJudge__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

autoware_auto_perception_msgs__msg__LookingTrafficSignal *
autoware_auto_perception_msgs__msg__LookingTrafficSignal__create()
{
  autoware_auto_perception_msgs__msg__LookingTrafficSignal * msg = (autoware_auto_perception_msgs__msg__LookingTrafficSignal *)malloc(sizeof(autoware_auto_perception_msgs__msg__LookingTrafficSignal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_perception_msgs__msg__LookingTrafficSignal));
  bool success = autoware_auto_perception_msgs__msg__LookingTrafficSignal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_perception_msgs__msg__LookingTrafficSignal__destroy(autoware_auto_perception_msgs__msg__LookingTrafficSignal * msg)
{
  if (msg) {
    autoware_auto_perception_msgs__msg__LookingTrafficSignal__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence__init(autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_perception_msgs__msg__LookingTrafficSignal * data = NULL;
  if (size) {
    data = (autoware_auto_perception_msgs__msg__LookingTrafficSignal *)calloc(size, sizeof(autoware_auto_perception_msgs__msg__LookingTrafficSignal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_perception_msgs__msg__LookingTrafficSignal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_perception_msgs__msg__LookingTrafficSignal__fini(&data[i - 1]);
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
autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence__fini(autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_perception_msgs__msg__LookingTrafficSignal__fini(&array->data[i]);
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

autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence *
autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence__create(size_t size)
{
  autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence * array = (autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence *)malloc(sizeof(autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence__destroy(autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence * array)
{
  if (array) {
    autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence__fini(array);
  }
  free(array);
}

bool
autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence__are_equal(const autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence * lhs, const autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_perception_msgs__msg__LookingTrafficSignal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence__copy(
  const autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence * input,
  autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_perception_msgs__msg__LookingTrafficSignal);
    autoware_auto_perception_msgs__msg__LookingTrafficSignal * data =
      (autoware_auto_perception_msgs__msg__LookingTrafficSignal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_perception_msgs__msg__LookingTrafficSignal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autoware_auto_perception_msgs__msg__LookingTrafficSignal__fini(&data[i]);
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
    if (!autoware_auto_perception_msgs__msg__LookingTrafficSignal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
