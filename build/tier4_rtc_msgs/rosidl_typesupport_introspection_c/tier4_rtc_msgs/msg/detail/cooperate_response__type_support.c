// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_rtc_msgs:msg/CooperateResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_rtc_msgs/msg/detail/cooperate_response__rosidl_typesupport_introspection_c.h"
#include "tier4_rtc_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_rtc_msgs/msg/detail/cooperate_response__functions.h"
#include "tier4_rtc_msgs/msg/detail/cooperate_response__struct.h"


// Include directives for member types
// Member `uuid`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `uuid`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `module`
#include "tier4_rtc_msgs/msg/module.h"
// Member `module`
#include "tier4_rtc_msgs/msg/detail/module__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CooperateResponse__rosidl_typesupport_introspection_c__CooperateResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_rtc_msgs__msg__CooperateResponse__init(message_memory);
}

void CooperateResponse__rosidl_typesupport_introspection_c__CooperateResponse_fini_function(void * message_memory)
{
  tier4_rtc_msgs__msg__CooperateResponse__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CooperateResponse__rosidl_typesupport_introspection_c__CooperateResponse_message_member_array[3] = {
  {
    "uuid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_rtc_msgs__msg__CooperateResponse, uuid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "module",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_rtc_msgs__msg__CooperateResponse, module),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_rtc_msgs__msg__CooperateResponse, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CooperateResponse__rosidl_typesupport_introspection_c__CooperateResponse_message_members = {
  "tier4_rtc_msgs__msg",  // message namespace
  "CooperateResponse",  // message name
  3,  // number of fields
  sizeof(tier4_rtc_msgs__msg__CooperateResponse),
  CooperateResponse__rosidl_typesupport_introspection_c__CooperateResponse_message_member_array,  // message members
  CooperateResponse__rosidl_typesupport_introspection_c__CooperateResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  CooperateResponse__rosidl_typesupport_introspection_c__CooperateResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CooperateResponse__rosidl_typesupport_introspection_c__CooperateResponse_message_type_support_handle = {
  0,
  &CooperateResponse__rosidl_typesupport_introspection_c__CooperateResponse_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_rtc_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_rtc_msgs, msg, CooperateResponse)() {
  CooperateResponse__rosidl_typesupport_introspection_c__CooperateResponse_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  CooperateResponse__rosidl_typesupport_introspection_c__CooperateResponse_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_rtc_msgs, msg, Module)();
  if (!CooperateResponse__rosidl_typesupport_introspection_c__CooperateResponse_message_type_support_handle.typesupport_identifier) {
    CooperateResponse__rosidl_typesupport_introspection_c__CooperateResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CooperateResponse__rosidl_typesupport_introspection_c__CooperateResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
