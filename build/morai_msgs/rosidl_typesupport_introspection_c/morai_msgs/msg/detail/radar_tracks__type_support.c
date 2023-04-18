// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from morai_msgs:msg/RadarTracks.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "morai_msgs/msg/detail/radar_tracks__rosidl_typesupport_introspection_c.h"
#include "morai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "morai_msgs/msg/detail/radar_tracks__functions.h"
#include "morai_msgs/msg/detail/radar_tracks__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `tracks`
#include "morai_msgs/msg/radar_track.h"
// Member `tracks`
#include "morai_msgs/msg/detail/radar_track__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RadarTracks__rosidl_typesupport_introspection_c__RadarTracks_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  morai_msgs__msg__RadarTracks__init(message_memory);
}

void RadarTracks__rosidl_typesupport_introspection_c__RadarTracks_fini_function(void * message_memory)
{
  morai_msgs__msg__RadarTracks__fini(message_memory);
}

size_t RadarTracks__rosidl_typesupport_introspection_c__size_function__RadarTrack__tracks(
  const void * untyped_member)
{
  const morai_msgs__msg__RadarTrack__Sequence * member =
    (const morai_msgs__msg__RadarTrack__Sequence *)(untyped_member);
  return member->size;
}

const void * RadarTracks__rosidl_typesupport_introspection_c__get_const_function__RadarTrack__tracks(
  const void * untyped_member, size_t index)
{
  const morai_msgs__msg__RadarTrack__Sequence * member =
    (const morai_msgs__msg__RadarTrack__Sequence *)(untyped_member);
  return &member->data[index];
}

void * RadarTracks__rosidl_typesupport_introspection_c__get_function__RadarTrack__tracks(
  void * untyped_member, size_t index)
{
  morai_msgs__msg__RadarTrack__Sequence * member =
    (morai_msgs__msg__RadarTrack__Sequence *)(untyped_member);
  return &member->data[index];
}

bool RadarTracks__rosidl_typesupport_introspection_c__resize_function__RadarTrack__tracks(
  void * untyped_member, size_t size)
{
  morai_msgs__msg__RadarTrack__Sequence * member =
    (morai_msgs__msg__RadarTrack__Sequence *)(untyped_member);
  morai_msgs__msg__RadarTrack__Sequence__fini(member);
  return morai_msgs__msg__RadarTrack__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember RadarTracks__rosidl_typesupport_introspection_c__RadarTracks_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__RadarTracks, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tracks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__RadarTracks, tracks),  // bytes offset in struct
    NULL,  // default value
    RadarTracks__rosidl_typesupport_introspection_c__size_function__RadarTrack__tracks,  // size() function pointer
    RadarTracks__rosidl_typesupport_introspection_c__get_const_function__RadarTrack__tracks,  // get_const(index) function pointer
    RadarTracks__rosidl_typesupport_introspection_c__get_function__RadarTrack__tracks,  // get(index) function pointer
    RadarTracks__rosidl_typesupport_introspection_c__resize_function__RadarTrack__tracks  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RadarTracks__rosidl_typesupport_introspection_c__RadarTracks_message_members = {
  "morai_msgs__msg",  // message namespace
  "RadarTracks",  // message name
  2,  // number of fields
  sizeof(morai_msgs__msg__RadarTracks),
  RadarTracks__rosidl_typesupport_introspection_c__RadarTracks_message_member_array,  // message members
  RadarTracks__rosidl_typesupport_introspection_c__RadarTracks_init_function,  // function to initialize message memory (memory has to be allocated)
  RadarTracks__rosidl_typesupport_introspection_c__RadarTracks_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RadarTracks__rosidl_typesupport_introspection_c__RadarTracks_message_type_support_handle = {
  0,
  &RadarTracks__rosidl_typesupport_introspection_c__RadarTracks_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_morai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, msg, RadarTracks)() {
  RadarTracks__rosidl_typesupport_introspection_c__RadarTracks_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  RadarTracks__rosidl_typesupport_introspection_c__RadarTracks_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, msg, RadarTrack)();
  if (!RadarTracks__rosidl_typesupport_introspection_c__RadarTracks_message_type_support_handle.typesupport_identifier) {
    RadarTracks__rosidl_typesupport_introspection_c__RadarTracks_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RadarTracks__rosidl_typesupport_introspection_c__RadarTracks_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
