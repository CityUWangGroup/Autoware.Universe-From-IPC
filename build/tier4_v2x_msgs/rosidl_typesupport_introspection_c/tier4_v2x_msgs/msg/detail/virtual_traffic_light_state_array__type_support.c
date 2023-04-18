// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_v2x_msgs:msg/VirtualTrafficLightStateArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_v2x_msgs/msg/detail/virtual_traffic_light_state_array__rosidl_typesupport_introspection_c.h"
#include "tier4_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_v2x_msgs/msg/detail/virtual_traffic_light_state_array__functions.h"
#include "tier4_v2x_msgs/msg/detail/virtual_traffic_light_state_array__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `states`
#include "tier4_v2x_msgs/msg/virtual_traffic_light_state.h"
// Member `states`
#include "tier4_v2x_msgs/msg/detail/virtual_traffic_light_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void VirtualTrafficLightStateArray__rosidl_typesupport_introspection_c__VirtualTrafficLightStateArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_v2x_msgs__msg__VirtualTrafficLightStateArray__init(message_memory);
}

void VirtualTrafficLightStateArray__rosidl_typesupport_introspection_c__VirtualTrafficLightStateArray_fini_function(void * message_memory)
{
  tier4_v2x_msgs__msg__VirtualTrafficLightStateArray__fini(message_memory);
}

size_t VirtualTrafficLightStateArray__rosidl_typesupport_introspection_c__size_function__VirtualTrafficLightState__states(
  const void * untyped_member)
{
  const tier4_v2x_msgs__msg__VirtualTrafficLightState__Sequence * member =
    (const tier4_v2x_msgs__msg__VirtualTrafficLightState__Sequence *)(untyped_member);
  return member->size;
}

const void * VirtualTrafficLightStateArray__rosidl_typesupport_introspection_c__get_const_function__VirtualTrafficLightState__states(
  const void * untyped_member, size_t index)
{
  const tier4_v2x_msgs__msg__VirtualTrafficLightState__Sequence * member =
    (const tier4_v2x_msgs__msg__VirtualTrafficLightState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * VirtualTrafficLightStateArray__rosidl_typesupport_introspection_c__get_function__VirtualTrafficLightState__states(
  void * untyped_member, size_t index)
{
  tier4_v2x_msgs__msg__VirtualTrafficLightState__Sequence * member =
    (tier4_v2x_msgs__msg__VirtualTrafficLightState__Sequence *)(untyped_member);
  return &member->data[index];
}

bool VirtualTrafficLightStateArray__rosidl_typesupport_introspection_c__resize_function__VirtualTrafficLightState__states(
  void * untyped_member, size_t size)
{
  tier4_v2x_msgs__msg__VirtualTrafficLightState__Sequence * member =
    (tier4_v2x_msgs__msg__VirtualTrafficLightState__Sequence *)(untyped_member);
  tier4_v2x_msgs__msg__VirtualTrafficLightState__Sequence__fini(member);
  return tier4_v2x_msgs__msg__VirtualTrafficLightState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember VirtualTrafficLightStateArray__rosidl_typesupport_introspection_c__VirtualTrafficLightStateArray_message_member_array[2] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_v2x_msgs__msg__VirtualTrafficLightStateArray, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_v2x_msgs__msg__VirtualTrafficLightStateArray, states),  // bytes offset in struct
    NULL,  // default value
    VirtualTrafficLightStateArray__rosidl_typesupport_introspection_c__size_function__VirtualTrafficLightState__states,  // size() function pointer
    VirtualTrafficLightStateArray__rosidl_typesupport_introspection_c__get_const_function__VirtualTrafficLightState__states,  // get_const(index) function pointer
    VirtualTrafficLightStateArray__rosidl_typesupport_introspection_c__get_function__VirtualTrafficLightState__states,  // get(index) function pointer
    VirtualTrafficLightStateArray__rosidl_typesupport_introspection_c__resize_function__VirtualTrafficLightState__states  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers VirtualTrafficLightStateArray__rosidl_typesupport_introspection_c__VirtualTrafficLightStateArray_message_members = {
  "tier4_v2x_msgs__msg",  // message namespace
  "VirtualTrafficLightStateArray",  // message name
  2,  // number of fields
  sizeof(tier4_v2x_msgs__msg__VirtualTrafficLightStateArray),
  VirtualTrafficLightStateArray__rosidl_typesupport_introspection_c__VirtualTrafficLightStateArray_message_member_array,  // message members
  VirtualTrafficLightStateArray__rosidl_typesupport_introspection_c__VirtualTrafficLightStateArray_init_function,  // function to initialize message memory (memory has to be allocated)
  VirtualTrafficLightStateArray__rosidl_typesupport_introspection_c__VirtualTrafficLightStateArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t VirtualTrafficLightStateArray__rosidl_typesupport_introspection_c__VirtualTrafficLightStateArray_message_type_support_handle = {
  0,
  &VirtualTrafficLightStateArray__rosidl_typesupport_introspection_c__VirtualTrafficLightStateArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_v2x_msgs, msg, VirtualTrafficLightStateArray)() {
  VirtualTrafficLightStateArray__rosidl_typesupport_introspection_c__VirtualTrafficLightStateArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  VirtualTrafficLightStateArray__rosidl_typesupport_introspection_c__VirtualTrafficLightStateArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_v2x_msgs, msg, VirtualTrafficLightState)();
  if (!VirtualTrafficLightStateArray__rosidl_typesupport_introspection_c__VirtualTrafficLightStateArray_message_type_support_handle.typesupport_identifier) {
    VirtualTrafficLightStateArray__rosidl_typesupport_introspection_c__VirtualTrafficLightStateArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &VirtualTrafficLightStateArray__rosidl_typesupport_introspection_c__VirtualTrafficLightStateArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
