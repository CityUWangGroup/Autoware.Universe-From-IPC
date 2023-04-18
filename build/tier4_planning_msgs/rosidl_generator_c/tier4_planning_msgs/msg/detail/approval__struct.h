// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_planning_msgs:msg/Approval.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__APPROVAL__STRUCT_H_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__APPROVAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in msg/Approval in the package tier4_planning_msgs.
typedef struct tier4_planning_msgs__msg__Approval
{
  builtin_interfaces__msg__Time stamp;
  bool approval;
} tier4_planning_msgs__msg__Approval;

// Struct for a sequence of tier4_planning_msgs__msg__Approval.
typedef struct tier4_planning_msgs__msg__Approval__Sequence
{
  tier4_planning_msgs__msg__Approval * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_planning_msgs__msg__Approval__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__APPROVAL__STRUCT_H_
