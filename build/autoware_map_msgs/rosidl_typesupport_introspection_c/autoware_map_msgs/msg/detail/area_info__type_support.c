// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_map_msgs:msg/AreaInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_map_msgs/msg/detail/area_info__rosidl_typesupport_introspection_c.h"
#include "autoware_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_map_msgs/msg/detail/area_info__functions.h"
#include "autoware_map_msgs/msg/detail/area_info__struct.h"


// Include directives for member types
// Member `center`
#include "geometry_msgs/msg/point.h"
// Member `center`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AreaInfo__rosidl_typesupport_introspection_c__AreaInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_map_msgs__msg__AreaInfo__init(message_memory);
}

void AreaInfo__rosidl_typesupport_introspection_c__AreaInfo_fini_function(void * message_memory)
{
  autoware_map_msgs__msg__AreaInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AreaInfo__rosidl_typesupport_introspection_c__AreaInfo_message_member_array[2] = {
  {
    "center",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_map_msgs__msg__AreaInfo, center),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "radius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_map_msgs__msg__AreaInfo, radius),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AreaInfo__rosidl_typesupport_introspection_c__AreaInfo_message_members = {
  "autoware_map_msgs__msg",  // message namespace
  "AreaInfo",  // message name
  2,  // number of fields
  sizeof(autoware_map_msgs__msg__AreaInfo),
  AreaInfo__rosidl_typesupport_introspection_c__AreaInfo_message_member_array,  // message members
  AreaInfo__rosidl_typesupport_introspection_c__AreaInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  AreaInfo__rosidl_typesupport_introspection_c__AreaInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AreaInfo__rosidl_typesupport_introspection_c__AreaInfo_message_type_support_handle = {
  0,
  &AreaInfo__rosidl_typesupport_introspection_c__AreaInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_map_msgs, msg, AreaInfo)() {
  AreaInfo__rosidl_typesupport_introspection_c__AreaInfo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!AreaInfo__rosidl_typesupport_introspection_c__AreaInfo_message_type_support_handle.typesupport_identifier) {
    AreaInfo__rosidl_typesupport_introspection_c__AreaInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AreaInfo__rosidl_typesupport_introspection_c__AreaInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
