// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from morai_msgs:msg/SyncModeAddObj.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "morai_msgs/msg/detail/sync_mode_add_obj__rosidl_typesupport_introspection_c.h"
#include "morai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "morai_msgs/msg/detail/sync_mode_add_obj__functions.h"
#include "morai_msgs/msg/detail/sync_mode_add_obj__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
#include "geometry_msgs/msg/vector3.h"
// Member `position`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SyncModeAddObj__rosidl_typesupport_introspection_c__SyncModeAddObj_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  morai_msgs__msg__SyncModeAddObj__init(message_memory);
}

void SyncModeAddObj__rosidl_typesupport_introspection_c__SyncModeAddObj_fini_function(void * message_memory)
{
  morai_msgs__msg__SyncModeAddObj__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SyncModeAddObj__rosidl_typesupport_introspection_c__SyncModeAddObj_message_member_array[4] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__SyncModeAddObj, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__SyncModeAddObj, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heading",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__SyncModeAddObj, heading),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__SyncModeAddObj, frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SyncModeAddObj__rosidl_typesupport_introspection_c__SyncModeAddObj_message_members = {
  "morai_msgs__msg",  // message namespace
  "SyncModeAddObj",  // message name
  4,  // number of fields
  sizeof(morai_msgs__msg__SyncModeAddObj),
  SyncModeAddObj__rosidl_typesupport_introspection_c__SyncModeAddObj_message_member_array,  // message members
  SyncModeAddObj__rosidl_typesupport_introspection_c__SyncModeAddObj_init_function,  // function to initialize message memory (memory has to be allocated)
  SyncModeAddObj__rosidl_typesupport_introspection_c__SyncModeAddObj_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SyncModeAddObj__rosidl_typesupport_introspection_c__SyncModeAddObj_message_type_support_handle = {
  0,
  &SyncModeAddObj__rosidl_typesupport_introspection_c__SyncModeAddObj_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_morai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, msg, SyncModeAddObj)() {
  SyncModeAddObj__rosidl_typesupport_introspection_c__SyncModeAddObj_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!SyncModeAddObj__rosidl_typesupport_introspection_c__SyncModeAddObj_message_type_support_handle.typesupport_identifier) {
    SyncModeAddObj__rosidl_typesupport_introspection_c__SyncModeAddObj_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SyncModeAddObj__rosidl_typesupport_introspection_c__SyncModeAddObj_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
