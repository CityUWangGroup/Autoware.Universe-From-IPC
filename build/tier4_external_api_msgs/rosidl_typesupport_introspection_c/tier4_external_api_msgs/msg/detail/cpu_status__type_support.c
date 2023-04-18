// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_external_api_msgs:msg/CpuStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_external_api_msgs/msg/detail/cpu_status__rosidl_typesupport_introspection_c.h"
#include "tier4_external_api_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_external_api_msgs/msg/detail/cpu_status__functions.h"
#include "tier4_external_api_msgs/msg/detail/cpu_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void CpuStatus__rosidl_typesupport_introspection_c__CpuStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_external_api_msgs__msg__CpuStatus__init(message_memory);
}

void CpuStatus__rosidl_typesupport_introspection_c__CpuStatus_fini_function(void * message_memory)
{
  tier4_external_api_msgs__msg__CpuStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CpuStatus__rosidl_typesupport_introspection_c__CpuStatus_message_member_array[6] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__msg__CpuStatus, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "total",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__msg__CpuStatus, total),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "usr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__msg__CpuStatus, usr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nice",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__msg__CpuStatus, nice),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sys",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__msg__CpuStatus, sys),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "idle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__msg__CpuStatus, idle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CpuStatus__rosidl_typesupport_introspection_c__CpuStatus_message_members = {
  "tier4_external_api_msgs__msg",  // message namespace
  "CpuStatus",  // message name
  6,  // number of fields
  sizeof(tier4_external_api_msgs__msg__CpuStatus),
  CpuStatus__rosidl_typesupport_introspection_c__CpuStatus_message_member_array,  // message members
  CpuStatus__rosidl_typesupport_introspection_c__CpuStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  CpuStatus__rosidl_typesupport_introspection_c__CpuStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CpuStatus__rosidl_typesupport_introspection_c__CpuStatus_message_type_support_handle = {
  0,
  &CpuStatus__rosidl_typesupport_introspection_c__CpuStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_external_api_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_external_api_msgs, msg, CpuStatus)() {
  if (!CpuStatus__rosidl_typesupport_introspection_c__CpuStatus_message_type_support_handle.typesupport_identifier) {
    CpuStatus__rosidl_typesupport_introspection_c__CpuStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CpuStatus__rosidl_typesupport_introspection_c__CpuStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
