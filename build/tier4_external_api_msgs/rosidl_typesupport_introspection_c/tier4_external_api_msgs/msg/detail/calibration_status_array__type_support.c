// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_external_api_msgs:msg/CalibrationStatusArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_external_api_msgs/msg/detail/calibration_status_array__rosidl_typesupport_introspection_c.h"
#include "tier4_external_api_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_external_api_msgs/msg/detail/calibration_status_array__functions.h"
#include "tier4_external_api_msgs/msg/detail/calibration_status_array__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `status_array`
#include "tier4_external_api_msgs/msg/calibration_status.h"
// Member `status_array`
#include "tier4_external_api_msgs/msg/detail/calibration_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CalibrationStatusArray__rosidl_typesupport_introspection_c__CalibrationStatusArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_external_api_msgs__msg__CalibrationStatusArray__init(message_memory);
}

void CalibrationStatusArray__rosidl_typesupport_introspection_c__CalibrationStatusArray_fini_function(void * message_memory)
{
  tier4_external_api_msgs__msg__CalibrationStatusArray__fini(message_memory);
}

size_t CalibrationStatusArray__rosidl_typesupport_introspection_c__size_function__CalibrationStatus__status_array(
  const void * untyped_member)
{
  const tier4_external_api_msgs__msg__CalibrationStatus__Sequence * member =
    (const tier4_external_api_msgs__msg__CalibrationStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * CalibrationStatusArray__rosidl_typesupport_introspection_c__get_const_function__CalibrationStatus__status_array(
  const void * untyped_member, size_t index)
{
  const tier4_external_api_msgs__msg__CalibrationStatus__Sequence * member =
    (const tier4_external_api_msgs__msg__CalibrationStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * CalibrationStatusArray__rosidl_typesupport_introspection_c__get_function__CalibrationStatus__status_array(
  void * untyped_member, size_t index)
{
  tier4_external_api_msgs__msg__CalibrationStatus__Sequence * member =
    (tier4_external_api_msgs__msg__CalibrationStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

bool CalibrationStatusArray__rosidl_typesupport_introspection_c__resize_function__CalibrationStatus__status_array(
  void * untyped_member, size_t size)
{
  tier4_external_api_msgs__msg__CalibrationStatus__Sequence * member =
    (tier4_external_api_msgs__msg__CalibrationStatus__Sequence *)(untyped_member);
  tier4_external_api_msgs__msg__CalibrationStatus__Sequence__fini(member);
  return tier4_external_api_msgs__msg__CalibrationStatus__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember CalibrationStatusArray__rosidl_typesupport_introspection_c__CalibrationStatusArray_message_member_array[2] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__msg__CalibrationStatusArray, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__msg__CalibrationStatusArray, status_array),  // bytes offset in struct
    NULL,  // default value
    CalibrationStatusArray__rosidl_typesupport_introspection_c__size_function__CalibrationStatus__status_array,  // size() function pointer
    CalibrationStatusArray__rosidl_typesupport_introspection_c__get_const_function__CalibrationStatus__status_array,  // get_const(index) function pointer
    CalibrationStatusArray__rosidl_typesupport_introspection_c__get_function__CalibrationStatus__status_array,  // get(index) function pointer
    CalibrationStatusArray__rosidl_typesupport_introspection_c__resize_function__CalibrationStatus__status_array  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CalibrationStatusArray__rosidl_typesupport_introspection_c__CalibrationStatusArray_message_members = {
  "tier4_external_api_msgs__msg",  // message namespace
  "CalibrationStatusArray",  // message name
  2,  // number of fields
  sizeof(tier4_external_api_msgs__msg__CalibrationStatusArray),
  CalibrationStatusArray__rosidl_typesupport_introspection_c__CalibrationStatusArray_message_member_array,  // message members
  CalibrationStatusArray__rosidl_typesupport_introspection_c__CalibrationStatusArray_init_function,  // function to initialize message memory (memory has to be allocated)
  CalibrationStatusArray__rosidl_typesupport_introspection_c__CalibrationStatusArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CalibrationStatusArray__rosidl_typesupport_introspection_c__CalibrationStatusArray_message_type_support_handle = {
  0,
  &CalibrationStatusArray__rosidl_typesupport_introspection_c__CalibrationStatusArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_external_api_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_external_api_msgs, msg, CalibrationStatusArray)() {
  CalibrationStatusArray__rosidl_typesupport_introspection_c__CalibrationStatusArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  CalibrationStatusArray__rosidl_typesupport_introspection_c__CalibrationStatusArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_external_api_msgs, msg, CalibrationStatus)();
  if (!CalibrationStatusArray__rosidl_typesupport_introspection_c__CalibrationStatusArray_message_type_support_handle.typesupport_identifier) {
    CalibrationStatusArray__rosidl_typesupport_introspection_c__CalibrationStatusArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CalibrationStatusArray__rosidl_typesupport_introspection_c__CalibrationStatusArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
