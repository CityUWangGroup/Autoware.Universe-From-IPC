// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from morai_msgs:msg/TrafficLight.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "morai_msgs/msg/detail/traffic_light__rosidl_typesupport_introspection_c.h"
#include "morai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "morai_msgs/msg/detail/traffic_light__functions.h"
#include "morai_msgs/msg/detail/traffic_light__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  morai_msgs__msg__TrafficLight__init(message_memory);
}

void TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_fini_function(void * message_memory)
{
  morai_msgs__msg__TrafficLight__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__TrafficLight, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "light",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__TrafficLight, light),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_of_light",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__TrafficLight, num_of_light),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_message_members = {
  "morai_msgs__msg",  // message namespace
  "TrafficLight",  // message name
  3,  // number of fields
  sizeof(morai_msgs__msg__TrafficLight),
  TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_message_member_array,  // message members
  TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_init_function,  // function to initialize message memory (memory has to be allocated)
  TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_message_type_support_handle = {
  0,
  &TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_morai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, msg, TrafficLight)() {
  TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_message_type_support_handle.typesupport_identifier) {
    TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
