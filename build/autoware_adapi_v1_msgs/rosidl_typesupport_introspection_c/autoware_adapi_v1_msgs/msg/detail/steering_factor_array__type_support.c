// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_adapi_v1_msgs:msg/SteeringFactorArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_adapi_v1_msgs/msg/detail/steering_factor_array__rosidl_typesupport_introspection_c.h"
#include "autoware_adapi_v1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_adapi_v1_msgs/msg/detail/steering_factor_array__functions.h"
#include "autoware_adapi_v1_msgs/msg/detail/steering_factor_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `factors`
#include "autoware_adapi_v1_msgs/msg/steering_factor.h"
// Member `factors`
#include "autoware_adapi_v1_msgs/msg/detail/steering_factor__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SteeringFactorArray__rosidl_typesupport_introspection_c__SteeringFactorArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_adapi_v1_msgs__msg__SteeringFactorArray__init(message_memory);
}

void SteeringFactorArray__rosidl_typesupport_introspection_c__SteeringFactorArray_fini_function(void * message_memory)
{
  autoware_adapi_v1_msgs__msg__SteeringFactorArray__fini(message_memory);
}

size_t SteeringFactorArray__rosidl_typesupport_introspection_c__size_function__SteeringFactor__factors(
  const void * untyped_member)
{
  const autoware_adapi_v1_msgs__msg__SteeringFactor__Sequence * member =
    (const autoware_adapi_v1_msgs__msg__SteeringFactor__Sequence *)(untyped_member);
  return member->size;
}

const void * SteeringFactorArray__rosidl_typesupport_introspection_c__get_const_function__SteeringFactor__factors(
  const void * untyped_member, size_t index)
{
  const autoware_adapi_v1_msgs__msg__SteeringFactor__Sequence * member =
    (const autoware_adapi_v1_msgs__msg__SteeringFactor__Sequence *)(untyped_member);
  return &member->data[index];
}

void * SteeringFactorArray__rosidl_typesupport_introspection_c__get_function__SteeringFactor__factors(
  void * untyped_member, size_t index)
{
  autoware_adapi_v1_msgs__msg__SteeringFactor__Sequence * member =
    (autoware_adapi_v1_msgs__msg__SteeringFactor__Sequence *)(untyped_member);
  return &member->data[index];
}

bool SteeringFactorArray__rosidl_typesupport_introspection_c__resize_function__SteeringFactor__factors(
  void * untyped_member, size_t size)
{
  autoware_adapi_v1_msgs__msg__SteeringFactor__Sequence * member =
    (autoware_adapi_v1_msgs__msg__SteeringFactor__Sequence *)(untyped_member);
  autoware_adapi_v1_msgs__msg__SteeringFactor__Sequence__fini(member);
  return autoware_adapi_v1_msgs__msg__SteeringFactor__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember SteeringFactorArray__rosidl_typesupport_introspection_c__SteeringFactorArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__SteeringFactorArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "factors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__SteeringFactorArray, factors),  // bytes offset in struct
    NULL,  // default value
    SteeringFactorArray__rosidl_typesupport_introspection_c__size_function__SteeringFactor__factors,  // size() function pointer
    SteeringFactorArray__rosidl_typesupport_introspection_c__get_const_function__SteeringFactor__factors,  // get_const(index) function pointer
    SteeringFactorArray__rosidl_typesupport_introspection_c__get_function__SteeringFactor__factors,  // get(index) function pointer
    SteeringFactorArray__rosidl_typesupport_introspection_c__resize_function__SteeringFactor__factors  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SteeringFactorArray__rosidl_typesupport_introspection_c__SteeringFactorArray_message_members = {
  "autoware_adapi_v1_msgs__msg",  // message namespace
  "SteeringFactorArray",  // message name
  2,  // number of fields
  sizeof(autoware_adapi_v1_msgs__msg__SteeringFactorArray),
  SteeringFactorArray__rosidl_typesupport_introspection_c__SteeringFactorArray_message_member_array,  // message members
  SteeringFactorArray__rosidl_typesupport_introspection_c__SteeringFactorArray_init_function,  // function to initialize message memory (memory has to be allocated)
  SteeringFactorArray__rosidl_typesupport_introspection_c__SteeringFactorArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SteeringFactorArray__rosidl_typesupport_introspection_c__SteeringFactorArray_message_type_support_handle = {
  0,
  &SteeringFactorArray__rosidl_typesupport_introspection_c__SteeringFactorArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_adapi_v1_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, msg, SteeringFactorArray)() {
  SteeringFactorArray__rosidl_typesupport_introspection_c__SteeringFactorArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  SteeringFactorArray__rosidl_typesupport_introspection_c__SteeringFactorArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, msg, SteeringFactor)();
  if (!SteeringFactorArray__rosidl_typesupport_introspection_c__SteeringFactorArray_message_type_support_handle.typesupport_identifier) {
    SteeringFactorArray__rosidl_typesupport_introspection_c__SteeringFactorArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SteeringFactorArray__rosidl_typesupport_introspection_c__SteeringFactorArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
