// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_sensing_msgs:msg/GnssInsOrientation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_sensing_msgs/msg/detail/gnss_ins_orientation__rosidl_typesupport_introspection_c.h"
#include "autoware_sensing_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_sensing_msgs/msg/detail/gnss_ins_orientation__functions.h"
#include "autoware_sensing_msgs/msg/detail/gnss_ins_orientation__struct.h"


// Include directives for member types
// Member `orientation`
#include "geometry_msgs/msg/quaternion.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GnssInsOrientation__rosidl_typesupport_introspection_c__GnssInsOrientation_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_sensing_msgs__msg__GnssInsOrientation__init(message_memory);
}

void GnssInsOrientation__rosidl_typesupport_introspection_c__GnssInsOrientation_fini_function(void * message_memory)
{
  autoware_sensing_msgs__msg__GnssInsOrientation__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GnssInsOrientation__rosidl_typesupport_introspection_c__GnssInsOrientation_message_member_array[4] = {
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_sensing_msgs__msg__GnssInsOrientation, orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rmse_rotation_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_sensing_msgs__msg__GnssInsOrientation, rmse_rotation_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rmse_rotation_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_sensing_msgs__msg__GnssInsOrientation, rmse_rotation_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rmse_rotation_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_sensing_msgs__msg__GnssInsOrientation, rmse_rotation_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GnssInsOrientation__rosidl_typesupport_introspection_c__GnssInsOrientation_message_members = {
  "autoware_sensing_msgs__msg",  // message namespace
  "GnssInsOrientation",  // message name
  4,  // number of fields
  sizeof(autoware_sensing_msgs__msg__GnssInsOrientation),
  GnssInsOrientation__rosidl_typesupport_introspection_c__GnssInsOrientation_message_member_array,  // message members
  GnssInsOrientation__rosidl_typesupport_introspection_c__GnssInsOrientation_init_function,  // function to initialize message memory (memory has to be allocated)
  GnssInsOrientation__rosidl_typesupport_introspection_c__GnssInsOrientation_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GnssInsOrientation__rosidl_typesupport_introspection_c__GnssInsOrientation_message_type_support_handle = {
  0,
  &GnssInsOrientation__rosidl_typesupport_introspection_c__GnssInsOrientation_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_sensing_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_sensing_msgs, msg, GnssInsOrientation)() {
  GnssInsOrientation__rosidl_typesupport_introspection_c__GnssInsOrientation_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  if (!GnssInsOrientation__rosidl_typesupport_introspection_c__GnssInsOrientation_message_type_support_handle.typesupport_identifier) {
    GnssInsOrientation__rosidl_typesupport_introspection_c__GnssInsOrientation_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GnssInsOrientation__rosidl_typesupport_introspection_c__GnssInsOrientation_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
