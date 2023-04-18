// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from morai_msgs:msg/SensorPosControl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "morai_msgs/msg/detail/sensor_pos_control__rosidl_typesupport_introspection_c.h"
#include "morai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "morai_msgs/msg/detail/sensor_pos_control__functions.h"
#include "morai_msgs/msg/detail/sensor_pos_control__struct.h"


// Include directives for member types
// Member `sensor_index`
// Member `pose_x`
// Member `pose_y`
// Member `pose_z`
// Member `roll`
// Member `pitch`
// Member `yaw`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SensorPosControl__rosidl_typesupport_introspection_c__SensorPosControl_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  morai_msgs__msg__SensorPosControl__init(message_memory);
}

void SensorPosControl__rosidl_typesupport_introspection_c__SensorPosControl_fini_function(void * message_memory)
{
  morai_msgs__msg__SensorPosControl__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SensorPosControl__rosidl_typesupport_introspection_c__SensorPosControl_message_member_array[7] = {
  {
    "sensor_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__SensorPosControl, sensor_index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__SensorPosControl, pose_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__SensorPosControl, pose_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__SensorPosControl, pose_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__SensorPosControl, roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__SensorPosControl, pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__msg__SensorPosControl, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SensorPosControl__rosidl_typesupport_introspection_c__SensorPosControl_message_members = {
  "morai_msgs__msg",  // message namespace
  "SensorPosControl",  // message name
  7,  // number of fields
  sizeof(morai_msgs__msg__SensorPosControl),
  SensorPosControl__rosidl_typesupport_introspection_c__SensorPosControl_message_member_array,  // message members
  SensorPosControl__rosidl_typesupport_introspection_c__SensorPosControl_init_function,  // function to initialize message memory (memory has to be allocated)
  SensorPosControl__rosidl_typesupport_introspection_c__SensorPosControl_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SensorPosControl__rosidl_typesupport_introspection_c__SensorPosControl_message_type_support_handle = {
  0,
  &SensorPosControl__rosidl_typesupport_introspection_c__SensorPosControl_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_morai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, msg, SensorPosControl)() {
  if (!SensorPosControl__rosidl_typesupport_introspection_c__SensorPosControl_message_type_support_handle.typesupport_identifier) {
    SensorPosControl__rosidl_typesupport_introspection_c__SensorPosControl_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SensorPosControl__rosidl_typesupport_introspection_c__SensorPosControl_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
