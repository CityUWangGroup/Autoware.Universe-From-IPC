// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/NpcGhostInfo.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__NPC_GHOST_INFO__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__NPC_GHOST_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'position'
// Member 'rpy'
#include "geometry_msgs/msg/detail/vector3__struct.h"

// Struct defined in msg/NpcGhostInfo in the package morai_msgs.
typedef struct morai_msgs__msg__NpcGhostInfo
{
  int32_t unique_id;
  rosidl_runtime_c__String name;
  geometry_msgs__msg__Vector3 position;
  geometry_msgs__msg__Vector3 rpy;
} morai_msgs__msg__NpcGhostInfo;

// Struct for a sequence of morai_msgs__msg__NpcGhostInfo.
typedef struct morai_msgs__msg__NpcGhostInfo__Sequence
{
  morai_msgs__msg__NpcGhostInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__NpcGhostInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__NPC_GHOST_INFO__STRUCT_H_
