// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_adapi_v1_msgs:msg/RoutePrimitive.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_adapi_v1_msgs/msg/detail/route_primitive__rosidl_typesupport_introspection_c.h"
#include "autoware_adapi_v1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_adapi_v1_msgs/msg/detail/route_primitive__functions.h"
#include "autoware_adapi_v1_msgs/msg/detail/route_primitive__struct.h"


// Include directives for member types
// Member `type`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RoutePrimitive__rosidl_typesupport_introspection_c__RoutePrimitive_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_adapi_v1_msgs__msg__RoutePrimitive__init(message_memory);
}

void RoutePrimitive__rosidl_typesupport_introspection_c__RoutePrimitive_fini_function(void * message_memory)
{
  autoware_adapi_v1_msgs__msg__RoutePrimitive__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RoutePrimitive__rosidl_typesupport_introspection_c__RoutePrimitive_message_member_array[2] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__RoutePrimitive, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__RoutePrimitive, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RoutePrimitive__rosidl_typesupport_introspection_c__RoutePrimitive_message_members = {
  "autoware_adapi_v1_msgs__msg",  // message namespace
  "RoutePrimitive",  // message name
  2,  // number of fields
  sizeof(autoware_adapi_v1_msgs__msg__RoutePrimitive),
  RoutePrimitive__rosidl_typesupport_introspection_c__RoutePrimitive_message_member_array,  // message members
  RoutePrimitive__rosidl_typesupport_introspection_c__RoutePrimitive_init_function,  // function to initialize message memory (memory has to be allocated)
  RoutePrimitive__rosidl_typesupport_introspection_c__RoutePrimitive_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RoutePrimitive__rosidl_typesupport_introspection_c__RoutePrimitive_message_type_support_handle = {
  0,
  &RoutePrimitive__rosidl_typesupport_introspection_c__RoutePrimitive_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_adapi_v1_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, msg, RoutePrimitive)() {
  if (!RoutePrimitive__rosidl_typesupport_introspection_c__RoutePrimitive_message_type_support_handle.typesupport_identifier) {
    RoutePrimitive__rosidl_typesupport_introspection_c__RoutePrimitive_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RoutePrimitive__rosidl_typesupport_introspection_c__RoutePrimitive_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
