// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_auto_planning_msgs:srv/ModifyTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_auto_planning_msgs/srv/detail/modify_trajectory__rosidl_typesupport_introspection_c.h"
#include "autoware_auto_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_auto_planning_msgs/srv/detail/modify_trajectory__functions.h"
#include "autoware_auto_planning_msgs/srv/detail/modify_trajectory__struct.h"


// Include directives for member types
// Member `original_trajectory`
#include "autoware_auto_planning_msgs/msg/trajectory.h"
// Member `original_trajectory`
#include "autoware_auto_planning_msgs/msg/detail/trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ModifyTrajectory_Request__rosidl_typesupport_introspection_c__ModifyTrajectory_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_planning_msgs__srv__ModifyTrajectory_Request__init(message_memory);
}

void ModifyTrajectory_Request__rosidl_typesupport_introspection_c__ModifyTrajectory_Request_fini_function(void * message_memory)
{
  autoware_auto_planning_msgs__srv__ModifyTrajectory_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ModifyTrajectory_Request__rosidl_typesupport_introspection_c__ModifyTrajectory_Request_message_member_array[1] = {
  {
    "original_trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_planning_msgs__srv__ModifyTrajectory_Request, original_trajectory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ModifyTrajectory_Request__rosidl_typesupport_introspection_c__ModifyTrajectory_Request_message_members = {
  "autoware_auto_planning_msgs__srv",  // message namespace
  "ModifyTrajectory_Request",  // message name
  1,  // number of fields
  sizeof(autoware_auto_planning_msgs__srv__ModifyTrajectory_Request),
  ModifyTrajectory_Request__rosidl_typesupport_introspection_c__ModifyTrajectory_Request_message_member_array,  // message members
  ModifyTrajectory_Request__rosidl_typesupport_introspection_c__ModifyTrajectory_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ModifyTrajectory_Request__rosidl_typesupport_introspection_c__ModifyTrajectory_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ModifyTrajectory_Request__rosidl_typesupport_introspection_c__ModifyTrajectory_Request_message_type_support_handle = {
  0,
  &ModifyTrajectory_Request__rosidl_typesupport_introspection_c__ModifyTrajectory_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, srv, ModifyTrajectory_Request)() {
  ModifyTrajectory_Request__rosidl_typesupport_introspection_c__ModifyTrajectory_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, msg, Trajectory)();
  if (!ModifyTrajectory_Request__rosidl_typesupport_introspection_c__ModifyTrajectory_Request_message_type_support_handle.typesupport_identifier) {
    ModifyTrajectory_Request__rosidl_typesupport_introspection_c__ModifyTrajectory_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ModifyTrajectory_Request__rosidl_typesupport_introspection_c__ModifyTrajectory_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "autoware_auto_planning_msgs/srv/detail/modify_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "autoware_auto_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "autoware_auto_planning_msgs/srv/detail/modify_trajectory__functions.h"
// already included above
// #include "autoware_auto_planning_msgs/srv/detail/modify_trajectory__struct.h"


// Include directives for member types
// Member `modified_trajectory`
// already included above
// #include "autoware_auto_planning_msgs/msg/trajectory.h"
// Member `modified_trajectory`
// already included above
// #include "autoware_auto_planning_msgs/msg/detail/trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ModifyTrajectory_Response__rosidl_typesupport_introspection_c__ModifyTrajectory_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_planning_msgs__srv__ModifyTrajectory_Response__init(message_memory);
}

void ModifyTrajectory_Response__rosidl_typesupport_introspection_c__ModifyTrajectory_Response_fini_function(void * message_memory)
{
  autoware_auto_planning_msgs__srv__ModifyTrajectory_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ModifyTrajectory_Response__rosidl_typesupport_introspection_c__ModifyTrajectory_Response_message_member_array[1] = {
  {
    "modified_trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_planning_msgs__srv__ModifyTrajectory_Response, modified_trajectory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ModifyTrajectory_Response__rosidl_typesupport_introspection_c__ModifyTrajectory_Response_message_members = {
  "autoware_auto_planning_msgs__srv",  // message namespace
  "ModifyTrajectory_Response",  // message name
  1,  // number of fields
  sizeof(autoware_auto_planning_msgs__srv__ModifyTrajectory_Response),
  ModifyTrajectory_Response__rosidl_typesupport_introspection_c__ModifyTrajectory_Response_message_member_array,  // message members
  ModifyTrajectory_Response__rosidl_typesupport_introspection_c__ModifyTrajectory_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ModifyTrajectory_Response__rosidl_typesupport_introspection_c__ModifyTrajectory_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ModifyTrajectory_Response__rosidl_typesupport_introspection_c__ModifyTrajectory_Response_message_type_support_handle = {
  0,
  &ModifyTrajectory_Response__rosidl_typesupport_introspection_c__ModifyTrajectory_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, srv, ModifyTrajectory_Response)() {
  ModifyTrajectory_Response__rosidl_typesupport_introspection_c__ModifyTrajectory_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, msg, Trajectory)();
  if (!ModifyTrajectory_Response__rosidl_typesupport_introspection_c__ModifyTrajectory_Response_message_type_support_handle.typesupport_identifier) {
    ModifyTrajectory_Response__rosidl_typesupport_introspection_c__ModifyTrajectory_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ModifyTrajectory_Response__rosidl_typesupport_introspection_c__ModifyTrajectory_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "autoware_auto_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "autoware_auto_planning_msgs/srv/detail/modify_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers autoware_auto_planning_msgs__srv__detail__modify_trajectory__rosidl_typesupport_introspection_c__ModifyTrajectory_service_members = {
  "autoware_auto_planning_msgs__srv",  // service namespace
  "ModifyTrajectory",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // autoware_auto_planning_msgs__srv__detail__modify_trajectory__rosidl_typesupport_introspection_c__ModifyTrajectory_Request_message_type_support_handle,
  NULL  // response message
  // autoware_auto_planning_msgs__srv__detail__modify_trajectory__rosidl_typesupport_introspection_c__ModifyTrajectory_Response_message_type_support_handle
};

static rosidl_service_type_support_t autoware_auto_planning_msgs__srv__detail__modify_trajectory__rosidl_typesupport_introspection_c__ModifyTrajectory_service_type_support_handle = {
  0,
  &autoware_auto_planning_msgs__srv__detail__modify_trajectory__rosidl_typesupport_introspection_c__ModifyTrajectory_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, srv, ModifyTrajectory_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, srv, ModifyTrajectory_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_planning_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, srv, ModifyTrajectory)() {
  if (!autoware_auto_planning_msgs__srv__detail__modify_trajectory__rosidl_typesupport_introspection_c__ModifyTrajectory_service_type_support_handle.typesupport_identifier) {
    autoware_auto_planning_msgs__srv__detail__modify_trajectory__rosidl_typesupport_introspection_c__ModifyTrajectory_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)autoware_auto_planning_msgs__srv__detail__modify_trajectory__rosidl_typesupport_introspection_c__ModifyTrajectory_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, srv, ModifyTrajectory_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, srv, ModifyTrajectory_Response)()->data;
  }

  return &autoware_auto_planning_msgs__srv__detail__modify_trajectory__rosidl_typesupport_introspection_c__ModifyTrajectory_service_type_support_handle;
}
