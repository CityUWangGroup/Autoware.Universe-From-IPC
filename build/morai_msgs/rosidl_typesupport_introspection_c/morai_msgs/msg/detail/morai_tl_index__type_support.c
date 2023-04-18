// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from morai_msgs:msg/MoraiTLIndex.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "morai_msgs/msg/detail/morai_tl_index__rosidl_typesupport_introspection_c.h"
#include "morai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "morai_msgs/msg/detail/morai_tl_index__functions.h"
#include "morai_msgs/msg/detail/morai_tl_index__struct.h"


// Include directives for member types
// Member `idx`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoraiTLIndex__rosidl_typesupport_introspection_c__MoraiTLIndex_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  morai_msgs__msg__MoraiTLIndex__init(message_memory);
}

void MoraiTLIndex__rosidl_typesupport_introspection_c__MoraiTLIndex_fini_function(void * message_memory)
{
  morai_msgs__msg__MoraiTLIndex__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoraiTLIndex__rosidl_typesupport_introspection_c__MoraiTLIndex_message_member_array[1] = {
  {
    "idx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__MoraiTLIndex, idx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoraiTLIndex__rosidl_typesupport_introspection_c__MoraiTLIndex_message_members = {
  "morai_msgs__msg",  // message namespace
  "MoraiTLIndex",  // message name
  1,  // number of fields
  sizeof(morai_msgs__msg__MoraiTLIndex),
  MoraiTLIndex__rosidl_typesupport_introspection_c__MoraiTLIndex_message_member_array,  // message members
  MoraiTLIndex__rosidl_typesupport_introspection_c__MoraiTLIndex_init_function,  // function to initialize message memory (memory has to be allocated)
  MoraiTLIndex__rosidl_typesupport_introspection_c__MoraiTLIndex_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoraiTLIndex__rosidl_typesupport_introspection_c__MoraiTLIndex_message_type_support_handle = {
  0,
  &MoraiTLIndex__rosidl_typesupport_introspection_c__MoraiTLIndex_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_morai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, msg, MoraiTLIndex)() {
  if (!MoraiTLIndex__rosidl_typesupport_introspection_c__MoraiTLIndex_message_type_support_handle.typesupport_identifier) {
    MoraiTLIndex__rosidl_typesupport_introspection_c__MoraiTLIndex_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoraiTLIndex__rosidl_typesupport_introspection_c__MoraiTLIndex_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
