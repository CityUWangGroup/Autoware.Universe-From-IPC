// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from morai_msgs:msg/WaitForTickResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "morai_msgs/msg/detail/wait_for_tick_response__rosidl_typesupport_introspection_c.h"
#include "morai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "morai_msgs/msg/detail/wait_for_tick_response__functions.h"
#include "morai_msgs/msg/detail/wait_for_tick_response__struct.h"


// Include directives for member types
// Member `vehicle_status`
#include "morai_msgs/msg/ego_vehicle_status.h"
// Member `vehicle_status`
#include "morai_msgs/msg/detail/ego_vehicle_status__rosidl_typesupport_introspection_c.h"
// Member `time`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void WaitForTickResponse__rosidl_typesupport_introspection_c__WaitForTickResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  morai_msgs__msg__WaitForTickResponse__init(message_memory);
}

void WaitForTickResponse__rosidl_typesupport_introspection_c__WaitForTickResponse_fini_function(void * message_memory)
{
  morai_msgs__msg__WaitForTickResponse__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember WaitForTickResponse__rosidl_typesupport_introspection_c__WaitForTickResponse_message_member_array[5] = {
  {
    "tick_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__WaitForTickResponse, tick_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pause_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__WaitForTickResponse, pause_status),  // bytes offset in struct
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
    offsetof(morai_msgs__msg__WaitForTickResponse, frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicle_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__WaitForTickResponse, vehicle_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__WaitForTickResponse, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WaitForTickResponse__rosidl_typesupport_introspection_c__WaitForTickResponse_message_members = {
  "morai_msgs__msg",  // message namespace
  "WaitForTickResponse",  // message name
  5,  // number of fields
  sizeof(morai_msgs__msg__WaitForTickResponse),
  WaitForTickResponse__rosidl_typesupport_introspection_c__WaitForTickResponse_message_member_array,  // message members
  WaitForTickResponse__rosidl_typesupport_introspection_c__WaitForTickResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  WaitForTickResponse__rosidl_typesupport_introspection_c__WaitForTickResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WaitForTickResponse__rosidl_typesupport_introspection_c__WaitForTickResponse_message_type_support_handle = {
  0,
  &WaitForTickResponse__rosidl_typesupport_introspection_c__WaitForTickResponse_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_morai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, msg, WaitForTickResponse)() {
  WaitForTickResponse__rosidl_typesupport_introspection_c__WaitForTickResponse_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, msg, EgoVehicleStatus)();
  if (!WaitForTickResponse__rosidl_typesupport_introspection_c__WaitForTickResponse_message_type_support_handle.typesupport_identifier) {
    WaitForTickResponse__rosidl_typesupport_introspection_c__WaitForTickResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WaitForTickResponse__rosidl_typesupport_introspection_c__WaitForTickResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
