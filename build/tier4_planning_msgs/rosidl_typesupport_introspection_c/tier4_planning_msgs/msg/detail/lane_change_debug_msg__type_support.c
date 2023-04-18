// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_planning_msgs:msg/LaneChangeDebugMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_planning_msgs/msg/detail/lane_change_debug_msg__rosidl_typesupport_introspection_c.h"
#include "tier4_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_planning_msgs/msg/detail/lane_change_debug_msg__functions.h"
#include "tier4_planning_msgs/msg/detail/lane_change_debug_msg__struct.h"


// Include directives for member types
// Member `object_id`
// Member `failed_reason`
#include "rosidl_runtime_c/string_functions.h"
// Member `relative_distance`
#include "geometry_msgs/msg/pose.h"
// Member `relative_distance`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LaneChangeDebugMsg__rosidl_typesupport_introspection_c__LaneChangeDebugMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_planning_msgs__msg__LaneChangeDebugMsg__init(message_memory);
}

void LaneChangeDebugMsg__rosidl_typesupport_introspection_c__LaneChangeDebugMsg_fini_function(void * message_memory)
{
  tier4_planning_msgs__msg__LaneChangeDebugMsg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LaneChangeDebugMsg__rosidl_typesupport_introspection_c__LaneChangeDebugMsg_message_member_array[6] = {
  {
    "object_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs__msg__LaneChangeDebugMsg, object_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "allow_lane_change",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs__msg__LaneChangeDebugMsg, allow_lane_change),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_front",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs__msg__LaneChangeDebugMsg, is_front),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "relative_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs__msg__LaneChangeDebugMsg, relative_distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs__msg__LaneChangeDebugMsg, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "failed_reason",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs__msg__LaneChangeDebugMsg, failed_reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LaneChangeDebugMsg__rosidl_typesupport_introspection_c__LaneChangeDebugMsg_message_members = {
  "tier4_planning_msgs__msg",  // message namespace
  "LaneChangeDebugMsg",  // message name
  6,  // number of fields
  sizeof(tier4_planning_msgs__msg__LaneChangeDebugMsg),
  LaneChangeDebugMsg__rosidl_typesupport_introspection_c__LaneChangeDebugMsg_message_member_array,  // message members
  LaneChangeDebugMsg__rosidl_typesupport_introspection_c__LaneChangeDebugMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  LaneChangeDebugMsg__rosidl_typesupport_introspection_c__LaneChangeDebugMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LaneChangeDebugMsg__rosidl_typesupport_introspection_c__LaneChangeDebugMsg_message_type_support_handle = {
  0,
  &LaneChangeDebugMsg__rosidl_typesupport_introspection_c__LaneChangeDebugMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_planning_msgs, msg, LaneChangeDebugMsg)() {
  LaneChangeDebugMsg__rosidl_typesupport_introspection_c__LaneChangeDebugMsg_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!LaneChangeDebugMsg__rosidl_typesupport_introspection_c__LaneChangeDebugMsg_message_type_support_handle.typesupport_identifier) {
    LaneChangeDebugMsg__rosidl_typesupport_introspection_c__LaneChangeDebugMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LaneChangeDebugMsg__rosidl_typesupport_introspection_c__LaneChangeDebugMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
