// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_system_msgs:msg/ModeChangeAvailable.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_system_msgs/msg/detail/mode_change_available__rosidl_typesupport_introspection_c.h"
#include "tier4_system_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_system_msgs/msg/detail/mode_change_available__functions.h"
#include "tier4_system_msgs/msg/detail/mode_change_available__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ModeChangeAvailable__rosidl_typesupport_introspection_c__ModeChangeAvailable_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_system_msgs__msg__ModeChangeAvailable__init(message_memory);
}

void ModeChangeAvailable__rosidl_typesupport_introspection_c__ModeChangeAvailable_fini_function(void * message_memory)
{
  tier4_system_msgs__msg__ModeChangeAvailable__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ModeChangeAvailable__rosidl_typesupport_introspection_c__ModeChangeAvailable_message_member_array[2] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_system_msgs__msg__ModeChangeAvailable, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "available",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_system_msgs__msg__ModeChangeAvailable, available),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ModeChangeAvailable__rosidl_typesupport_introspection_c__ModeChangeAvailable_message_members = {
  "tier4_system_msgs__msg",  // message namespace
  "ModeChangeAvailable",  // message name
  2,  // number of fields
  sizeof(tier4_system_msgs__msg__ModeChangeAvailable),
  ModeChangeAvailable__rosidl_typesupport_introspection_c__ModeChangeAvailable_message_member_array,  // message members
  ModeChangeAvailable__rosidl_typesupport_introspection_c__ModeChangeAvailable_init_function,  // function to initialize message memory (memory has to be allocated)
  ModeChangeAvailable__rosidl_typesupport_introspection_c__ModeChangeAvailable_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ModeChangeAvailable__rosidl_typesupport_introspection_c__ModeChangeAvailable_message_type_support_handle = {
  0,
  &ModeChangeAvailable__rosidl_typesupport_introspection_c__ModeChangeAvailable_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_system_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_system_msgs, msg, ModeChangeAvailable)() {
  ModeChangeAvailable__rosidl_typesupport_introspection_c__ModeChangeAvailable_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!ModeChangeAvailable__rosidl_typesupport_introspection_c__ModeChangeAvailable_message_type_support_handle.typesupport_identifier) {
    ModeChangeAvailable__rosidl_typesupport_introspection_c__ModeChangeAvailable_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ModeChangeAvailable__rosidl_typesupport_introspection_c__ModeChangeAvailable_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
