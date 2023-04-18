// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from grid_map_msgs:srv/GetGridMapInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "grid_map_msgs/srv/detail/get_grid_map_info__rosidl_typesupport_introspection_c.h"
#include "grid_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "grid_map_msgs/srv/detail/get_grid_map_info__functions.h"
#include "grid_map_msgs/srv/detail/get_grid_map_info__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GetGridMapInfo_Request__rosidl_typesupport_introspection_c__GetGridMapInfo_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  grid_map_msgs__srv__GetGridMapInfo_Request__init(message_memory);
}

void GetGridMapInfo_Request__rosidl_typesupport_introspection_c__GetGridMapInfo_Request_fini_function(void * message_memory)
{
  grid_map_msgs__srv__GetGridMapInfo_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetGridMapInfo_Request__rosidl_typesupport_introspection_c__GetGridMapInfo_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grid_map_msgs__srv__GetGridMapInfo_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetGridMapInfo_Request__rosidl_typesupport_introspection_c__GetGridMapInfo_Request_message_members = {
  "grid_map_msgs__srv",  // message namespace
  "GetGridMapInfo_Request",  // message name
  1,  // number of fields
  sizeof(grid_map_msgs__srv__GetGridMapInfo_Request),
  GetGridMapInfo_Request__rosidl_typesupport_introspection_c__GetGridMapInfo_Request_message_member_array,  // message members
  GetGridMapInfo_Request__rosidl_typesupport_introspection_c__GetGridMapInfo_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetGridMapInfo_Request__rosidl_typesupport_introspection_c__GetGridMapInfo_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetGridMapInfo_Request__rosidl_typesupport_introspection_c__GetGridMapInfo_Request_message_type_support_handle = {
  0,
  &GetGridMapInfo_Request__rosidl_typesupport_introspection_c__GetGridMapInfo_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grid_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grid_map_msgs, srv, GetGridMapInfo_Request)() {
  if (!GetGridMapInfo_Request__rosidl_typesupport_introspection_c__GetGridMapInfo_Request_message_type_support_handle.typesupport_identifier) {
    GetGridMapInfo_Request__rosidl_typesupport_introspection_c__GetGridMapInfo_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetGridMapInfo_Request__rosidl_typesupport_introspection_c__GetGridMapInfo_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "grid_map_msgs/srv/detail/get_grid_map_info__rosidl_typesupport_introspection_c.h"
// already included above
// #include "grid_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "grid_map_msgs/srv/detail/get_grid_map_info__functions.h"
// already included above
// #include "grid_map_msgs/srv/detail/get_grid_map_info__struct.h"


// Include directives for member types
// Member `info`
#include "grid_map_msgs/msg/grid_map_info.h"
// Member `info`
#include "grid_map_msgs/msg/detail/grid_map_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetGridMapInfo_Response__rosidl_typesupport_introspection_c__GetGridMapInfo_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  grid_map_msgs__srv__GetGridMapInfo_Response__init(message_memory);
}

void GetGridMapInfo_Response__rosidl_typesupport_introspection_c__GetGridMapInfo_Response_fini_function(void * message_memory)
{
  grid_map_msgs__srv__GetGridMapInfo_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetGridMapInfo_Response__rosidl_typesupport_introspection_c__GetGridMapInfo_Response_message_member_array[1] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grid_map_msgs__srv__GetGridMapInfo_Response, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetGridMapInfo_Response__rosidl_typesupport_introspection_c__GetGridMapInfo_Response_message_members = {
  "grid_map_msgs__srv",  // message namespace
  "GetGridMapInfo_Response",  // message name
  1,  // number of fields
  sizeof(grid_map_msgs__srv__GetGridMapInfo_Response),
  GetGridMapInfo_Response__rosidl_typesupport_introspection_c__GetGridMapInfo_Response_message_member_array,  // message members
  GetGridMapInfo_Response__rosidl_typesupport_introspection_c__GetGridMapInfo_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetGridMapInfo_Response__rosidl_typesupport_introspection_c__GetGridMapInfo_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetGridMapInfo_Response__rosidl_typesupport_introspection_c__GetGridMapInfo_Response_message_type_support_handle = {
  0,
  &GetGridMapInfo_Response__rosidl_typesupport_introspection_c__GetGridMapInfo_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grid_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grid_map_msgs, srv, GetGridMapInfo_Response)() {
  GetGridMapInfo_Response__rosidl_typesupport_introspection_c__GetGridMapInfo_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grid_map_msgs, msg, GridMapInfo)();
  if (!GetGridMapInfo_Response__rosidl_typesupport_introspection_c__GetGridMapInfo_Response_message_type_support_handle.typesupport_identifier) {
    GetGridMapInfo_Response__rosidl_typesupport_introspection_c__GetGridMapInfo_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetGridMapInfo_Response__rosidl_typesupport_introspection_c__GetGridMapInfo_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "grid_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "grid_map_msgs/srv/detail/get_grid_map_info__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers grid_map_msgs__srv__detail__get_grid_map_info__rosidl_typesupport_introspection_c__GetGridMapInfo_service_members = {
  "grid_map_msgs__srv",  // service namespace
  "GetGridMapInfo",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // grid_map_msgs__srv__detail__get_grid_map_info__rosidl_typesupport_introspection_c__GetGridMapInfo_Request_message_type_support_handle,
  NULL  // response message
  // grid_map_msgs__srv__detail__get_grid_map_info__rosidl_typesupport_introspection_c__GetGridMapInfo_Response_message_type_support_handle
};

static rosidl_service_type_support_t grid_map_msgs__srv__detail__get_grid_map_info__rosidl_typesupport_introspection_c__GetGridMapInfo_service_type_support_handle = {
  0,
  &grid_map_msgs__srv__detail__get_grid_map_info__rosidl_typesupport_introspection_c__GetGridMapInfo_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grid_map_msgs, srv, GetGridMapInfo_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grid_map_msgs, srv, GetGridMapInfo_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grid_map_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grid_map_msgs, srv, GetGridMapInfo)() {
  if (!grid_map_msgs__srv__detail__get_grid_map_info__rosidl_typesupport_introspection_c__GetGridMapInfo_service_type_support_handle.typesupport_identifier) {
    grid_map_msgs__srv__detail__get_grid_map_info__rosidl_typesupport_introspection_c__GetGridMapInfo_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)grid_map_msgs__srv__detail__get_grid_map_info__rosidl_typesupport_introspection_c__GetGridMapInfo_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grid_map_msgs, srv, GetGridMapInfo_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grid_map_msgs, srv, GetGridMapInfo_Response)()->data;
  }

  return &grid_map_msgs__srv__detail__get_grid_map_info__rosidl_typesupport_introspection_c__GetGridMapInfo_service_type_support_handle;
}
