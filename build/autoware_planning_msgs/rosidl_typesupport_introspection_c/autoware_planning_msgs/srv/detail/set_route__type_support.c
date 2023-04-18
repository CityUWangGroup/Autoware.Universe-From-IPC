// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_planning_msgs:srv/SetRoute.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_planning_msgs/srv/detail/set_route__rosidl_typesupport_introspection_c.h"
#include "autoware_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_planning_msgs/srv/detail/set_route__functions.h"
#include "autoware_planning_msgs/srv/detail/set_route__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "geometry_msgs/msg/pose.h"
// Member `goal`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `segments`
#include "autoware_planning_msgs/msg/lanelet_segment.h"
// Member `segments`
#include "autoware_planning_msgs/msg/detail/lanelet_segment__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SetRoute_Request__rosidl_typesupport_introspection_c__SetRoute_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_planning_msgs__srv__SetRoute_Request__init(message_memory);
}

void SetRoute_Request__rosidl_typesupport_introspection_c__SetRoute_Request_fini_function(void * message_memory)
{
  autoware_planning_msgs__srv__SetRoute_Request__fini(message_memory);
}

size_t SetRoute_Request__rosidl_typesupport_introspection_c__size_function__LaneletSegment__segments(
  const void * untyped_member)
{
  const autoware_planning_msgs__msg__LaneletSegment__Sequence * member =
    (const autoware_planning_msgs__msg__LaneletSegment__Sequence *)(untyped_member);
  return member->size;
}

const void * SetRoute_Request__rosidl_typesupport_introspection_c__get_const_function__LaneletSegment__segments(
  const void * untyped_member, size_t index)
{
  const autoware_planning_msgs__msg__LaneletSegment__Sequence * member =
    (const autoware_planning_msgs__msg__LaneletSegment__Sequence *)(untyped_member);
  return &member->data[index];
}

void * SetRoute_Request__rosidl_typesupport_introspection_c__get_function__LaneletSegment__segments(
  void * untyped_member, size_t index)
{
  autoware_planning_msgs__msg__LaneletSegment__Sequence * member =
    (autoware_planning_msgs__msg__LaneletSegment__Sequence *)(untyped_member);
  return &member->data[index];
}

bool SetRoute_Request__rosidl_typesupport_introspection_c__resize_function__LaneletSegment__segments(
  void * untyped_member, size_t size)
{
  autoware_planning_msgs__msg__LaneletSegment__Sequence * member =
    (autoware_planning_msgs__msg__LaneletSegment__Sequence *)(untyped_member);
  autoware_planning_msgs__msg__LaneletSegment__Sequence__fini(member);
  return autoware_planning_msgs__msg__LaneletSegment__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember SetRoute_Request__rosidl_typesupport_introspection_c__SetRoute_Request_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_planning_msgs__srv__SetRoute_Request, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_planning_msgs__srv__SetRoute_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "segments",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_planning_msgs__srv__SetRoute_Request, segments),  // bytes offset in struct
    NULL,  // default value
    SetRoute_Request__rosidl_typesupport_introspection_c__size_function__LaneletSegment__segments,  // size() function pointer
    SetRoute_Request__rosidl_typesupport_introspection_c__get_const_function__LaneletSegment__segments,  // get_const(index) function pointer
    SetRoute_Request__rosidl_typesupport_introspection_c__get_function__LaneletSegment__segments,  // get(index) function pointer
    SetRoute_Request__rosidl_typesupport_introspection_c__resize_function__LaneletSegment__segments  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetRoute_Request__rosidl_typesupport_introspection_c__SetRoute_Request_message_members = {
  "autoware_planning_msgs__srv",  // message namespace
  "SetRoute_Request",  // message name
  3,  // number of fields
  sizeof(autoware_planning_msgs__srv__SetRoute_Request),
  SetRoute_Request__rosidl_typesupport_introspection_c__SetRoute_Request_message_member_array,  // message members
  SetRoute_Request__rosidl_typesupport_introspection_c__SetRoute_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetRoute_Request__rosidl_typesupport_introspection_c__SetRoute_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetRoute_Request__rosidl_typesupport_introspection_c__SetRoute_Request_message_type_support_handle = {
  0,
  &SetRoute_Request__rosidl_typesupport_introspection_c__SetRoute_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_planning_msgs, srv, SetRoute_Request)() {
  SetRoute_Request__rosidl_typesupport_introspection_c__SetRoute_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  SetRoute_Request__rosidl_typesupport_introspection_c__SetRoute_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  SetRoute_Request__rosidl_typesupport_introspection_c__SetRoute_Request_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_planning_msgs, msg, LaneletSegment)();
  if (!SetRoute_Request__rosidl_typesupport_introspection_c__SetRoute_Request_message_type_support_handle.typesupport_identifier) {
    SetRoute_Request__rosidl_typesupport_introspection_c__SetRoute_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetRoute_Request__rosidl_typesupport_introspection_c__SetRoute_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "autoware_planning_msgs/srv/detail/set_route__rosidl_typesupport_introspection_c.h"
// already included above
// #include "autoware_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "autoware_planning_msgs/srv/detail/set_route__functions.h"
// already included above
// #include "autoware_planning_msgs/srv/detail/set_route__struct.h"


// Include directives for member types
// Member `status`
#include "autoware_common_msgs/msg/response_status.h"
// Member `status`
#include "autoware_common_msgs/msg/detail/response_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SetRoute_Response__rosidl_typesupport_introspection_c__SetRoute_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_planning_msgs__srv__SetRoute_Response__init(message_memory);
}

void SetRoute_Response__rosidl_typesupport_introspection_c__SetRoute_Response_fini_function(void * message_memory)
{
  autoware_planning_msgs__srv__SetRoute_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetRoute_Response__rosidl_typesupport_introspection_c__SetRoute_Response_message_member_array[1] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_planning_msgs__srv__SetRoute_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetRoute_Response__rosidl_typesupport_introspection_c__SetRoute_Response_message_members = {
  "autoware_planning_msgs__srv",  // message namespace
  "SetRoute_Response",  // message name
  1,  // number of fields
  sizeof(autoware_planning_msgs__srv__SetRoute_Response),
  SetRoute_Response__rosidl_typesupport_introspection_c__SetRoute_Response_message_member_array,  // message members
  SetRoute_Response__rosidl_typesupport_introspection_c__SetRoute_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetRoute_Response__rosidl_typesupport_introspection_c__SetRoute_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetRoute_Response__rosidl_typesupport_introspection_c__SetRoute_Response_message_type_support_handle = {
  0,
  &SetRoute_Response__rosidl_typesupport_introspection_c__SetRoute_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_planning_msgs, srv, SetRoute_Response)() {
  SetRoute_Response__rosidl_typesupport_introspection_c__SetRoute_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_common_msgs, msg, ResponseStatus)();
  if (!SetRoute_Response__rosidl_typesupport_introspection_c__SetRoute_Response_message_type_support_handle.typesupport_identifier) {
    SetRoute_Response__rosidl_typesupport_introspection_c__SetRoute_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetRoute_Response__rosidl_typesupport_introspection_c__SetRoute_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "autoware_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "autoware_planning_msgs/srv/detail/set_route__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers autoware_planning_msgs__srv__detail__set_route__rosidl_typesupport_introspection_c__SetRoute_service_members = {
  "autoware_planning_msgs__srv",  // service namespace
  "SetRoute",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // autoware_planning_msgs__srv__detail__set_route__rosidl_typesupport_introspection_c__SetRoute_Request_message_type_support_handle,
  NULL  // response message
  // autoware_planning_msgs__srv__detail__set_route__rosidl_typesupport_introspection_c__SetRoute_Response_message_type_support_handle
};

static rosidl_service_type_support_t autoware_planning_msgs__srv__detail__set_route__rosidl_typesupport_introspection_c__SetRoute_service_type_support_handle = {
  0,
  &autoware_planning_msgs__srv__detail__set_route__rosidl_typesupport_introspection_c__SetRoute_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_planning_msgs, srv, SetRoute_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_planning_msgs, srv, SetRoute_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_planning_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_planning_msgs, srv, SetRoute)() {
  if (!autoware_planning_msgs__srv__detail__set_route__rosidl_typesupport_introspection_c__SetRoute_service_type_support_handle.typesupport_identifier) {
    autoware_planning_msgs__srv__detail__set_route__rosidl_typesupport_introspection_c__SetRoute_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)autoware_planning_msgs__srv__detail__set_route__rosidl_typesupport_introspection_c__SetRoute_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_planning_msgs, srv, SetRoute_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_planning_msgs, srv, SetRoute_Response)()->data;
  }

  return &autoware_planning_msgs__srv__detail__set_route__rosidl_typesupport_introspection_c__SetRoute_service_type_support_handle;
}
