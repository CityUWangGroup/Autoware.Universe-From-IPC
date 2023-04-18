// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_system_msgs:srv/ChangeAutowareControl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_system_msgs/srv/detail/change_autoware_control__rosidl_typesupport_introspection_c.h"
#include "tier4_system_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_system_msgs/srv/detail/change_autoware_control__functions.h"
#include "tier4_system_msgs/srv/detail/change_autoware_control__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ChangeAutowareControl_Request__rosidl_typesupport_introspection_c__ChangeAutowareControl_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_system_msgs__srv__ChangeAutowareControl_Request__init(message_memory);
}

void ChangeAutowareControl_Request__rosidl_typesupport_introspection_c__ChangeAutowareControl_Request_fini_function(void * message_memory)
{
  tier4_system_msgs__srv__ChangeAutowareControl_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ChangeAutowareControl_Request__rosidl_typesupport_introspection_c__ChangeAutowareControl_Request_message_member_array[1] = {
  {
    "autoware_control",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_system_msgs__srv__ChangeAutowareControl_Request, autoware_control),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ChangeAutowareControl_Request__rosidl_typesupport_introspection_c__ChangeAutowareControl_Request_message_members = {
  "tier4_system_msgs__srv",  // message namespace
  "ChangeAutowareControl_Request",  // message name
  1,  // number of fields
  sizeof(tier4_system_msgs__srv__ChangeAutowareControl_Request),
  ChangeAutowareControl_Request__rosidl_typesupport_introspection_c__ChangeAutowareControl_Request_message_member_array,  // message members
  ChangeAutowareControl_Request__rosidl_typesupport_introspection_c__ChangeAutowareControl_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ChangeAutowareControl_Request__rosidl_typesupport_introspection_c__ChangeAutowareControl_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ChangeAutowareControl_Request__rosidl_typesupport_introspection_c__ChangeAutowareControl_Request_message_type_support_handle = {
  0,
  &ChangeAutowareControl_Request__rosidl_typesupport_introspection_c__ChangeAutowareControl_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_system_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_system_msgs, srv, ChangeAutowareControl_Request)() {
  if (!ChangeAutowareControl_Request__rosidl_typesupport_introspection_c__ChangeAutowareControl_Request_message_type_support_handle.typesupport_identifier) {
    ChangeAutowareControl_Request__rosidl_typesupport_introspection_c__ChangeAutowareControl_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ChangeAutowareControl_Request__rosidl_typesupport_introspection_c__ChangeAutowareControl_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tier4_system_msgs/srv/detail/change_autoware_control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tier4_system_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tier4_system_msgs/srv/detail/change_autoware_control__functions.h"
// already included above
// #include "tier4_system_msgs/srv/detail/change_autoware_control__struct.h"


// Include directives for member types
// Member `status`
#include "autoware_common_msgs/msg/response_status.h"
// Member `status`
#include "autoware_common_msgs/msg/detail/response_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ChangeAutowareControl_Response__rosidl_typesupport_introspection_c__ChangeAutowareControl_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_system_msgs__srv__ChangeAutowareControl_Response__init(message_memory);
}

void ChangeAutowareControl_Response__rosidl_typesupport_introspection_c__ChangeAutowareControl_Response_fini_function(void * message_memory)
{
  tier4_system_msgs__srv__ChangeAutowareControl_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ChangeAutowareControl_Response__rosidl_typesupport_introspection_c__ChangeAutowareControl_Response_message_member_array[1] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_system_msgs__srv__ChangeAutowareControl_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ChangeAutowareControl_Response__rosidl_typesupport_introspection_c__ChangeAutowareControl_Response_message_members = {
  "tier4_system_msgs__srv",  // message namespace
  "ChangeAutowareControl_Response",  // message name
  1,  // number of fields
  sizeof(tier4_system_msgs__srv__ChangeAutowareControl_Response),
  ChangeAutowareControl_Response__rosidl_typesupport_introspection_c__ChangeAutowareControl_Response_message_member_array,  // message members
  ChangeAutowareControl_Response__rosidl_typesupport_introspection_c__ChangeAutowareControl_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ChangeAutowareControl_Response__rosidl_typesupport_introspection_c__ChangeAutowareControl_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ChangeAutowareControl_Response__rosidl_typesupport_introspection_c__ChangeAutowareControl_Response_message_type_support_handle = {
  0,
  &ChangeAutowareControl_Response__rosidl_typesupport_introspection_c__ChangeAutowareControl_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_system_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_system_msgs, srv, ChangeAutowareControl_Response)() {
  ChangeAutowareControl_Response__rosidl_typesupport_introspection_c__ChangeAutowareControl_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_common_msgs, msg, ResponseStatus)();
  if (!ChangeAutowareControl_Response__rosidl_typesupport_introspection_c__ChangeAutowareControl_Response_message_type_support_handle.typesupport_identifier) {
    ChangeAutowareControl_Response__rosidl_typesupport_introspection_c__ChangeAutowareControl_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ChangeAutowareControl_Response__rosidl_typesupport_introspection_c__ChangeAutowareControl_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tier4_system_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tier4_system_msgs/srv/detail/change_autoware_control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tier4_system_msgs__srv__detail__change_autoware_control__rosidl_typesupport_introspection_c__ChangeAutowareControl_service_members = {
  "tier4_system_msgs__srv",  // service namespace
  "ChangeAutowareControl",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tier4_system_msgs__srv__detail__change_autoware_control__rosidl_typesupport_introspection_c__ChangeAutowareControl_Request_message_type_support_handle,
  NULL  // response message
  // tier4_system_msgs__srv__detail__change_autoware_control__rosidl_typesupport_introspection_c__ChangeAutowareControl_Response_message_type_support_handle
};

static rosidl_service_type_support_t tier4_system_msgs__srv__detail__change_autoware_control__rosidl_typesupport_introspection_c__ChangeAutowareControl_service_type_support_handle = {
  0,
  &tier4_system_msgs__srv__detail__change_autoware_control__rosidl_typesupport_introspection_c__ChangeAutowareControl_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_system_msgs, srv, ChangeAutowareControl_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_system_msgs, srv, ChangeAutowareControl_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_system_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_system_msgs, srv, ChangeAutowareControl)() {
  if (!tier4_system_msgs__srv__detail__change_autoware_control__rosidl_typesupport_introspection_c__ChangeAutowareControl_service_type_support_handle.typesupport_identifier) {
    tier4_system_msgs__srv__detail__change_autoware_control__rosidl_typesupport_introspection_c__ChangeAutowareControl_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tier4_system_msgs__srv__detail__change_autoware_control__rosidl_typesupport_introspection_c__ChangeAutowareControl_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_system_msgs, srv, ChangeAutowareControl_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_system_msgs, srv, ChangeAutowareControl_Response)()->data;
  }

  return &tier4_system_msgs__srv__detail__change_autoware_control__rosidl_typesupport_introspection_c__ChangeAutowareControl_service_type_support_handle;
}
