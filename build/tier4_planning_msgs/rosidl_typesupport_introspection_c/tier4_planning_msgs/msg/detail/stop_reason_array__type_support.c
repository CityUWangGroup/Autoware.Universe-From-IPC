// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_planning_msgs:msg/StopReasonArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_planning_msgs/msg/detail/stop_reason_array__rosidl_typesupport_introspection_c.h"
#include "tier4_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_planning_msgs/msg/detail/stop_reason_array__functions.h"
#include "tier4_planning_msgs/msg/detail/stop_reason_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `stop_reasons`
#include "tier4_planning_msgs/msg/stop_reason.h"
// Member `stop_reasons`
#include "tier4_planning_msgs/msg/detail/stop_reason__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void StopReasonArray__rosidl_typesupport_introspection_c__StopReasonArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_planning_msgs__msg__StopReasonArray__init(message_memory);
}

void StopReasonArray__rosidl_typesupport_introspection_c__StopReasonArray_fini_function(void * message_memory)
{
  tier4_planning_msgs__msg__StopReasonArray__fini(message_memory);
}

size_t StopReasonArray__rosidl_typesupport_introspection_c__size_function__StopReason__stop_reasons(
  const void * untyped_member)
{
  const tier4_planning_msgs__msg__StopReason__Sequence * member =
    (const tier4_planning_msgs__msg__StopReason__Sequence *)(untyped_member);
  return member->size;
}

const void * StopReasonArray__rosidl_typesupport_introspection_c__get_const_function__StopReason__stop_reasons(
  const void * untyped_member, size_t index)
{
  const tier4_planning_msgs__msg__StopReason__Sequence * member =
    (const tier4_planning_msgs__msg__StopReason__Sequence *)(untyped_member);
  return &member->data[index];
}

void * StopReasonArray__rosidl_typesupport_introspection_c__get_function__StopReason__stop_reasons(
  void * untyped_member, size_t index)
{
  tier4_planning_msgs__msg__StopReason__Sequence * member =
    (tier4_planning_msgs__msg__StopReason__Sequence *)(untyped_member);
  return &member->data[index];
}

bool StopReasonArray__rosidl_typesupport_introspection_c__resize_function__StopReason__stop_reasons(
  void * untyped_member, size_t size)
{
  tier4_planning_msgs__msg__StopReason__Sequence * member =
    (tier4_planning_msgs__msg__StopReason__Sequence *)(untyped_member);
  tier4_planning_msgs__msg__StopReason__Sequence__fini(member);
  return tier4_planning_msgs__msg__StopReason__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember StopReasonArray__rosidl_typesupport_introspection_c__StopReasonArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs__msg__StopReasonArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stop_reasons",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs__msg__StopReasonArray, stop_reasons),  // bytes offset in struct
    NULL,  // default value
    StopReasonArray__rosidl_typesupport_introspection_c__size_function__StopReason__stop_reasons,  // size() function pointer
    StopReasonArray__rosidl_typesupport_introspection_c__get_const_function__StopReason__stop_reasons,  // get_const(index) function pointer
    StopReasonArray__rosidl_typesupport_introspection_c__get_function__StopReason__stop_reasons,  // get(index) function pointer
    StopReasonArray__rosidl_typesupport_introspection_c__resize_function__StopReason__stop_reasons  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers StopReasonArray__rosidl_typesupport_introspection_c__StopReasonArray_message_members = {
  "tier4_planning_msgs__msg",  // message namespace
  "StopReasonArray",  // message name
  2,  // number of fields
  sizeof(tier4_planning_msgs__msg__StopReasonArray),
  StopReasonArray__rosidl_typesupport_introspection_c__StopReasonArray_message_member_array,  // message members
  StopReasonArray__rosidl_typesupport_introspection_c__StopReasonArray_init_function,  // function to initialize message memory (memory has to be allocated)
  StopReasonArray__rosidl_typesupport_introspection_c__StopReasonArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t StopReasonArray__rosidl_typesupport_introspection_c__StopReasonArray_message_type_support_handle = {
  0,
  &StopReasonArray__rosidl_typesupport_introspection_c__StopReasonArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_planning_msgs, msg, StopReasonArray)() {
  StopReasonArray__rosidl_typesupport_introspection_c__StopReasonArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  StopReasonArray__rosidl_typesupport_introspection_c__StopReasonArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_planning_msgs, msg, StopReason)();
  if (!StopReasonArray__rosidl_typesupport_introspection_c__StopReasonArray_message_type_support_handle.typesupport_identifier) {
    StopReasonArray__rosidl_typesupport_introspection_c__StopReasonArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &StopReasonArray__rosidl_typesupport_introspection_c__StopReasonArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
