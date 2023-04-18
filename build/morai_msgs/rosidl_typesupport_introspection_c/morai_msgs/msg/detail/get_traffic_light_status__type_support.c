// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from morai_msgs:msg/GetTrafficLightStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "morai_msgs/msg/detail/get_traffic_light_status__rosidl_typesupport_introspection_c.h"
#include "morai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "morai_msgs/msg/detail/get_traffic_light_status__functions.h"
#include "morai_msgs/msg/detail/get_traffic_light_status__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `traffic_light_index`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetTrafficLightStatus__rosidl_typesupport_introspection_c__GetTrafficLightStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  morai_msgs__msg__GetTrafficLightStatus__init(message_memory);
}

void GetTrafficLightStatus__rosidl_typesupport_introspection_c__GetTrafficLightStatus_fini_function(void * message_memory)
{
  morai_msgs__msg__GetTrafficLightStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetTrafficLightStatus__rosidl_typesupport_introspection_c__GetTrafficLightStatus_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__GetTrafficLightStatus, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "traffic_light_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__GetTrafficLightStatus, traffic_light_index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "traffic_light_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__GetTrafficLightStatus, traffic_light_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "traffic_light_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__GetTrafficLightStatus, traffic_light_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetTrafficLightStatus__rosidl_typesupport_introspection_c__GetTrafficLightStatus_message_members = {
  "morai_msgs__msg",  // message namespace
  "GetTrafficLightStatus",  // message name
  4,  // number of fields
  sizeof(morai_msgs__msg__GetTrafficLightStatus),
  GetTrafficLightStatus__rosidl_typesupport_introspection_c__GetTrafficLightStatus_message_member_array,  // message members
  GetTrafficLightStatus__rosidl_typesupport_introspection_c__GetTrafficLightStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  GetTrafficLightStatus__rosidl_typesupport_introspection_c__GetTrafficLightStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetTrafficLightStatus__rosidl_typesupport_introspection_c__GetTrafficLightStatus_message_type_support_handle = {
  0,
  &GetTrafficLightStatus__rosidl_typesupport_introspection_c__GetTrafficLightStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_morai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, msg, GetTrafficLightStatus)() {
  GetTrafficLightStatus__rosidl_typesupport_introspection_c__GetTrafficLightStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!GetTrafficLightStatus__rosidl_typesupport_introspection_c__GetTrafficLightStatus_message_type_support_handle.typesupport_identifier) {
    GetTrafficLightStatus__rosidl_typesupport_introspection_c__GetTrafficLightStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetTrafficLightStatus__rosidl_typesupport_introspection_c__GetTrafficLightStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
