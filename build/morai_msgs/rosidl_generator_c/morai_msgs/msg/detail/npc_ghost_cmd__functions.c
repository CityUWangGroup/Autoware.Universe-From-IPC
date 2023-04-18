// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from morai_msgs:msg/NpcGhostCmd.idl
// generated code does not contain a copyright notice
#include "morai_msgs/msg/detail/npc_ghost_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `npc_list`
#include "morai_msgs/msg/detail/npc_ghost_info__functions.h"

bool
morai_msgs__msg__NpcGhostCmd__init(morai_msgs__msg__NpcGhostCmd * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    morai_msgs__msg__NpcGhostCmd__fini(msg);
    return false;
  }
  // npc_list
  if (!morai_msgs__msg__NpcGhostInfo__Sequence__init(&msg->npc_list, 0)) {
    morai_msgs__msg__NpcGhostCmd__fini(msg);
    return false;
  }
  return true;
}

void
morai_msgs__msg__NpcGhostCmd__fini(morai_msgs__msg__NpcGhostCmd * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // npc_list
  morai_msgs__msg__NpcGhostInfo__Sequence__fini(&msg->npc_list);
}

bool
morai_msgs__msg__NpcGhostCmd__are_equal(const morai_msgs__msg__NpcGhostCmd * lhs, const morai_msgs__msg__NpcGhostCmd * rhs)
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
  // npc_list
  if (!morai_msgs__msg__NpcGhostInfo__Sequence__are_equal(
      &(lhs->npc_list), &(rhs->npc_list)))
  {
    return false;
  }
  return true;
}

bool
morai_msgs__msg__NpcGhostCmd__copy(
  const morai_msgs__msg__NpcGhostCmd * input,
  morai_msgs__msg__NpcGhostCmd * output)
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
  // npc_list
  if (!morai_msgs__msg__NpcGhostInfo__Sequence__copy(
      &(input->npc_list), &(output->npc_list)))
  {
    return false;
  }
  return true;
}

morai_msgs__msg__NpcGhostCmd *
morai_msgs__msg__NpcGhostCmd__create()
{
  morai_msgs__msg__NpcGhostCmd * msg = (morai_msgs__msg__NpcGhostCmd *)malloc(sizeof(morai_msgs__msg__NpcGhostCmd));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(morai_msgs__msg__NpcGhostCmd));
  bool success = morai_msgs__msg__NpcGhostCmd__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
morai_msgs__msg__NpcGhostCmd__destroy(morai_msgs__msg__NpcGhostCmd * msg)
{
  if (msg) {
    morai_msgs__msg__NpcGhostCmd__fini(msg);
  }
  free(msg);
}


bool
morai_msgs__msg__NpcGhostCmd__Sequence__init(morai_msgs__msg__NpcGhostCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  morai_msgs__msg__NpcGhostCmd * data = NULL;
  if (size) {
    data = (morai_msgs__msg__NpcGhostCmd *)calloc(size, sizeof(morai_msgs__msg__NpcGhostCmd));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = morai_msgs__msg__NpcGhostCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        morai_msgs__msg__NpcGhostCmd__fini(&data[i - 1]);
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
morai_msgs__msg__NpcGhostCmd__Sequence__fini(morai_msgs__msg__NpcGhostCmd__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      morai_msgs__msg__NpcGhostCmd__fini(&array->data[i]);
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

morai_msgs__msg__NpcGhostCmd__Sequence *
morai_msgs__msg__NpcGhostCmd__Sequence__create(size_t size)
{
  morai_msgs__msg__NpcGhostCmd__Sequence * array = (morai_msgs__msg__NpcGhostCmd__Sequence *)malloc(sizeof(morai_msgs__msg__NpcGhostCmd__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = morai_msgs__msg__NpcGhostCmd__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
morai_msgs__msg__NpcGhostCmd__Sequence__destroy(morai_msgs__msg__NpcGhostCmd__Sequence * array)
{
  if (array) {
    morai_msgs__msg__NpcGhostCmd__Sequence__fini(array);
  }
  free(array);
}

bool
morai_msgs__msg__NpcGhostCmd__Sequence__are_equal(const morai_msgs__msg__NpcGhostCmd__Sequence * lhs, const morai_msgs__msg__NpcGhostCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!morai_msgs__msg__NpcGhostCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
morai_msgs__msg__NpcGhostCmd__Sequence__copy(
  const morai_msgs__msg__NpcGhostCmd__Sequence * input,
  morai_msgs__msg__NpcGhostCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(morai_msgs__msg__NpcGhostCmd);
    morai_msgs__msg__NpcGhostCmd * data =
      (morai_msgs__msg__NpcGhostCmd *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!morai_msgs__msg__NpcGhostCmd__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          morai_msgs__msg__NpcGhostCmd__fini(&data[i]);
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
    if (!morai_msgs__msg__NpcGhostCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
