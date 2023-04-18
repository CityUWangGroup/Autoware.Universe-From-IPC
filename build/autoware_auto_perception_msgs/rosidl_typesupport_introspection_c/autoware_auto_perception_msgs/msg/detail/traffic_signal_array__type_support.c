// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_auto_perception_msgs:msg/TrafficSignalArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_auto_perception_msgs/msg/detail/traffic_signal_array__rosidl_typesupport_introspection_c.h"
#include "autoware_auto_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_auto_perception_msgs/msg/detail/traffic_signal_array__functions.h"
#include "autoware_auto_perception_msgs/msg/detail/traffic_signal_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `signals`
#include "autoware_auto_perception_msgs/msg/traffic_signal.h"
// Member `signals`
#include "autoware_auto_perception_msgs/msg/detail/traffic_signal__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrafficSignalArray__rosidl_typesupport_introspection_c__TrafficSignalArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_perception_msgs__msg__TrafficSignalArray__init(message_memory);
}

void TrafficSignalArray__rosidl_typesupport_introspection_c__TrafficSignalArray_fini_function(void * message_memory)
{
  autoware_auto_perception_msgs__msg__TrafficSignalArray__fini(message_memory);
}

size_t TrafficSignalArray__rosidl_typesupport_introspection_c__size_function__TrafficSignal__signals(
  const void * untyped_member)
{
  const autoware_auto_perception_msgs__msg__TrafficSignal__Sequence * member =
    (const autoware_auto_perception_msgs__msg__TrafficSignal__Sequence *)(untyped_member);
  return member->size;
}

const void * TrafficSignalArray__rosidl_typesupport_introspection_c__get_const_function__TrafficSignal__signals(
  const void * untyped_member, size_t index)
{
  const autoware_auto_perception_msgs__msg__TrafficSignal__Sequence * member =
    (const autoware_auto_perception_msgs__msg__TrafficSignal__Sequence *)(untyped_member);
  return &member->data[index];
}

void * TrafficSignalArray__rosidl_typesupport_introspection_c__get_function__TrafficSignal__signals(
  void * untyped_member, size_t index)
{
  autoware_auto_perception_msgs__msg__TrafficSignal__Sequence * member =
    (autoware_auto_perception_msgs__msg__TrafficSignal__Sequence *)(untyped_member);
  return &member->data[index];
}

bool TrafficSignalArray__rosidl_typesupport_introspection_c__resize_function__TrafficSignal__signals(
  void * untyped_member, size_t size)
{
  autoware_auto_perception_msgs__msg__TrafficSignal__Sequence * member =
    (autoware_auto_perception_msgs__msg__TrafficSignal__Sequence *)(untyped_member);
  autoware_auto_perception_msgs__msg__TrafficSignal__Sequence__fini(member);
  return autoware_auto_perception_msgs__msg__TrafficSignal__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember TrafficSignalArray__rosidl_typesupport_introspection_c__TrafficSignalArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__TrafficSignalArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "signals",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs__msg__TrafficSignalArray, signals),  // bytes offset in struct
    NULL,  // default value
    TrafficSignalArray__rosidl_typesupport_introspection_c__size_function__TrafficSignal__signals,  // size() function pointer
    TrafficSignalArray__rosidl_typesupport_introspection_c__get_const_function__TrafficSignal__signals,  // get_const(index) function pointer
    TrafficSignalArray__rosidl_typesupport_introspection_c__get_function__TrafficSignal__signals,  // get(index) function pointer
    TrafficSignalArray__rosidl_typesupport_introspection_c__resize_function__TrafficSignal__signals  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrafficSignalArray__rosidl_typesupport_introspection_c__TrafficSignalArray_message_members = {
  "autoware_auto_perception_msgs__msg",  // message namespace
  "TrafficSignalArray",  // message name
  2,  // number of fields
  sizeof(autoware_auto_perception_msgs__msg__TrafficSignalArray),
  TrafficSignalArray__rosidl_typesupport_introspection_c__TrafficSignalArray_message_member_array,  // message members
  TrafficSignalArray__rosidl_typesupport_introspection_c__TrafficSignalArray_init_function,  // function to initialize message memory (memory has to be allocated)
  TrafficSignalArray__rosidl_typesupport_introspection_c__TrafficSignalArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrafficSignalArray__rosidl_typesupport_introspection_c__TrafficSignalArray_message_type_support_handle = {
  0,
  &TrafficSignalArray__rosidl_typesupport_introspection_c__TrafficSignalArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_perception_msgs, msg, TrafficSignalArray)() {
  TrafficSignalArray__rosidl_typesupport_introspection_c__TrafficSignalArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  TrafficSignalArray__rosidl_typesupport_introspection_c__TrafficSignalArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_perception_msgs, msg, TrafficSignal)();
  if (!TrafficSignalArray__rosidl_typesupport_introspection_c__TrafficSignalArray_message_type_support_handle.typesupport_identifier) {
    TrafficSignalArray__rosidl_typesupport_introspection_c__TrafficSignalArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrafficSignalArray__rosidl_typesupport_introspection_c__TrafficSignalArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
