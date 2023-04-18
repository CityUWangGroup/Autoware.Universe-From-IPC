// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_planning_msgs:msg/PoseWithUuid.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PLANNING_MSGS__MSG__DETAIL__POSE_WITH_UUID__STRUCT_H_
#define AUTOWARE_PLANNING_MSGS__MSG__DETAIL__POSE_WITH_UUID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'uuid'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in msg/PoseWithUuid in the package autoware_planning_msgs.
typedef struct autoware_planning_msgs__msg__PoseWithUuid
{
  geometry_msgs__msg__Pose pose;
  unique_identifier_msgs__msg__UUID uuid;
} autoware_planning_msgs__msg__PoseWithUuid;

// Struct for a sequence of autoware_planning_msgs__msg__PoseWithUuid.
typedef struct autoware_planning_msgs__msg__PoseWithUuid__Sequence
{
  autoware_planning_msgs__msg__PoseWithUuid * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_planning_msgs__msg__PoseWithUuid__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_PLANNING_MSGS__MSG__DETAIL__POSE_WITH_UUID__STRUCT_H_
