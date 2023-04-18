// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_external_api_msgs:msg/VehicleCommandStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_external_api_msgs/msg/detail/vehicle_command_stamped__rosidl_typesupport_introspection_c.h"
#include "tier4_external_api_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_external_api_msgs/msg/detail/vehicle_command_stamped__functions.h"
#include "tier4_external_api_msgs/msg/detail/vehicle_command_stamped__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `command`
#include "tier4_external_api_msgs/msg/vehicle_command.h"
// Member `command`
#include "tier4_external_api_msgs/msg/detail/vehicle_command__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void VehicleCommandStamped__rosidl_typesupport_introspection_c__VehicleCommandStamped_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_external_api_msgs__msg__VehicleCommandStamped__init(message_memory);
}

void VehicleCommandStamped__rosidl_typesupport_introspection_c__VehicleCommandStamped_fini_function(void * message_memory)
{
  tier4_external_api_msgs__msg__VehicleCommandStamped__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember VehicleCommandStamped__rosidl_typesupport_introspection_c__VehicleCommandStamped_message_member_array[2] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__msg__VehicleCommandStamped, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__msg__VehicleCommandStamped, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers VehicleCommandStamped__rosidl_typesupport_introspection_c__VehicleCommandStamped_message_members = {
  "tier4_external_api_msgs__msg",  // message namespace
  "VehicleCommandStamped",  // message name
  2,  // number of fields
  sizeof(tier4_external_api_msgs__msg__VehicleCommandStamped),
  VehicleCommandStamped__rosidl_typesupport_introspection_c__VehicleCommandStamped_message_member_array,  // message members
  VehicleCommandStamped__rosidl_typesupport_introspection_c__VehicleCommandStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  VehicleCommandStamped__rosidl_typesupport_introspection_c__VehicleCommandStamped_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t VehicleCommandStamped__rosidl_typesupport_introspection_c__VehicleCommandStamped_message_type_support_handle = {
  0,
  &VehicleCommandStamped__rosidl_typesupport_introspection_c__VehicleCommandStamped_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_external_api_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_external_api_msgs, msg, VehicleCommandStamped)() {
  VehicleCommandStamped__rosidl_typesupport_introspection_c__VehicleCommandStamped_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  VehicleCommandStamped__rosidl_typesupport_introspection_c__VehicleCommandStamped_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_external_api_msgs, msg, VehicleCommand)();
  if (!VehicleCommandStamped__rosidl_typesupport_introspection_c__VehicleCommandStamped_message_type_support_handle.typesupport_identifier) {
    VehicleCommandStamped__rosidl_typesupport_introspection_c__VehicleCommandStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &VehicleCommandStamped__rosidl_typesupport_introspection_c__VehicleCommandStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
