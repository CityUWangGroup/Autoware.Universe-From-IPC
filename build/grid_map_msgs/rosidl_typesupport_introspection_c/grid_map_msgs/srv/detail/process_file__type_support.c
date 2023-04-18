// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from grid_map_msgs:srv/ProcessFile.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "grid_map_msgs/srv/detail/process_file__rosidl_typesupport_introspection_c.h"
#include "grid_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "grid_map_msgs/srv/detail/process_file__functions.h"
#include "grid_map_msgs/srv/detail/process_file__struct.h"


// Include directives for member types
// Member `file_path`
// Member `topic_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ProcessFile_Request__rosidl_typesupport_introspection_c__ProcessFile_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  grid_map_msgs__srv__ProcessFile_Request__init(message_memory);
}

void ProcessFile_Request__rosidl_typesupport_introspection_c__ProcessFile_Request_fini_function(void * message_memory)
{
  grid_map_msgs__srv__ProcessFile_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ProcessFile_Request__rosidl_typesupport_introspection_c__ProcessFile_Request_message_member_array[2] = {
  {
    "file_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grid_map_msgs__srv__ProcessFile_Request, file_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "topic_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grid_map_msgs__srv__ProcessFile_Request, topic_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ProcessFile_Request__rosidl_typesupport_introspection_c__ProcessFile_Request_message_members = {
  "grid_map_msgs__srv",  // message namespace
  "ProcessFile_Request",  // message name
  2,  // number of fields
  sizeof(grid_map_msgs__srv__ProcessFile_Request),
  ProcessFile_Request__rosidl_typesupport_introspection_c__ProcessFile_Request_message_member_array,  // message members
  ProcessFile_Request__rosidl_typesupport_introspection_c__ProcessFile_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ProcessFile_Request__rosidl_typesupport_introspection_c__ProcessFile_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ProcessFile_Request__rosidl_typesupport_introspection_c__ProcessFile_Request_message_type_support_handle = {
  0,
  &ProcessFile_Request__rosidl_typesupport_introspection_c__ProcessFile_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grid_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grid_map_msgs, srv, ProcessFile_Request)() {
  if (!ProcessFile_Request__rosidl_typesupport_introspection_c__ProcessFile_Request_message_type_support_handle.typesupport_identifier) {
    ProcessFile_Request__rosidl_typesupport_introspection_c__ProcessFile_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ProcessFile_Request__rosidl_typesupport_introspection_c__ProcessFile_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "grid_map_msgs/srv/detail/process_file__rosidl_typesupport_introspection_c.h"
// already included above
// #include "grid_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "grid_map_msgs/srv/detail/process_file__functions.h"
// already included above
// #include "grid_map_msgs/srv/detail/process_file__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ProcessFile_Response__rosidl_typesupport_introspection_c__ProcessFile_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  grid_map_msgs__srv__ProcessFile_Response__init(message_memory);
}

void ProcessFile_Response__rosidl_typesupport_introspection_c__ProcessFile_Response_fini_function(void * message_memory)
{
  grid_map_msgs__srv__ProcessFile_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ProcessFile_Response__rosidl_typesupport_introspection_c__ProcessFile_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grid_map_msgs__srv__ProcessFile_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ProcessFile_Response__rosidl_typesupport_introspection_c__ProcessFile_Response_message_members = {
  "grid_map_msgs__srv",  // message namespace
  "ProcessFile_Response",  // message name
  1,  // number of fields
  sizeof(grid_map_msgs__srv__ProcessFile_Response),
  ProcessFile_Response__rosidl_typesupport_introspection_c__ProcessFile_Response_message_member_array,  // message members
  ProcessFile_Response__rosidl_typesupport_introspection_c__ProcessFile_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ProcessFile_Response__rosidl_typesupport_introspection_c__ProcessFile_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ProcessFile_Response__rosidl_typesupport_introspection_c__ProcessFile_Response_message_type_support_handle = {
  0,
  &ProcessFile_Response__rosidl_typesupport_introspection_c__ProcessFile_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grid_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grid_map_msgs, srv, ProcessFile_Response)() {
  if (!ProcessFile_Response__rosidl_typesupport_introspection_c__ProcessFile_Response_message_type_support_handle.typesupport_identifier) {
    ProcessFile_Response__rosidl_typesupport_introspection_c__ProcessFile_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ProcessFile_Response__rosidl_typesupport_introspection_c__ProcessFile_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "grid_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "grid_map_msgs/srv/detail/process_file__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers grid_map_msgs__srv__detail__process_file__rosidl_typesupport_introspection_c__ProcessFile_service_members = {
  "grid_map_msgs__srv",  // service namespace
  "ProcessFile",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // grid_map_msgs__srv__detail__process_file__rosidl_typesupport_introspection_c__ProcessFile_Request_message_type_support_handle,
  NULL  // response message
  // grid_map_msgs__srv__detail__process_file__rosidl_typesupport_introspection_c__ProcessFile_Response_message_type_support_handle
};

static rosidl_service_type_support_t grid_map_msgs__srv__detail__process_file__rosidl_typesupport_introspection_c__ProcessFile_service_type_support_handle = {
  0,
  &grid_map_msgs__srv__detail__process_file__rosidl_typesupport_introspection_c__ProcessFile_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grid_map_msgs, srv, ProcessFile_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grid_map_msgs, srv, ProcessFile_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grid_map_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grid_map_msgs, srv, ProcessFile)() {
  if (!grid_map_msgs__srv__detail__process_file__rosidl_typesupport_introspection_c__ProcessFile_service_type_support_handle.typesupport_identifier) {
    grid_map_msgs__srv__detail__process_file__rosidl_typesupport_introspection_c__ProcessFile_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)grid_map_msgs__srv__detail__process_file__rosidl_typesupport_introspection_c__ProcessFile_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grid_map_msgs, srv, ProcessFile_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grid_map_msgs, srv, ProcessFile_Response)()->data;
  }

  return &grid_map_msgs__srv__detail__process_file__rosidl_typesupport_introspection_c__ProcessFile_service_type_support_handle;
}
