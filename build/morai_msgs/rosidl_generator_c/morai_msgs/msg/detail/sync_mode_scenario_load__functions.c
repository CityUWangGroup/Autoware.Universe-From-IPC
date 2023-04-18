// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/SyncModeScenarioLoad.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/sync_mode_scenario_load__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `file_name`
#include "rosidl_runtime_c/string_functions.h"

bool
morai_msgs__msg__SyncModeScenarioLoad__init(morai_msgs__msg__SyncModeScenarioLoad * msg)
{
  if (!msg) {
    return false;
  }
  // frame
  // file_name
  if (!rosidl_runtime_c__String__init(&msg->file_name)) {
    morai_msgs__msg__SyncModeScenarioLoad__fini(msg);
    return false;
  }
  // load_network_connection_data
  // delete_all
  // load_ego_vehicle_data
  // load_surrounding_vehicle_data
  // load_pedestrian_data
  // load_obstacle_data
  // set_pause
  return true;
}

void
morai_msgs__msg__SyncModeScenarioLoad__fini(morai_msgs__msg__SyncModeScenarioLoad * msg)
{
  if (!msg) {
    return;
  }
  // frame
  // file_name
  rosidl_runtime_c__String__fini(&msg->file_name);
  // load_network_connection_data
  // delete_all
  // load_ego_vehicle_data
  // load_surrounding_vehicle_data
  // load_pedestrian_data
  // load_obstacle_data
  // set_pause
}

bool
morai_msgs__msg__SyncModeScenarioLoad__are_equal(const morai_msgs__msg__SyncModeScenarioLoad * lhs, const morai_msgs__msg__SyncModeScenarioLoad * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // frame
  if (lhs->frame != rhs->frame) {
    return false;
  }
  // file_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->file_name), &(rhs->file_name)))
  {
    return false;
  }
  // load_network_connection_data
  if (lhs->load_network_connection_data != rhs->load_network_connection_data) {
    return false;
  }
  // delete_all
  if (lhs->delete_all != rhs->delete_all) {
    return false;
  }
  // load_ego_vehicle_data
  if (lhs->load_ego_vehicle_data != rhs->load_ego_vehicle_data) {
    return false;
  }
  // load_surrounding_vehicle_data
  if (lhs->load_surrounding_vehicle_data != rhs->load_surrounding_vehicle_data) {
    return false;
  }
  // load_pedestrian_data
  if (lhs->load_pedestrian_data != rhs->load_pedestrian_data) {
    return false;
  }
  // load_obstacle_data
  if (lhs->load_obstacle_data != rhs->load_obstacle_data) {
    return false;
  }
  // set_pause
  if (lhs->set_pause != rhs->set_pause) {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__SyncModeScenarioLoad__copy(
  const morai_msgs__msg__SyncModeScenarioLoad * input,
  morai_msgs__msg__SyncModeScenarioLoad * output)
{
  if (!input || !output) {
    return false;
  }
  // frame
  output->frame = input->frame;
  // file_name
  if (!rosidl_runtime_c__String__copy(
      &(input->file_name), &(output->file_name)))
  {
    return false;
  }
  // load_network_connection_data
  output->load_network_connection_data = input->load_network_connection_data;
  // delete_all
  output->delete_all = input->delete_all;
  // load_ego_vehicle_data
  output->load_ego_vehicle_data = input->load_ego_vehicle_data;
  // load_surrounding_vehicle_data
  output->load_surrounding_vehicle_data = input->load_surrounding_vehicle_data;
  // load_pedestrian_data
  output->load_pedestrian_data = input->load_pedestrian_data;
  // load_obstacle_data
  output->load_obstacle_data = input->load_obstacle_data;
  // set_pause
  output->set_pause = input->set_pause;
  return true;
}

morai_msgs__msg__SyncModeScenarioLoad *
morai_msgs__msg__SyncModeScenarioLoad__create()
{
  morai_msgs__msg__SyncModeScenarioLoad * msg = (morai_msgs__msg__SyncModeScenarioLoad *)malloc(sizeof(morai_msgs__msg__SyncModeScenarioLoad));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__SyncModeScenarioLoad));
  bool success = morai_msgs__msg__SyncModeScenarioLoad__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__SyncModeScenarioLoad__destroy(morai_msgs__msg__SyncModeScenarioLoad * msg)
{
  if (msg) {
    morai_msgs__msg__SyncModeScenarioLoad__fini(msg);
  }
  free(msg);
}


bool
morai_msgs__msg__SyncModeScenarioLoad__Sequence__init(morai_msgs__msg__SyncModeScenarioLoad__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  morai_msgs__msg__SyncModeScenarioLoad * data = NULL;
  if (size) {
    data = (morai_msgs__msg__SyncModeScenarioLoad *)calloc(size, sizeof(morai_msgs__msg__SyncModeScenarioLoad));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__SyncModeScenarioLoad__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__SyncModeScenarioLoad__fini(&data[i - 1]);
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
morai_msgs__msg__SyncModeScenarioLoad__Sequence__fini(morai_msgs__msg__SyncModeScenarioLoad__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      morai_msgs__msg__SyncModeScenarioLoad__fini(&array->data[i]);
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

morai_msgs__msg__SyncModeScenarioLoad__Sequence *
morai_msgs__msg__SyncModeScenarioLoad__Sequence__create(size_t size)
{
  morai_msgs__msg__SyncModeScenarioLoad__Sequence * array = (morai_msgs__msg__SyncModeScenarioLoad__Sequence *)malloc(sizeof(morai_msgs__msg__SyncModeScenarioLoad__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__SyncModeScenarioLoad__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__SyncModeScenarioLoad__Sequence__destroy(morai_msgs__msg__SyncModeScenarioLoad__Sequence * array)
{
  if (array) {
    morai_msgs__msg__SyncModeScenarioLoad__Sequence__fini(array);
  }
  free(array);
}

bool
morai_msgs__msg__SyncModeScenarioLoad__Sequence__are_equal(const morai_msgs__msg__SyncModeScenarioLoad__Sequence * lhs, const morai_msgs__msg__SyncModeScenarioLoad__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__SyncModeScenarioLoad__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__SyncModeScenarioLoad__Sequence__copy(
  const morai_msgs__msg__SyncModeScenarioLoad__Sequence * input,
  morai_msgs__msg__SyncModeScenarioLoad__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__SyncModeScenarioLoad);
    morai_msgs__msg__SyncModeScenarioLoad * data =
      (morai_msgs__msg__SyncModeScenarioLoad *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__SyncModeScenarioLoad__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__SyncModeScenarioLoad__fini(&data[i]);
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
    if (!morai_msgs__msg__SyncModeScenarioLoad__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
