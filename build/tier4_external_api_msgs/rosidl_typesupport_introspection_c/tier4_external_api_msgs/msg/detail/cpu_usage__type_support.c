// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_external_api_msgs:msg/CpuUsage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_external_api_msgs/msg/detail/cpu_usage__rosidl_typesupport_introspection_c.h"
#include "tier4_external_api_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_external_api_msgs/msg/detail/cpu_usage__functions.h"
#include "tier4_external_api_msgs/msg/detail/cpu_usage__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `all`
// Member `cpus`
#include "tier4_external_api_msgs/msg/cpu_status.h"
// Member `all`
// Member `cpus`
#include "tier4_external_api_msgs/msg/detail/cpu_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CpuUsage__rosidl_typesupport_introspection_c__CpuUsage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_external_api_msgs__msg__CpuUsage__init(message_memory);
}

void CpuUsage__rosidl_typesupport_introspection_c__CpuUsage_fini_function(void * message_memory)
{
  tier4_external_api_msgs__msg__CpuUsage__fini(message_memory);
}

size_t CpuUsage__rosidl_typesupport_introspection_c__size_function__CpuStatus__cpus(
  const void * untyped_member)
{
  const tier4_external_api_msgs__msg__CpuStatus__Sequence * member =
    (const tier4_external_api_msgs__msg__CpuStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * CpuUsage__rosidl_typesupport_introspection_c__get_const_function__CpuStatus__cpus(
  const void * untyped_member, size_t index)
{
  const tier4_external_api_msgs__msg__CpuStatus__Sequence * member =
    (const tier4_external_api_msgs__msg__CpuStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * CpuUsage__rosidl_typesupport_introspection_c__get_function__CpuStatus__cpus(
  void * untyped_member, size_t index)
{
  tier4_external_api_msgs__msg__CpuStatus__Sequence * member =
    (tier4_external_api_msgs__msg__CpuStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

bool CpuUsage__rosidl_typesupport_introspection_c__resize_function__CpuStatus__cpus(
  void * untyped_member, size_t size)
{
  tier4_external_api_msgs__msg__CpuStatus__Sequence * member =
    (tier4_external_api_msgs__msg__CpuStatus__Sequence *)(untyped_member);
  tier4_external_api_msgs__msg__CpuStatus__Sequence__fini(member);
  return tier4_external_api_msgs__msg__CpuStatus__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember CpuUsage__rosidl_typesupport_introspection_c__CpuUsage_message_member_array[3] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__msg__CpuUsage, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "all",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__msg__CpuUsage, all),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cpus",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__msg__CpuUsage, cpus),  // bytes offset in struct
    NULL,  // default value
    CpuUsage__rosidl_typesupport_introspection_c__size_function__CpuStatus__cpus,  // size() function pointer
    CpuUsage__rosidl_typesupport_introspection_c__get_const_function__CpuStatus__cpus,  // get_const(index) function pointer
    CpuUsage__rosidl_typesupport_introspection_c__get_function__CpuStatus__cpus,  // get(index) function pointer
    CpuUsage__rosidl_typesupport_introspection_c__resize_function__CpuStatus__cpus  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CpuUsage__rosidl_typesupport_introspection_c__CpuUsage_message_members = {
  "tier4_external_api_msgs__msg",  // message namespace
  "CpuUsage",  // message name
  3,  // number of fields
  sizeof(tier4_external_api_msgs__msg__CpuUsage),
  CpuUsage__rosidl_typesupport_introspection_c__CpuUsage_message_member_array,  // message members
  CpuUsage__rosidl_typesupport_introspection_c__CpuUsage_init_function,  // function to initialize message memory (memory has to be allocated)
  CpuUsage__rosidl_typesupport_introspection_c__CpuUsage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CpuUsage__rosidl_typesupport_introspection_c__CpuUsage_message_type_support_handle = {
  0,
  &CpuUsage__rosidl_typesupport_introspection_c__CpuUsage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_external_api_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_external_api_msgs, msg, CpuUsage)() {
  CpuUsage__rosidl_typesupport_introspection_c__CpuUsage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  CpuUsage__rosidl_typesupport_introspection_c__CpuUsage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_external_api_msgs, msg, CpuStatus)();
  CpuUsage__rosidl_typesupport_introspection_c__CpuUsage_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_external_api_msgs, msg, CpuStatus)();
  if (!CpuUsage__rosidl_typesupport_introspection_c__CpuUsage_message_type_support_handle.typesupport_identifier) {
    CpuUsage__rosidl_typesupport_introspection_c__CpuUsage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CpuUsage__rosidl_typesupport_introspection_c__CpuUsage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
