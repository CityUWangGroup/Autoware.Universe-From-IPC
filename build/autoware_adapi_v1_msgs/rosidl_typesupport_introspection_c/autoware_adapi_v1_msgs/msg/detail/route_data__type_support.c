// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_adapi_v1_msgs:msg/RouteData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_adapi_v1_msgs/msg/detail/route_data__rosidl_typesupport_introspection_c.h"
#include "autoware_adapi_v1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_adapi_v1_msgs/msg/detail/route_data__functions.h"
#include "autoware_adapi_v1_msgs/msg/detail/route_data__struct.h"


// Include directives for member types
// Member `start`
// Member `goal`
#include "geometry_msgs/msg/pose.h"
// Member `start`
// Member `goal`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `segments`
#include "autoware_adapi_v1_msgs/msg/route_segment.h"
// Member `segments`
#include "autoware_adapi_v1_msgs/msg/detail/route_segment__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RouteData__rosidl_typesupport_introspection_c__RouteData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_adapi_v1_msgs__msg__RouteData__init(message_memory);
}

void RouteData__rosidl_typesupport_introspection_c__RouteData_fini_function(void * message_memory)
{
  autoware_adapi_v1_msgs__msg__RouteData__fini(message_memory);
}

size_t RouteData__rosidl_typesupport_introspection_c__size_function__RouteSegment__segments(
  const void * untyped_member)
{
  const autoware_adapi_v1_msgs__msg__RouteSegment__Sequence * member =
    (const autoware_adapi_v1_msgs__msg__RouteSegment__Sequence *)(untyped_member);
  return member->size;
}

const void * RouteData__rosidl_typesupport_introspection_c__get_const_function__RouteSegment__segments(
  const void * untyped_member, size_t index)
{
  const autoware_adapi_v1_msgs__msg__RouteSegment__Sequence * member =
    (const autoware_adapi_v1_msgs__msg__RouteSegment__Sequence *)(untyped_member);
  return &member->data[index];
}

void * RouteData__rosidl_typesupport_introspection_c__get_function__RouteSegment__segments(
  void * untyped_member, size_t index)
{
  autoware_adapi_v1_msgs__msg__RouteSegment__Sequence * member =
    (autoware_adapi_v1_msgs__msg__RouteSegment__Sequence *)(untyped_member);
  return &member->data[index];
}

bool RouteData__rosidl_typesupport_introspection_c__resize_function__RouteSegment__segments(
  void * untyped_member, size_t size)
{
  autoware_adapi_v1_msgs__msg__RouteSegment__Sequence * member =
    (autoware_adapi_v1_msgs__msg__RouteSegment__Sequence *)(untyped_member);
  autoware_adapi_v1_msgs__msg__RouteSegment__Sequence__fini(member);
  return autoware_adapi_v1_msgs__msg__RouteSegment__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember RouteData__rosidl_typesupport_introspection_c__RouteData_message_member_array[3] = {
  {
    "start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__RouteData, start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__RouteData, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "segments",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__RouteData, segments),  // bytes offset in struct
    NULL,  // default value
    RouteData__rosidl_typesupport_introspection_c__size_function__RouteSegment__segments,  // size() function pointer
    RouteData__rosidl_typesupport_introspection_c__get_const_function__RouteSegment__segments,  // get_const(index) function pointer
    RouteData__rosidl_typesupport_introspection_c__get_function__RouteSegment__segments,  // get(index) function pointer
    RouteData__rosidl_typesupport_introspection_c__resize_function__RouteSegment__segments  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RouteData__rosidl_typesupport_introspection_c__RouteData_message_members = {
  "autoware_adapi_v1_msgs__msg",  // message namespace
  "RouteData",  // message name
  3,  // number of fields
  sizeof(autoware_adapi_v1_msgs__msg__RouteData),
  RouteData__rosidl_typesupport_introspection_c__RouteData_message_member_array,  // message members
  RouteData__rosidl_typesupport_introspection_c__RouteData_init_function,  // function to initialize message memory (memory has to be allocated)
  RouteData__rosidl_typesupport_introspection_c__RouteData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RouteData__rosidl_typesupport_introspection_c__RouteData_message_type_support_handle = {
  0,
  &RouteData__rosidl_typesupport_introspection_c__RouteData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_adapi_v1_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, msg, RouteData)() {
  RouteData__rosidl_typesupport_introspection_c__RouteData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  RouteData__rosidl_typesupport_introspection_c__RouteData_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  RouteData__rosidl_typesupport_introspection_c__RouteData_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, msg, RouteSegment)();
  if (!RouteData__rosidl_typesupport_introspection_c__RouteData_message_type_support_handle.typesupport_identifier) {
    RouteData__rosidl_typesupport_introspection_c__RouteData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RouteData__rosidl_typesupport_introspection_c__RouteData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
