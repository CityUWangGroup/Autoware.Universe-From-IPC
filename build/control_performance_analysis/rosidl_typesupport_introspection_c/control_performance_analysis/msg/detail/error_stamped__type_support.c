// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from control_performance_analysis:msg/ErrorStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "control_performance_analysis/msg/detail/error_stamped__rosidl_typesupport_introspection_c.h"
#include "control_performance_analysis/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "control_performance_analysis/msg/detail/error_stamped__functions.h"
#include "control_performance_analysis/msg/detail/error_stamped__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `error`
#include "control_performance_analysis/msg/error.h"
// Member `error`
#include "control_performance_analysis/msg/detail/error__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ErrorStamped__rosidl_typesupport_introspection_c__ErrorStamped_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  control_performance_analysis__msg__ErrorStamped__init(message_memory);
}

void ErrorStamped__rosidl_typesupport_introspection_c__ErrorStamped_fini_function(void * message_memory)
{
  control_performance_analysis__msg__ErrorStamped__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ErrorStamped__rosidl_typesupport_introspection_c__ErrorStamped_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_performance_analysis__msg__ErrorStamped, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(control_performance_analysis__msg__ErrorStamped, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ErrorStamped__rosidl_typesupport_introspection_c__ErrorStamped_message_members = {
  "control_performance_analysis__msg",  // message namespace
  "ErrorStamped",  // message name
  2,  // number of fields
  sizeof(control_performance_analysis__msg__ErrorStamped),
  ErrorStamped__rosidl_typesupport_introspection_c__ErrorStamped_message_member_array,  // message members
  ErrorStamped__rosidl_typesupport_introspection_c__ErrorStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  ErrorStamped__rosidl_typesupport_introspection_c__ErrorStamped_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ErrorStamped__rosidl_typesupport_introspection_c__ErrorStamped_message_type_support_handle = {
  0,
  &ErrorStamped__rosidl_typesupport_introspection_c__ErrorStamped_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_control_performance_analysis
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_performance_analysis, msg, ErrorStamped)() {
  ErrorStamped__rosidl_typesupport_introspection_c__ErrorStamped_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ErrorStamped__rosidl_typesupport_introspection_c__ErrorStamped_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, control_performance_analysis, msg, Error)();
  if (!ErrorStamped__rosidl_typesupport_introspection_c__ErrorStamped_message_type_support_handle.typesupport_identifier) {
    ErrorStamped__rosidl_typesupport_introspection_c__ErrorStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ErrorStamped__rosidl_typesupport_introspection_c__ErrorStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
