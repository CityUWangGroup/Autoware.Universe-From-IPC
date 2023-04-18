// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_external_api_msgs:msg/GearShift.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_external_api_msgs/msg/detail/gear_shift__rosidl_typesupport_introspection_c.h"
#include "tier4_external_api_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_external_api_msgs/msg/detail/gear_shift__functions.h"
#include "tier4_external_api_msgs/msg/detail/gear_shift__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GearShift__rosidl_typesupport_introspection_c__GearShift_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_external_api_msgs__msg__GearShift__init(message_memory);
}

void GearShift__rosidl_typesupport_introspection_c__GearShift_fini_function(void * message_memory)
{
  tier4_external_api_msgs__msg__GearShift__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GearShift__rosidl_typesupport_introspection_c__GearShift_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__msg__GearShift, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GearShift__rosidl_typesupport_introspection_c__GearShift_message_members = {
  "tier4_external_api_msgs__msg",  // message namespace
  "GearShift",  // message name
  1,  // number of fields
  sizeof(tier4_external_api_msgs__msg__GearShift),
  GearShift__rosidl_typesupport_introspection_c__GearShift_message_member_array,  // message members
  GearShift__rosidl_typesupport_introspection_c__GearShift_init_function,  // function to initialize message memory (memory has to be allocated)
  GearShift__rosidl_typesupport_introspection_c__GearShift_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GearShift__rosidl_typesupport_introspection_c__GearShift_message_type_support_handle = {
  0,
  &GearShift__rosidl_typesupport_introspection_c__GearShift_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_external_api_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_external_api_msgs, msg, GearShift)() {
  if (!GearShift__rosidl_typesupport_introspection_c__GearShift_message_type_support_handle.typesupport_identifier) {
    GearShift__rosidl_typesupport_introspection_c__GearShift_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GearShift__rosidl_typesupport_introspection_c__GearShift_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
