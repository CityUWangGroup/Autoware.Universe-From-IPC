// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from morai_msgs:msg/MoraiTLInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "morai_msgs/msg/detail/morai_tl_info__rosidl_typesupport_introspection_c.h"
#include "morai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "morai_msgs/msg/detail/morai_tl_info__functions.h"
#include "morai_msgs/msg/detail/morai_tl_info__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `idx`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoraiTLInfo__rosidl_typesupport_introspection_c__MoraiTLInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  morai_msgs__msg__MoraiTLInfo__init(message_memory);
}

void MoraiTLInfo__rosidl_typesupport_introspection_c__MoraiTLInfo_fini_function(void * message_memory)
{
  morai_msgs__msg__MoraiTLInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoraiTLInfo__rosidl_typesupport_introspection_c__MoraiTLInfo_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__MoraiTLInfo, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "idx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__MoraiTLInfo, idx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__MoraiTLInfo, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoraiTLInfo__rosidl_typesupport_introspection_c__MoraiTLInfo_message_members = {
  "morai_msgs__msg",  // message namespace
  "MoraiTLInfo",  // message name
  3,  // number of fields
  sizeof(morai_msgs__msg__MoraiTLInfo),
  MoraiTLInfo__rosidl_typesupport_introspection_c__MoraiTLInfo_message_member_array,  // message members
  MoraiTLInfo__rosidl_typesupport_introspection_c__MoraiTLInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  MoraiTLInfo__rosidl_typesupport_introspection_c__MoraiTLInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoraiTLInfo__rosidl_typesupport_introspection_c__MoraiTLInfo_message_type_support_handle = {
  0,
  &MoraiTLInfo__rosidl_typesupport_introspection_c__MoraiTLInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_morai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, msg, MoraiTLInfo)() {
  MoraiTLInfo__rosidl_typesupport_introspection_c__MoraiTLInfo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!MoraiTLInfo__rosidl_typesupport_introspection_c__MoraiTLInfo_message_type_support_handle.typesupport_identifier) {
    MoraiTLInfo__rosidl_typesupport_introspection_c__MoraiTLInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoraiTLInfo__rosidl_typesupport_introspection_c__MoraiTLInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
