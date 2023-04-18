// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from planning_debug_tools:msg/TrajectoryDebugInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "planning_debug_tools/msg/detail/trajectory_debug_info__rosidl_typesupport_introspection_c.h"
#include "planning_debug_tools/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "planning_debug_tools/msg/detail/trajectory_debug_info__functions.h"
#include "planning_debug_tools/msg/detail/trajectory_debug_info__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `arclength`
// Member `curvature`
// Member `velocity`
// Member `acceleration`
// Member `yaw`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrajectoryDebugInfo__rosidl_typesupport_introspection_c__TrajectoryDebugInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  planning_debug_tools__msg__TrajectoryDebugInfo__init(message_memory);
}

void TrajectoryDebugInfo__rosidl_typesupport_introspection_c__TrajectoryDebugInfo_fini_function(void * message_memory)
{
  planning_debug_tools__msg__TrajectoryDebugInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrajectoryDebugInfo__rosidl_typesupport_introspection_c__TrajectoryDebugInfo_message_member_array[7] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_debug_tools__msg__TrajectoryDebugInfo, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_debug_tools__msg__TrajectoryDebugInfo, size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arclength",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_debug_tools__msg__TrajectoryDebugInfo, arclength),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "curvature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_debug_tools__msg__TrajectoryDebugInfo, curvature),  // bytes offset in struct
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
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_debug_tools__msg__TrajectoryDebugInfo, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_debug_tools__msg__TrajectoryDebugInfo, acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planning_debug_tools__msg__TrajectoryDebugInfo, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrajectoryDebugInfo__rosidl_typesupport_introspection_c__TrajectoryDebugInfo_message_members = {
  "planning_debug_tools__msg",  // message namespace
  "TrajectoryDebugInfo",  // message name
  7,  // number of fields
  sizeof(planning_debug_tools__msg__TrajectoryDebugInfo),
  TrajectoryDebugInfo__rosidl_typesupport_introspection_c__TrajectoryDebugInfo_message_member_array,  // message members
  TrajectoryDebugInfo__rosidl_typesupport_introspection_c__TrajectoryDebugInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  TrajectoryDebugInfo__rosidl_typesupport_introspection_c__TrajectoryDebugInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrajectoryDebugInfo__rosidl_typesupport_introspection_c__TrajectoryDebugInfo_message_type_support_handle = {
  0,
  &TrajectoryDebugInfo__rosidl_typesupport_introspection_c__TrajectoryDebugInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_planning_debug_tools
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planning_debug_tools, msg, TrajectoryDebugInfo)() {
  TrajectoryDebugInfo__rosidl_typesupport_introspection_c__TrajectoryDebugInfo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!TrajectoryDebugInfo__rosidl_typesupport_introspection_c__TrajectoryDebugInfo_message_type_support_handle.typesupport_identifier) {
    TrajectoryDebugInfo__rosidl_typesupport_introspection_c__TrajectoryDebugInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrajectoryDebugInfo__rosidl_typesupport_introspection_c__TrajectoryDebugInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
