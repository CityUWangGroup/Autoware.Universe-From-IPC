// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_external_api_msgs:msg/LocalizationScoreArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_external_api_msgs/msg/detail/localization_score_array__rosidl_typesupport_introspection_c.h"
#include "tier4_external_api_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_external_api_msgs/msg/detail/localization_score_array__functions.h"
#include "tier4_external_api_msgs/msg/detail/localization_score_array__struct.h"


// Include directives for member types
// Member `values`
#include "tier4_external_api_msgs/msg/localization_score.h"
// Member `values`
#include "tier4_external_api_msgs/msg/detail/localization_score__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LocalizationScoreArray__rosidl_typesupport_introspection_c__LocalizationScoreArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_external_api_msgs__msg__LocalizationScoreArray__init(message_memory);
}

void LocalizationScoreArray__rosidl_typesupport_introspection_c__LocalizationScoreArray_fini_function(void * message_memory)
{
  tier4_external_api_msgs__msg__LocalizationScoreArray__fini(message_memory);
}

size_t LocalizationScoreArray__rosidl_typesupport_introspection_c__size_function__LocalizationScore__values(
  const void * untyped_member)
{
  const tier4_external_api_msgs__msg__LocalizationScore__Sequence * member =
    (const tier4_external_api_msgs__msg__LocalizationScore__Sequence *)(untyped_member);
  return member->size;
}

const void * LocalizationScoreArray__rosidl_typesupport_introspection_c__get_const_function__LocalizationScore__values(
  const void * untyped_member, size_t index)
{
  const tier4_external_api_msgs__msg__LocalizationScore__Sequence * member =
    (const tier4_external_api_msgs__msg__LocalizationScore__Sequence *)(untyped_member);
  return &member->data[index];
}

void * LocalizationScoreArray__rosidl_typesupport_introspection_c__get_function__LocalizationScore__values(
  void * untyped_member, size_t index)
{
  tier4_external_api_msgs__msg__LocalizationScore__Sequence * member =
    (tier4_external_api_msgs__msg__LocalizationScore__Sequence *)(untyped_member);
  return &member->data[index];
}

bool LocalizationScoreArray__rosidl_typesupport_introspection_c__resize_function__LocalizationScore__values(
  void * untyped_member, size_t size)
{
  tier4_external_api_msgs__msg__LocalizationScore__Sequence * member =
    (tier4_external_api_msgs__msg__LocalizationScore__Sequence *)(untyped_member);
  tier4_external_api_msgs__msg__LocalizationScore__Sequence__fini(member);
  return tier4_external_api_msgs__msg__LocalizationScore__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember LocalizationScoreArray__rosidl_typesupport_introspection_c__LocalizationScoreArray_message_member_array[1] = {
  {
    "values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__msg__LocalizationScoreArray, values),  // bytes offset in struct
    NULL,  // default value
    LocalizationScoreArray__rosidl_typesupport_introspection_c__size_function__LocalizationScore__values,  // size() function pointer
    LocalizationScoreArray__rosidl_typesupport_introspection_c__get_const_function__LocalizationScore__values,  // get_const(index) function pointer
    LocalizationScoreArray__rosidl_typesupport_introspection_c__get_function__LocalizationScore__values,  // get(index) function pointer
    LocalizationScoreArray__rosidl_typesupport_introspection_c__resize_function__LocalizationScore__values  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LocalizationScoreArray__rosidl_typesupport_introspection_c__LocalizationScoreArray_message_members = {
  "tier4_external_api_msgs__msg",  // message namespace
  "LocalizationScoreArray",  // message name
  1,  // number of fields
  sizeof(tier4_external_api_msgs__msg__LocalizationScoreArray),
  LocalizationScoreArray__rosidl_typesupport_introspection_c__LocalizationScoreArray_message_member_array,  // message members
  LocalizationScoreArray__rosidl_typesupport_introspection_c__LocalizationScoreArray_init_function,  // function to initialize message memory (memory has to be allocated)
  LocalizationScoreArray__rosidl_typesupport_introspection_c__LocalizationScoreArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LocalizationScoreArray__rosidl_typesupport_introspection_c__LocalizationScoreArray_message_type_support_handle = {
  0,
  &LocalizationScoreArray__rosidl_typesupport_introspection_c__LocalizationScoreArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_external_api_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_external_api_msgs, msg, LocalizationScoreArray)() {
  LocalizationScoreArray__rosidl_typesupport_introspection_c__LocalizationScoreArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_external_api_msgs, msg, LocalizationScore)();
  if (!LocalizationScoreArray__rosidl_typesupport_introspection_c__LocalizationScoreArray_message_type_support_handle.typesupport_identifier) {
    LocalizationScoreArray__rosidl_typesupport_introspection_c__LocalizationScoreArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LocalizationScoreArray__rosidl_typesupport_introspection_c__LocalizationScoreArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
