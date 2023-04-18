// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tier4_api_msgs:msg/VelocityLimit.idl
// generated code does not contain a copyright notice

#ifndef TIER4_API_MSGS__MSG__DETAIL__VELOCITY_LIMIT__STRUCT_H_
#define TIER4_API_MSGS__MSG__DETAIL__VELOCITY_LIMIT__STRUCT_H_

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

// Struct defined in msg/VelocityLimit in the package tier4_api_msgs.
typedef struct tier4_api_msgs__msg__VelocityLimit
{
  builtin_interfaces__msg__Time stamp;
  float max_velocity;
} tier4_api_msgs__msg__VelocityLimit;

// Struct for a sequence of tier4_api_msgs__msg__VelocityLimit.
typedef struct tier4_api_msgs__msg__VelocityLimit__Sequence
{
  tier4_api_msgs__msg__VelocityLimit * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tier4_api_msgs__msg__VelocityLimit__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIER4_API_MSGS__MSG__DETAIL__VELOCITY_LIMIT__STRUCT_H_
