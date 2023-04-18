// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_vehicle_msgs:msg/ActuationStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_vehicle_msgs/msg/detail/actuation_status__rosidl_typesupport_introspection_c.h"
#include "tier4_vehicle_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_vehicle_msgs/msg/detail/actuation_status__functions.h"
#include "tier4_vehicle_msgs/msg/detail/actuation_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ActuationStatus__rosidl_typesupport_introspection_c__ActuationStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_vehicle_msgs__msg__ActuationStatus__init(message_memory);
}

void ActuationStatus__rosidl_typesupport_introspection_c__ActuationStatus_fini_function(void * message_memory)
{
  tier4_vehicle_msgs__msg__ActuationStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ActuationStatus__rosidl_typesupport_introspection_c__ActuationStatus_message_member_array[3] = {
  {
    "accel_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_vehicle_msgs__msg__ActuationStatus, accel_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "brake_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_vehicle_msgs__msg__ActuationStatus, brake_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steer_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_vehicle_msgs__msg__ActuationStatus, steer_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ActuationStatus__rosidl_typesupport_introspection_c__ActuationStatus_message_members = {
  "tier4_vehicle_msgs__msg",  // message namespace
  "ActuationStatus",  // message name
  3,  // number of fields
  sizeof(tier4_vehicle_msgs__msg__ActuationStatus),
  ActuationStatus__rosidl_typesupport_introspection_c__ActuationStatus_message_member_array,  // message members
  ActuationStatus__rosidl_typesupport_introspection_c__ActuationStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  ActuationStatus__rosidl_typesupport_introspection_c__ActuationStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ActuationStatus__rosidl_typesupport_introspection_c__ActuationStatus_message_type_support_handle = {
  0,
  &ActuationStatus__rosidl_typesupport_introspection_c__ActuationStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_vehicle_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_vehicle_msgs, msg, ActuationStatus)() {
  if (!ActuationStatus__rosidl_typesupport_introspection_c__ActuationStatus_message_type_support_handle.typesupport_identifier) {
    ActuationStatus__rosidl_typesupport_introspection_c__ActuationStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ActuationStatus__rosidl_typesupport_introspection_c__ActuationStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
