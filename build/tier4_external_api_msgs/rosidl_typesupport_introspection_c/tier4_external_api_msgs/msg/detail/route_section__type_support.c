// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_external_api_msgs:msg/RouteSection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_external_api_msgs/msg/detail/route_section__rosidl_typesupport_introspection_c.h"
#include "tier4_external_api_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_external_api_msgs/msg/detail/route_section__functions.h"
#include "tier4_external_api_msgs/msg/detail/route_section__struct.h"


// Include directives for member types
// Member `lane_ids`
// Member `continued_lane_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RouteSection__rosidl_typesupport_introspection_c__RouteSection_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_external_api_msgs__msg__RouteSection__init(message_memory);
}

void RouteSection__rosidl_typesupport_introspection_c__RouteSection_fini_function(void * message_memory)
{
  tier4_external_api_msgs__msg__RouteSection__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RouteSection__rosidl_typesupport_introspection_c__RouteSection_message_member_array[3] = {
  {
    "preferred_lane_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__msg__RouteSection, preferred_lane_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__msg__RouteSection, lane_ids),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "continued_lane_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__msg__RouteSection, continued_lane_ids),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RouteSection__rosidl_typesupport_introspection_c__RouteSection_message_members = {
  "tier4_external_api_msgs__msg",  // message namespace
  "RouteSection",  // message name
  3,  // number of fields
  sizeof(tier4_external_api_msgs__msg__RouteSection),
  RouteSection__rosidl_typesupport_introspection_c__RouteSection_message_member_array,  // message members
  RouteSection__rosidl_typesupport_introspection_c__RouteSection_init_function,  // function to initialize message memory (memory has to be allocated)
  RouteSection__rosidl_typesupport_introspection_c__RouteSection_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RouteSection__rosidl_typesupport_introspection_c__RouteSection_message_type_support_handle = {
  0,
  &RouteSection__rosidl_typesupport_introspection_c__RouteSection_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_external_api_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_external_api_msgs, msg, RouteSection)() {
  if (!RouteSection__rosidl_typesupport_introspection_c__RouteSection_message_type_support_handle.typesupport_identifier) {
    RouteSection__rosidl_typesupport_introspection_c__RouteSection_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RouteSection__rosidl_typesupport_introspection_c__RouteSection_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
