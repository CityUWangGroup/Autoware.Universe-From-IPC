// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from morai_msgs:msg/RadarTrack.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__RADAR_TRACK__STRUCT_H_
#define MORAI_MSGS__MSG__DETAIL__RADAR_TRACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'velocity'
// Member 'acceleration'
// Member 'size'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'position_covariance'
// Member 'velocity_covariance'
// Member 'acceleration_covariance'
// Member 'size_covariance'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/RadarTrack in the package morai_msgs.
typedef struct morai_msgs__msg__RadarTrack
{
  int8_t uuid;
  geometry_msgs__msg__Point position;
  geometry_msgs__msg__Vector3 velocity;
  geometry_msgs__msg__Vector3 acceleration;
  geometry_msgs__msg__Vector3 size;
  uint16_t classification;
  rosidl_runtime_c__float__Sequence position_covariance;
  rosidl_runtime_c__float__Sequence velocity_covariance;
  rosidl_runtime_c__float__Sequence acceleration_covariance;
  rosidl_runtime_c__float__Sequence size_covariance;
  float amplitude;
} morai_msgs__msg__RadarTrack;

// Struct for a sequence of morai_msgs__msg__RadarTrack.
typedef struct morai_msgs__msg__RadarTrack__Sequence
{
  morai_msgs__msg__RadarTrack * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} morai_msgs__msg__RadarTrack__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORAI_MSGS__MSG__DETAIL__RADAR_TRACK__STRUCT_H_
