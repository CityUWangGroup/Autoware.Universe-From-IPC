// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from morai_msgs:srv/MoraiSimProcSrv.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "morai_msgs/srv/detail/morai_sim_proc_srv__rosidl_typesupport_introspection_c.h"
#include "morai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "morai_msgs/srv/detail/morai_sim_proc_srv__functions.h"
#include "morai_msgs/srv/detail/morai_sim_proc_srv__struct.h"


// Include directives for member types
// Member `request`
#include "morai_msgs/msg/morai_sim_proc_handle.h"
// Member `request`
#include "morai_msgs/msg/detail/morai_sim_proc_handle__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoraiSimProcSrv_Request__rosidl_typesupport_introspection_c__MoraiSimProcSrv_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  morai_msgs__srv__MoraiSimProcSrv_Request__init(message_memory);
}

void MoraiSimProcSrv_Request__rosidl_typesupport_introspection_c__MoraiSimProcSrv_Request_fini_function(void * message_memory)
{
  morai_msgs__srv__MoraiSimProcSrv_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoraiSimProcSrv_Request__rosidl_typesupport_introspection_c__MoraiSimProcSrv_Request_message_member_array[1] = {
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__srv__MoraiSimProcSrv_Request, request),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoraiSimProcSrv_Request__rosidl_typesupport_introspection_c__MoraiSimProcSrv_Request_message_members = {
  "morai_msgs__srv",  // message namespace
  "MoraiSimProcSrv_Request",  // message name
  1,  // number of fields
  sizeof(morai_msgs__srv__MoraiSimProcSrv_Request),
  MoraiSimProcSrv_Request__rosidl_typesupport_introspection_c__MoraiSimProcSrv_Request_message_member_array,  // message members
  MoraiSimProcSrv_Request__rosidl_typesupport_introspection_c__MoraiSimProcSrv_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MoraiSimProcSrv_Request__rosidl_typesupport_introspection_c__MoraiSimProcSrv_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoraiSimProcSrv_Request__rosidl_typesupport_introspection_c__MoraiSimProcSrv_Request_message_type_support_handle = {
  0,
  &MoraiSimProcSrv_Request__rosidl_typesupport_introspection_c__MoraiSimProcSrv_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_morai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, srv, MoraiSimProcSrv_Request)() {
  MoraiSimProcSrv_Request__rosidl_typesupport_introspection_c__MoraiSimProcSrv_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, msg, MoraiSimProcHandle)();
  if (!MoraiSimProcSrv_Request__rosidl_typesupport_introspection_c__MoraiSimProcSrv_Request_message_type_support_handle.typesupport_identifier) {
    MoraiSimProcSrv_Request__rosidl_typesupport_introspection_c__MoraiSimProcSrv_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoraiSimProcSrv_Request__rosidl_typesupport_introspection_c__MoraiSimProcSrv_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "morai_msgs/srv/detail/morai_sim_proc_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "morai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "morai_msgs/srv/detail/morai_sim_proc_srv__functions.h"
// already included above
// #include "morai_msgs/srv/detail/morai_sim_proc_srv__struct.h"


// Include directives for member types
// Member `response`
#include "morai_msgs/msg/morai_srv_response.h"
// Member `response`
#include "morai_msgs/msg/detail/morai_srv_response__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoraiSimProcSrv_Response__rosidl_typesupport_introspection_c__MoraiSimProcSrv_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  morai_msgs__srv__MoraiSimProcSrv_Response__init(message_memory);
}

void MoraiSimProcSrv_Response__rosidl_typesupport_introspection_c__MoraiSimProcSrv_Response_fini_function(void * message_memory)
{
  morai_msgs__srv__MoraiSimProcSrv_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoraiSimProcSrv_Response__rosidl_typesupport_introspection_c__MoraiSimProcSrv_Response_message_member_array[1] = {
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(morai_msgs__srv__MoraiSimProcSrv_Response, response),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoraiSimProcSrv_Response__rosidl_typesupport_introspection_c__MoraiSimProcSrv_Response_message_members = {
  "morai_msgs__srv",  // message namespace
  "MoraiSimProcSrv_Response",  // message name
  1,  // number of fields
  sizeof(morai_msgs__srv__MoraiSimProcSrv_Response),
  MoraiSimProcSrv_Response__rosidl_typesupport_introspection_c__MoraiSimProcSrv_Response_message_member_array,  // message members
  MoraiSimProcSrv_Response__rosidl_typesupport_introspection_c__MoraiSimProcSrv_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MoraiSimProcSrv_Response__rosidl_typesupport_introspection_c__MoraiSimProcSrv_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoraiSimProcSrv_Response__rosidl_typesupport_introspection_c__MoraiSimProcSrv_Response_message_type_support_handle = {
  0,
  &MoraiSimProcSrv_Response__rosidl_typesupport_introspection_c__MoraiSimProcSrv_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_morai_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, srv, MoraiSimProcSrv_Response)() {
  MoraiSimProcSrv_Response__rosidl_typesupport_introspection_c__MoraiSimProcSrv_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, msg, MoraiSrvResponse)();
  if (!MoraiSimProcSrv_Response__rosidl_typesupport_introspection_c__MoraiSimProcSrv_Response_message_type_support_handle.typesupport_identifier) {
    MoraiSimProcSrv_Response__rosidl_typesupport_introspection_c__MoraiSimProcSrv_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoraiSimProcSrv_Response__rosidl_typesupport_introspection_c__MoraiSimProcSrv_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "morai_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "morai_msgs/srv/detail/morai_sim_proc_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers morai_msgs__srv__detail__morai_sim_proc_srv__rosidl_typesupport_introspection_c__MoraiSimProcSrv_service_members = {
  "morai_msgs__srv",  // service namespace
  "MoraiSimProcSrv",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // morai_msgs__srv__detail__morai_sim_proc_srv__rosidl_typesupport_introspection_c__MoraiSimProcSrv_Request_message_type_support_handle,
  NULL  // response message
  // morai_msgs__srv__detail__morai_sim_proc_srv__rosidl_typesupport_introspection_c__MoraiSimProcSrv_Response_message_type_support_handle
};

static rosidl_service_type_support_t morai_msgs__srv__detail__morai_sim_proc_srv__rosidl_typesupport_introspection_c__MoraiSimProcSrv_service_type_support_handle = {
  0,
  &morai_msgs__srv__detail__morai_sim_proc_srv__rosidl_typesupport_introspection_c__MoraiSimProcSrv_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, srv, MoraiSimProcSrv_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, srv, MoraiSimProcSrv_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_morai_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, srv, MoraiSimProcSrv)() {
  if (!morai_msgs__srv__detail__morai_sim_proc_srv__rosidl_typesupport_introspection_c__MoraiSimProcSrv_service_type_support_handle.typesupport_identifier) {
    morai_msgs__srv__detail__morai_sim_proc_srv__rosidl_typesupport_introspection_c__MoraiSimProcSrv_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)morai_msgs__srv__detail__morai_sim_proc_srv__rosidl_typesupport_introspection_c__MoraiSimProcSrv_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, srv, MoraiSimProcSrv_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, morai_msgs, srv, MoraiSimProcSrv_Response)()->data;
  }

  return &morai_msgs__srv__detail__morai_sim_proc_srv__rosidl_typesupport_introspection_c__MoraiSimProcSrv_service_type_support_handle;
}
