// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from morai_msgs:msg/SkidModel.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "morai_msgs/msg/detail/skid_model__rosidl_typesupport_introspection_c.h"
#include "morai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "morai_msgs/msg/detail/skid_model__functions.h"
#include "morai_msgs/msg/detail/skid_model__struct.h"


// Include directives for member types
// Member `rpm`
#include "morai_msgs/msg/wheel_rpm.h"
// Member `rpm`
#include "morai_msgs/msg/detail/wheel_rpm__rosidl_typesupport_introspection_c.h"
// Member `torque`
#include "morai_msgs/msg/wheel_torque.h"
// Member `torque`
#include "morai_msgs/msg/detail/wheel_torque__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SkidModel__rosidl_typesupport_introspection_c__SkidModel_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  morai_msgs__msg__SkidModel__init(message_memory);
}

void SkidModel__rosidl_typesupport_introspection_c__SkidModel_fini_function(void * message_memory)
{
  morai_msgs__msg__SkidModel__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SkidModel__rosidl_typesupport_introspection_c__SkidModel_message_member_array[2] = {
  {
    "rpm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__SkidModel, rpm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "torque",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__SkidModel, torque),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SkidModel__rosidl_typesupport_introspection_c__SkidModel_message_members = {
  "morai_msgs__msg",  // message namespace
  "SkidModel",  // message name
  2,  // number of fields
  sizeof(morai_msgs__msg__SkidModel),
  SkidModel__rosidl_typesupport_introspection_c__SkidModel_message_member_array,  // message members
  SkidModel__rosidl_typesupport_introspection_c__SkidModel_init_function,  // function to initialize message memory (memory has to be allocated)
  SkidModel__rosidl_typesupport_introspection_c__SkidModel_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SkidModel__rosidl_typesupport_introspection_c__SkidModel_message_type_support_handle = {
  0,
  &SkidModel__rosidl_typesupport_introspection_c__SkidModel_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_morai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, msg, SkidModel)() {
  SkidModel__rosidl_typesupport_introspection_c__SkidModel_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, msg, WheelRpm)();
  SkidModel__rosidl_typesupport_introspection_c__SkidModel_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, msg, WheelTorque)();
  if (!SkidModel__rosidl_typesupport_introspection_c__SkidModel_message_type_support_handle.typesupport_identifier) {
    SkidModel__rosidl_typesupport_introspection_c__SkidModel_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SkidModel__rosidl_typesupport_introspection_c__SkidModel_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
