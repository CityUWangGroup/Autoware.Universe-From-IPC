// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from morai_msgs:msg/EventInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "morai_msgs/msg/detail/event_info__rosidl_typesupport_introspection_c.h"
#include "morai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "morai_msgs/msg/detail/event_info__functions.h"
#include "morai_msgs/msg/detail/event_info__struct.h"


// Include directives for member types
// Member `lamps`
#include "morai_msgs/msg/lamps.h"
// Member `lamps`
#include "morai_msgs/msg/detail/lamps__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void EventInfo__rosidl_typesupport_introspection_c__EventInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  morai_msgs__msg__EventInfo__init(message_memory);
}

void EventInfo__rosidl_typesupport_introspection_c__EventInfo_fini_function(void * message_memory)
{
  morai_msgs__msg__EventInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember EventInfo__rosidl_typesupport_introspection_c__EventInfo_message_member_array[5] = {
  {
    "option",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__EventInfo, option),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ctrl_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__EventInfo, ctrl_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gear",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__EventInfo, gear),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lamps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__EventInfo, lamps),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "set_pause",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__EventInfo, set_pause),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers EventInfo__rosidl_typesupport_introspection_c__EventInfo_message_members = {
  "morai_msgs__msg",  // message namespace
  "EventInfo",  // message name
  5,  // number of fields
  sizeof(morai_msgs__msg__EventInfo),
  EventInfo__rosidl_typesupport_introspection_c__EventInfo_message_member_array,  // message members
  EventInfo__rosidl_typesupport_introspection_c__EventInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  EventInfo__rosidl_typesupport_introspection_c__EventInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t EventInfo__rosidl_typesupport_introspection_c__EventInfo_message_type_support_handle = {
  0,
  &EventInfo__rosidl_typesupport_introspection_c__EventInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_morai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, msg, EventInfo)() {
  EventInfo__rosidl_typesupport_introspection_c__EventInfo_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, msg, Lamps)();
  if (!EventInfo__rosidl_typesupport_introspection_c__EventInfo_message_type_support_handle.typesupport_identifier) {
    EventInfo__rosidl_typesupport_introspection_c__EventInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &EventInfo__rosidl_typesupport_introspection_c__EventInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
