// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from morai_msgs:srv/MoraiSyncModeSetGearSrv.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "morai_msgs/srv/detail/morai_sync_mode_set_gear_srv__rosidl_typesupport_introspection_c.h"
#include "morai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "morai_msgs/srv/detail/morai_sync_mode_set_gear_srv__functions.h"
#include "morai_msgs/srv/detail/morai_sync_mode_set_gear_srv__struct.h"


// Include directives for member types
// Member `request`
#include "morai_msgs/msg/sync_mode_set_gear.h"
// Member `request`
#include "morai_msgs/msg/detail/sync_mode_set_gear__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoraiSyncModeSetGearSrv_Request__rosidl_typesupport_introspection_c__MoraiSyncModeSetGearSrv_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  morai_msgs__srv__MoraiSyncModeSetGearSrv_Request__init(message_memory);
}

void MoraiSyncModeSetGearSrv_Request__rosidl_typesupport_introspection_c__MoraiSyncModeSetGearSrv_Request_fini_function(void * message_memory)
{
  morai_msgs__srv__MoraiSyncModeSetGearSrv_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoraiSyncModeSetGearSrv_Request__rosidl_typesupport_introspection_c__MoraiSyncModeSetGearSrv_Request_message_member_array[1] = {
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__srv__MoraiSyncModeSetGearSrv_Request, request),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoraiSyncModeSetGearSrv_Request__rosidl_typesupport_introspection_c__MoraiSyncModeSetGearSrv_Request_message_members = {
  "morai_msgs__srv",  // message namespace
  "MoraiSyncModeSetGearSrv_Request",  // message name
  1,  // number of fields
  sizeof(morai_msgs__srv__MoraiSyncModeSetGearSrv_Request),
  MoraiSyncModeSetGearSrv_Request__rosidl_typesupport_introspection_c__MoraiSyncModeSetGearSrv_Request_message_member_array,  // message members
  MoraiSyncModeSetGearSrv_Request__rosidl_typesupport_introspection_c__MoraiSyncModeSetGearSrv_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MoraiSyncModeSetGearSrv_Request__rosidl_typesupport_introspection_c__MoraiSyncModeSetGearSrv_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoraiSyncModeSetGearSrv_Request__rosidl_typesupport_introspection_c__MoraiSyncModeSetGearSrv_Request_message_type_support_handle = {
  0,
  &MoraiSyncModeSetGearSrv_Request__rosidl_typesupport_introspection_c__MoraiSyncModeSetGearSrv_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_morai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, srv, MoraiSyncModeSetGearSrv_Request)() {
  MoraiSyncModeSetGearSrv_Request__rosidl_typesupport_introspection_c__MoraiSyncModeSetGearSrv_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, msg, SyncModeSetGear)();
  if (!MoraiSyncModeSetGearSrv_Request__rosidl_typesupport_introspection_c__MoraiSyncModeSetGearSrv_Request_message_type_support_handle.typesupport_identifier) {
    MoraiSyncModeSetGearSrv_Request__rosidl_typesupport_introspection_c__MoraiSyncModeSetGearSrv_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoraiSyncModeSetGearSrv_Request__rosidl_typesupport_introspection_c__MoraiSyncModeSetGearSrv_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "morai_msgs/srv/detail/morai_sync_mode_set_gear_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "morai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "morai_msgs/srv/detail/morai_sync_mode_set_gear_srv__functions.h"
// already included above
// #include "morai_msgs/srv/detail/morai_sync_mode_set_gear_srv__struct.h"


// Include directives for member types
// Member `response`
#include "morai_msgs/msg/sync_mode_result_response.h"
// Member `response`
#include "morai_msgs/msg/detail/sync_mode_result_response__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoraiSyncModeSetGearSrv_Response__rosidl_typesupport_introspection_c__MoraiSyncModeSetGearSrv_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  morai_msgs__srv__MoraiSyncModeSetGearSrv_Response__init(message_memory);
}

void MoraiSyncModeSetGearSrv_Response__rosidl_typesupport_introspection_c__MoraiSyncModeSetGearSrv_Response_fini_function(void * message_memory)
{
  morai_msgs__srv__MoraiSyncModeSetGearSrv_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoraiSyncModeSetGearSrv_Response__rosidl_typesupport_introspection_c__MoraiSyncModeSetGearSrv_Response_message_member_array[1] = {
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__srv__MoraiSyncModeSetGearSrv_Response, response),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoraiSyncModeSetGearSrv_Response__rosidl_typesupport_introspection_c__MoraiSyncModeSetGearSrv_Response_message_members = {
  "morai_msgs__srv",  // message namespace
  "MoraiSyncModeSetGearSrv_Response",  // message name
  1,  // number of fields
  sizeof(morai_msgs__srv__MoraiSyncModeSetGearSrv_Response),
  MoraiSyncModeSetGearSrv_Response__rosidl_typesupport_introspection_c__MoraiSyncModeSetGearSrv_Response_message_member_array,  // message members
  MoraiSyncModeSetGearSrv_Response__rosidl_typesupport_introspection_c__MoraiSyncModeSetGearSrv_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MoraiSyncModeSetGearSrv_Response__rosidl_typesupport_introspection_c__MoraiSyncModeSetGearSrv_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoraiSyncModeSetGearSrv_Response__rosidl_typesupport_introspection_c__MoraiSyncModeSetGearSrv_Response_message_type_support_handle = {
  0,
  &MoraiSyncModeSetGearSrv_Response__rosidl_typesupport_introspection_c__MoraiSyncModeSetGearSrv_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_morai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, srv, MoraiSyncModeSetGearSrv_Response)() {
  MoraiSyncModeSetGearSrv_Response__rosidl_typesupport_introspection_c__MoraiSyncModeSetGearSrv_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, msg, SyncModeResultResponse)();
  if (!MoraiSyncModeSetGearSrv_Response__rosidl_typesupport_introspection_c__MoraiSyncModeSetGearSrv_Response_message_type_support_handle.typesupport_identifier) {
    MoraiSyncModeSetGearSrv_Response__rosidl_typesupport_introspection_c__MoraiSyncModeSetGearSrv_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoraiSyncModeSetGearSrv_Response__rosidl_typesupport_introspection_c__MoraiSyncModeSetGearSrv_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "morai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "morai_msgs/srv/detail/morai_sync_mode_set_gear_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers morai_msgs__srv__detail__morai_sync_mode_set_gear_srv__rosidl_typesupport_introspection_c__MoraiSyncModeSetGearSrv_service_members = {
  "morai_msgs__srv",  // service namespace
  "MoraiSyncModeSetGearSrv",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // morai_msgs__srv__detail__morai_sync_mode_set_gear_srv__rosidl_typesupport_introspection_c__MoraiSyncModeSetGearSrv_Request_message_type_support_handle,
  NULL  // response message
  // morai_msgs__srv__detail__morai_sync_mode_set_gear_srv__rosidl_typesupport_introspection_c__MoraiSyncModeSetGearSrv_Response_message_type_support_handle
};

static rosidl_service_type_support_t morai_msgs__srv__detail__morai_sync_mode_set_gear_srv__rosidl_typesupport_introspection_c__MoraiSyncModeSetGearSrv_service_type_support_handle = {
  0,
  &morai_msgs__srv__detail__morai_sync_mode_set_gear_srv__rosidl_typesupport_introspection_c__MoraiSyncModeSetGearSrv_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, srv, MoraiSyncModeSetGearSrv_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, srv, MoraiSyncModeSetGearSrv_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_morai_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, srv, MoraiSyncModeSetGearSrv)() {
  if (!morai_msgs__srv__detail__morai_sync_mode_set_gear_srv__rosidl_typesupport_introspection_c__MoraiSyncModeSetGearSrv_service_type_support_handle.typesupport_identifier) {
    morai_msgs__srv__detail__morai_sync_mode_set_gear_srv__rosidl_typesupport_introspection_c__MoraiSyncModeSetGearSrv_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)morai_msgs__srv__detail__morai_sync_mode_set_gear_srv__rosidl_typesupport_introspection_c__MoraiSyncModeSetGearSrv_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, srv, MoraiSyncModeSetGearSrv_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, srv, MoraiSyncModeSetGearSrv_Response)()->data;
  }

  return &morai_msgs__srv__detail__morai_sync_mode_set_gear_srv__rosidl_typesupport_introspection_c__MoraiSyncModeSetGearSrv_service_type_support_handle;
}
