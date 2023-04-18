// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/ReplayInfo.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/replay_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__functions.h"
// Member `linear_acceleration`
// Member `angular_velocity`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `npc_list`
// Member `pedestrian_list`
// Member `obstacle_list`
#include "morai_msgs/msg/detail/object_status__functions.h"

bool
morai_msgs__msg__ReplayInfo__init(morai_msgs__msg__ReplayInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    morai_msgs__msg__ReplayInfo__fini(msg);
    return false;
  }
  // ego_acc
  // ego_brake
  // ego_steer
  // orientation
  if (!geometry_msgs__msg__Quaternion__init(&msg->orientation)) {
    morai_msgs__msg__ReplayInfo__fini(msg);
    return false;
  }
  // linear_acceleration
  if (!geometry_msgs__msg__Vector3__init(&msg->linear_acceleration)) {
    morai_msgs__msg__ReplayInfo__fini(msg);
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->angular_velocity)) {
    morai_msgs__msg__ReplayInfo__fini(msg);
    return false;
  }
  // num_of_npcs
  // num_of_pedestrian
  // num_of_obstacle
  // npc_list
  if (!morai_msgs__msg__ObjectStatus__Sequence__init(&msg->npc_list, 0)) {
    morai_msgs__msg__ReplayInfo__fini(msg);
    return false;
  }
  // pedestrian_list
  if (!morai_msgs__msg__ObjectStatus__Sequence__init(&msg->pedestrian_list, 0)) {
    morai_msgs__msg__ReplayInfo__fini(msg);
    return false;
  }
  // obstacle_list
  if (!morai_msgs__msg__ObjectStatus__Sequence__init(&msg->obstacle_list, 0)) {
    morai_msgs__msg__ReplayInfo__fini(msg);
    return false;
  }
  return true;
}

void
morai_msgs__msg__ReplayInfo__fini(morai_msgs__msg__ReplayInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // ego_acc
  // ego_brake
  // ego_steer
  // orientation
  geometry_msgs__msg__Quaternion__fini(&msg->orientation);
  // linear_acceleration
  geometry_msgs__msg__Vector3__fini(&msg->linear_acceleration);
  // angular_velocity
  geometry_msgs__msg__Vector3__fini(&msg->angular_velocity);
  // num_of_npcs
  // num_of_pedestrian
  // num_of_obstacle
  // npc_list
  morai_msgs__msg__ObjectStatus__Sequence__fini(&msg->npc_list);
  // pedestrian_list
  morai_msgs__msg__ObjectStatus__Sequence__fini(&msg->pedestrian_list);
  // obstacle_list
  morai_msgs__msg__ObjectStatus__Sequence__fini(&msg->obstacle_list);
}

bool
morai_msgs__msg__ReplayInfo__are_equal(const morai_msgs__msg__ReplayInfo * lhs, const morai_msgs__msg__ReplayInfo * rhs)
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
  // ego_acc
  if (lhs->ego_acc != rhs->ego_acc) {
    return false;
  }
  // ego_brake
  if (lhs->ego_brake != rhs->ego_brake) {
    return false;
  }
  // ego_steer
  if (lhs->ego_steer != rhs->ego_steer) {
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->orientation), &(rhs->orientation)))
  {
    return false;
  }
  // linear_acceleration
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->linear_acceleration), &(rhs->linear_acceleration)))
  {
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->angular_velocity), &(rhs->angular_velocity)))
  {
    return false;
  }
  // num_of_npcs
  if (lhs->num_of_npcs != rhs->num_of_npcs) {
    return false;
  }
  // num_of_pedestrian
  if (lhs->num_of_pedestrian != rhs->num_of_pedestrian) {
    return false;
  }
  // num_of_obstacle
  if (lhs->num_of_obstacle != rhs->num_of_obstacle) {
    return false;
  }
  // npc_list
  if (!morai_msgs__msg__ObjectStatus__Sequence__are_equal(
      &(lhs->npc_list), &(rhs->npc_list)))
  {
    return false;
  }
  // pedestrian_list
  if (!morai_msgs__msg__ObjectStatus__Sequence__are_equal(
      &(lhs->pedestrian_list), &(rhs->pedestrian_list)))
  {
    return false;
  }
  // obstacle_list
  if (!morai_msgs__msg__ObjectStatus__Sequence__are_equal(
      &(lhs->obstacle_list), &(rhs->obstacle_list)))
  {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__ReplayInfo__copy(
  const morai_msgs__msg__ReplayInfo * input,
  morai_msgs__msg__ReplayInfo * output)
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
  // ego_acc
  output->ego_acc = input->ego_acc;
  // ego_brake
  output->ego_brake = input->ego_brake;
  // ego_steer
  output->ego_steer = input->ego_steer;
  // orientation
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->orientation), &(output->orientation)))
  {
    return false;
  }
  // linear_acceleration
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->linear_acceleration), &(output->linear_acceleration)))
  {
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->angular_velocity), &(output->angular_velocity)))
  {
    return false;
  }
  // num_of_npcs
  output->num_of_npcs = input->num_of_npcs;
  // num_of_pedestrian
  output->num_of_pedestrian = input->num_of_pedestrian;
  // num_of_obstacle
  output->num_of_obstacle = input->num_of_obstacle;
  // npc_list
  if (!morai_msgs__msg__ObjectStatus__Sequence__copy(
      &(input->npc_list), &(output->npc_list)))
  {
    return false;
  }
  // pedestrian_list
  if (!morai_msgs__msg__ObjectStatus__Sequence__copy(
      &(input->pedestrian_list), &(output->pedestrian_list)))
  {
    return false;
  }
  // obstacle_list
  if (!morai_msgs__msg__ObjectStatus__Sequence__copy(
      &(input->obstacle_list), &(output->obstacle_list)))
  {
    return false;
  }
  return true;
}

morai_msgs__msg__ReplayInfo *
morai_msgs__msg__ReplayInfo__create()
{
  morai_msgs__msg__ReplayInfo * msg = (morai_msgs__msg__ReplayInfo *)malloc(sizeof(morai_msgs__msg__ReplayInfo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__ReplayInfo));
  bool success = morai_msgs__msg__ReplayInfo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__ReplayInfo__destroy(morai_msgs__msg__ReplayInfo * msg)
{
  if (msg) {
    morai_msgs__msg__ReplayInfo__fini(msg);
  }
  free(msg);
}


bool
morai_msgs__msg__ReplayInfo__Sequence__init(morai_msgs__msg__ReplayInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  morai_msgs__msg__ReplayInfo * data = NULL;
  if (size) {
    data = (morai_msgs__msg__ReplayInfo *)calloc(size, sizeof(morai_msgs__msg__ReplayInfo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__ReplayInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__ReplayInfo__fini(&data[i - 1]);
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
morai_msgs__msg__ReplayInfo__Sequence__fini(morai_msgs__msg__ReplayInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      morai_msgs__msg__ReplayInfo__fini(&array->data[i]);
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

morai_msgs__msg__ReplayInfo__Sequence *
morai_msgs__msg__ReplayInfo__Sequence__create(size_t size)
{
  morai_msgs__msg__ReplayInfo__Sequence * array = (morai_msgs__msg__ReplayInfo__Sequence *)malloc(sizeof(morai_msgs__msg__ReplayInfo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__ReplayInfo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__ReplayInfo__Sequence__destroy(morai_msgs__msg__ReplayInfo__Sequence * array)
{
  if (array) {
    morai_msgs__msg__ReplayInfo__Sequence__fini(array);
  }
  free(array);
}

bool
morai_msgs__msg__ReplayInfo__Sequence__are_equal(const morai_msgs__msg__ReplayInfo__Sequence * lhs, const morai_msgs__msg__ReplayInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__ReplayInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__ReplayInfo__Sequence__copy(
  const morai_msgs__msg__ReplayInfo__Sequence * input,
  morai_msgs__msg__ReplayInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__ReplayInfo);
    morai_msgs__msg__ReplayInfo * data =
      (morai_msgs__msg__ReplayInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__ReplayInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__ReplayInfo__fini(&data[i]);
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
    if (!morai_msgs__msg__ReplayInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
