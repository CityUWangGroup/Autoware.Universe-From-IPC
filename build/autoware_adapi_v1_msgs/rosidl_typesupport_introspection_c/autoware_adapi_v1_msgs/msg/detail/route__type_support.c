// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_adapi_v1_msgs:msg/Route.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_adapi_v1_msgs/msg/detail/route__rosidl_typesupport_introspection_c.h"
#include "autoware_adapi_v1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_adapi_v1_msgs/msg/detail/route__functions.h"
#include "autoware_adapi_v1_msgs/msg/detail/route__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "autoware_adapi_v1_msgs/msg/route_data.h"
// Member `data`
#include "autoware_adapi_v1_msgs/msg/detail/route_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Route__rosidl_typesupport_introspection_c__Route_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_adapi_v1_msgs__msg__Route__init(message_memory);
}

void Route__rosidl_typesupport_introspection_c__Route_fini_function(void * message_memory)
{
  autoware_adapi_v1_msgs__msg__Route__fini(message_memory);
}

size_t Route__rosidl_typesupport_introspection_c__size_function__RouteData__data(
  const void * untyped_member)
{
  const autoware_adapi_v1_msgs__msg__RouteData__Sequence * member =
    (const autoware_adapi_v1_msgs__msg__RouteData__Sequence *)(untyped_member);
  return member->size;
}

const void * Route__rosidl_typesupport_introspection_c__get_const_function__RouteData__data(
  const void * untyped_member, size_t index)
{
  const autoware_adapi_v1_msgs__msg__RouteData__Sequence * member =
    (const autoware_adapi_v1_msgs__msg__RouteData__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Route__rosidl_typesupport_introspection_c__get_function__RouteData__data(
  void * untyped_member, size_t index)
{
  autoware_adapi_v1_msgs__msg__RouteData__Sequence * member =
    (autoware_adapi_v1_msgs__msg__RouteData__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Route__rosidl_typesupport_introspection_c__resize_function__RouteData__data(
  void * untyped_member, size_t size)
{
  autoware_adapi_v1_msgs__msg__RouteData__Sequence * member =
    (autoware_adapi_v1_msgs__msg__RouteData__Sequence *)(untyped_member);
  autoware_adapi_v1_msgs__msg__RouteData__Sequence__fini(member);
  return autoware_adapi_v1_msgs__msg__RouteData__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Route__rosidl_typesupport_introspection_c__Route_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__Route, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__Route, data),  // bytes offset in struct
    NULL,  // default value
    Route__rosidl_typesupport_introspection_c__size_function__RouteData__data,  // size() function pointer
    Route__rosidl_typesupport_introspection_c__get_const_function__RouteData__data,  // get_const(index) function pointer
    Route__rosidl_typesupport_introspection_c__get_function__RouteData__data,  // get(index) function pointer
    Route__rosidl_typesupport_introspection_c__resize_function__RouteData__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Route__rosidl_typesupport_introspection_c__Route_message_members = {
  "autoware_adapi_v1_msgs__msg",  // message namespace
  "Route",  // message name
  2,  // number of fields
  sizeof(autoware_adapi_v1_msgs__msg__Route),
  Route__rosidl_typesupport_introspection_c__Route_message_member_array,  // message members
  Route__rosidl_typesupport_introspection_c__Route_init_function,  // function to initialize message memory (memory has to be allocated)
  Route__rosidl_typesupport_introspection_c__Route_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Route__rosidl_typesupport_introspection_c__Route_message_type_support_handle = {
  0,
  &Route__rosidl_typesupport_introspection_c__Route_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_adapi_v1_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, msg, Route)() {
  Route__rosidl_typesupport_introspection_c__Route_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  Route__rosidl_typesupport_introspection_c__Route_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, msg, RouteData)();
  if (!Route__rosidl_typesupport_introspection_c__Route_message_type_support_handle.typesupport_identifier) {
    Route__rosidl_typesupport_introspection_c__Route_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Route__rosidl_typesupport_introspection_c__Route_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
