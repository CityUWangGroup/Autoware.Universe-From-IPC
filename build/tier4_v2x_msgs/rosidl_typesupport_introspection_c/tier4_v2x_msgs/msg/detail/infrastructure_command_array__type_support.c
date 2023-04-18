// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_v2x_msgs:msg/InfrastructureCommandArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_v2x_msgs/msg/detail/infrastructure_command_array__rosidl_typesupport_introspection_c.h"
#include "tier4_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_v2x_msgs/msg/detail/infrastructure_command_array__functions.h"
#include "tier4_v2x_msgs/msg/detail/infrastructure_command_array__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `commands`
#include "tier4_v2x_msgs/msg/infrastructure_command.h"
// Member `commands`
#include "tier4_v2x_msgs/msg/detail/infrastructure_command__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void InfrastructureCommandArray__rosidl_typesupport_introspection_c__InfrastructureCommandArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_v2x_msgs__msg__InfrastructureCommandArray__init(message_memory);
}

void InfrastructureCommandArray__rosidl_typesupport_introspection_c__InfrastructureCommandArray_fini_function(void * message_memory)
{
  tier4_v2x_msgs__msg__InfrastructureCommandArray__fini(message_memory);
}

size_t InfrastructureCommandArray__rosidl_typesupport_introspection_c__size_function__InfrastructureCommand__commands(
  const void * untyped_member)
{
  const tier4_v2x_msgs__msg__InfrastructureCommand__Sequence * member =
    (const tier4_v2x_msgs__msg__InfrastructureCommand__Sequence *)(untyped_member);
  return member->size;
}

const void * InfrastructureCommandArray__rosidl_typesupport_introspection_c__get_const_function__InfrastructureCommand__commands(
  const void * untyped_member, size_t index)
{
  const tier4_v2x_msgs__msg__InfrastructureCommand__Sequence * member =
    (const tier4_v2x_msgs__msg__InfrastructureCommand__Sequence *)(untyped_member);
  return &member->data[index];
}

void * InfrastructureCommandArray__rosidl_typesupport_introspection_c__get_function__InfrastructureCommand__commands(
  void * untyped_member, size_t index)
{
  tier4_v2x_msgs__msg__InfrastructureCommand__Sequence * member =
    (tier4_v2x_msgs__msg__InfrastructureCommand__Sequence *)(untyped_member);
  return &member->data[index];
}

bool InfrastructureCommandArray__rosidl_typesupport_introspection_c__resize_function__InfrastructureCommand__commands(
  void * untyped_member, size_t size)
{
  tier4_v2x_msgs__msg__InfrastructureCommand__Sequence * member =
    (tier4_v2x_msgs__msg__InfrastructureCommand__Sequence *)(untyped_member);
  tier4_v2x_msgs__msg__InfrastructureCommand__Sequence__fini(member);
  return tier4_v2x_msgs__msg__InfrastructureCommand__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember InfrastructureCommandArray__rosidl_typesupport_introspection_c__InfrastructureCommandArray_message_member_array[2] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_v2x_msgs__msg__InfrastructureCommandArray, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "commands",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_v2x_msgs__msg__InfrastructureCommandArray, commands),  // bytes offset in struct
    NULL,  // default value
    InfrastructureCommandArray__rosidl_typesupport_introspection_c__size_function__InfrastructureCommand__commands,  // size() function pointer
    InfrastructureCommandArray__rosidl_typesupport_introspection_c__get_const_function__InfrastructureCommand__commands,  // get_const(index) function pointer
    InfrastructureCommandArray__rosidl_typesupport_introspection_c__get_function__InfrastructureCommand__commands,  // get(index) function pointer
    InfrastructureCommandArray__rosidl_typesupport_introspection_c__resize_function__InfrastructureCommand__commands  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers InfrastructureCommandArray__rosidl_typesupport_introspection_c__InfrastructureCommandArray_message_members = {
  "tier4_v2x_msgs__msg",  // message namespace
  "InfrastructureCommandArray",  // message name
  2,  // number of fields
  sizeof(tier4_v2x_msgs__msg__InfrastructureCommandArray),
  InfrastructureCommandArray__rosidl_typesupport_introspection_c__InfrastructureCommandArray_message_member_array,  // message members
  InfrastructureCommandArray__rosidl_typesupport_introspection_c__InfrastructureCommandArray_init_function,  // function to initialize message memory (memory has to be allocated)
  InfrastructureCommandArray__rosidl_typesupport_introspection_c__InfrastructureCommandArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t InfrastructureCommandArray__rosidl_typesupport_introspection_c__InfrastructureCommandArray_message_type_support_handle = {
  0,
  &InfrastructureCommandArray__rosidl_typesupport_introspection_c__InfrastructureCommandArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_v2x_msgs, msg, InfrastructureCommandArray)() {
  InfrastructureCommandArray__rosidl_typesupport_introspection_c__InfrastructureCommandArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  InfrastructureCommandArray__rosidl_typesupport_introspection_c__InfrastructureCommandArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_v2x_msgs, msg, InfrastructureCommand)();
  if (!InfrastructureCommandArray__rosidl_typesupport_introspection_c__InfrastructureCommandArray_message_type_support_handle.typesupport_identifier) {
    InfrastructureCommandArray__rosidl_typesupport_introspection_c__InfrastructureCommandArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &InfrastructureCommandArray__rosidl_typesupport_introspection_c__InfrastructureCommandArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
