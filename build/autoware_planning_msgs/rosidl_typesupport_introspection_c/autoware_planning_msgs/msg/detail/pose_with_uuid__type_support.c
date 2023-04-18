// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_planning_msgs:msg/PoseWithUuid.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_planning_msgs/msg/detail/pose_with_uuid__rosidl_typesupport_introspection_c.h"
#include "autoware_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_planning_msgs/msg/detail/pose_with_uuid__functions.h"
#include "autoware_planning_msgs/msg/detail/pose_with_uuid__struct.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `uuid`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `uuid`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PoseWithUuid__rosidl_typesupport_introspection_c__PoseWithUuid_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_planning_msgs__msg__PoseWithUuid__init(message_memory);
}

void PoseWithUuid__rosidl_typesupport_introspection_c__PoseWithUuid_fini_function(void * message_memory)
{
  autoware_planning_msgs__msg__PoseWithUuid__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PoseWithUuid__rosidl_typesupport_introspection_c__PoseWithUuid_message_member_array[2] = {
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_planning_msgs__msg__PoseWithUuid, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uuid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_planning_msgs__msg__PoseWithUuid, uuid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PoseWithUuid__rosidl_typesupport_introspection_c__PoseWithUuid_message_members = {
  "autoware_planning_msgs__msg",  // message namespace
  "PoseWithUuid",  // message name
  2,  // number of fields
  sizeof(autoware_planning_msgs__msg__PoseWithUuid),
  PoseWithUuid__rosidl_typesupport_introspection_c__PoseWithUuid_message_member_array,  // message members
  PoseWithUuid__rosidl_typesupport_introspection_c__PoseWithUuid_init_function,  // function to initialize message memory (memory has to be allocated)
  PoseWithUuid__rosidl_typesupport_introspection_c__PoseWithUuid_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PoseWithUuid__rosidl_typesupport_introspection_c__PoseWithUuid_message_type_support_handle = {
  0,
  &PoseWithUuid__rosidl_typesupport_introspection_c__PoseWithUuid_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_planning_msgs, msg, PoseWithUuid)() {
  PoseWithUuid__rosidl_typesupport_introspection_c__PoseWithUuid_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  PoseWithUuid__rosidl_typesupport_introspection_c__PoseWithUuid_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!PoseWithUuid__rosidl_typesupport_introspection_c__PoseWithUuid_message_type_support_handle.typesupport_identifier) {
    PoseWithUuid__rosidl_typesupport_introspection_c__PoseWithUuid_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PoseWithUuid__rosidl_typesupport_introspection_c__PoseWithUuid_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
