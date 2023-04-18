// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_external_api_msgs:srv/GetMetadataPackages.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_external_api_msgs/srv/detail/get_metadata_packages__rosidl_typesupport_introspection_c.h"
#include "tier4_external_api_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_external_api_msgs/srv/detail/get_metadata_packages__functions.h"
#include "tier4_external_api_msgs/srv/detail/get_metadata_packages__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GetMetadataPackages_Request__rosidl_typesupport_introspection_c__GetMetadataPackages_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_external_api_msgs__srv__GetMetadataPackages_Request__init(message_memory);
}

void GetMetadataPackages_Request__rosidl_typesupport_introspection_c__GetMetadataPackages_Request_fini_function(void * message_memory)
{
  tier4_external_api_msgs__srv__GetMetadataPackages_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetMetadataPackages_Request__rosidl_typesupport_introspection_c__GetMetadataPackages_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__srv__GetMetadataPackages_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetMetadataPackages_Request__rosidl_typesupport_introspection_c__GetMetadataPackages_Request_message_members = {
  "tier4_external_api_msgs__srv",  // message namespace
  "GetMetadataPackages_Request",  // message name
  1,  // number of fields
  sizeof(tier4_external_api_msgs__srv__GetMetadataPackages_Request),
  GetMetadataPackages_Request__rosidl_typesupport_introspection_c__GetMetadataPackages_Request_message_member_array,  // message members
  GetMetadataPackages_Request__rosidl_typesupport_introspection_c__GetMetadataPackages_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetMetadataPackages_Request__rosidl_typesupport_introspection_c__GetMetadataPackages_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetMetadataPackages_Request__rosidl_typesupport_introspection_c__GetMetadataPackages_Request_message_type_support_handle = {
  0,
  &GetMetadataPackages_Request__rosidl_typesupport_introspection_c__GetMetadataPackages_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_external_api_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_external_api_msgs, srv, GetMetadataPackages_Request)() {
  if (!GetMetadataPackages_Request__rosidl_typesupport_introspection_c__GetMetadataPackages_Request_message_type_support_handle.typesupport_identifier) {
    GetMetadataPackages_Request__rosidl_typesupport_introspection_c__GetMetadataPackages_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetMetadataPackages_Request__rosidl_typesupport_introspection_c__GetMetadataPackages_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tier4_external_api_msgs/srv/detail/get_metadata_packages__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tier4_external_api_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tier4_external_api_msgs/srv/detail/get_metadata_packages__functions.h"
// already included above
// #include "tier4_external_api_msgs/srv/detail/get_metadata_packages__struct.h"


// Include directives for member types
// Member `status`
#include "tier4_external_api_msgs/msg/response_status.h"
// Member `status`
#include "tier4_external_api_msgs/msg/detail/response_status__rosidl_typesupport_introspection_c.h"
// Member `metadata`
#include "tier4_external_api_msgs/msg/metadata_packages.h"
// Member `metadata`
#include "tier4_external_api_msgs/msg/detail/metadata_packages__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetMetadataPackages_Response__rosidl_typesupport_introspection_c__GetMetadataPackages_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_external_api_msgs__srv__GetMetadataPackages_Response__init(message_memory);
}

void GetMetadataPackages_Response__rosidl_typesupport_introspection_c__GetMetadataPackages_Response_fini_function(void * message_memory)
{
  tier4_external_api_msgs__srv__GetMetadataPackages_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetMetadataPackages_Response__rosidl_typesupport_introspection_c__GetMetadataPackages_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__srv__GetMetadataPackages_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "metadata",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__srv__GetMetadataPackages_Response, metadata),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetMetadataPackages_Response__rosidl_typesupport_introspection_c__GetMetadataPackages_Response_message_members = {
  "tier4_external_api_msgs__srv",  // message namespace
  "GetMetadataPackages_Response",  // message name
  2,  // number of fields
  sizeof(tier4_external_api_msgs__srv__GetMetadataPackages_Response),
  GetMetadataPackages_Response__rosidl_typesupport_introspection_c__GetMetadataPackages_Response_message_member_array,  // message members
  GetMetadataPackages_Response__rosidl_typesupport_introspection_c__GetMetadataPackages_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetMetadataPackages_Response__rosidl_typesupport_introspection_c__GetMetadataPackages_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetMetadataPackages_Response__rosidl_typesupport_introspection_c__GetMetadataPackages_Response_message_type_support_handle = {
  0,
  &GetMetadataPackages_Response__rosidl_typesupport_introspection_c__GetMetadataPackages_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_external_api_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_external_api_msgs, srv, GetMetadataPackages_Response)() {
  GetMetadataPackages_Response__rosidl_typesupport_introspection_c__GetMetadataPackages_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_external_api_msgs, msg, ResponseStatus)();
  GetMetadataPackages_Response__rosidl_typesupport_introspection_c__GetMetadataPackages_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_external_api_msgs, msg, MetadataPackages)();
  if (!GetMetadataPackages_Response__rosidl_typesupport_introspection_c__GetMetadataPackages_Response_message_type_support_handle.typesupport_identifier) {
    GetMetadataPackages_Response__rosidl_typesupport_introspection_c__GetMetadataPackages_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetMetadataPackages_Response__rosidl_typesupport_introspection_c__GetMetadataPackages_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tier4_external_api_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tier4_external_api_msgs/srv/detail/get_metadata_packages__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tier4_external_api_msgs__srv__detail__get_metadata_packages__rosidl_typesupport_introspection_c__GetMetadataPackages_service_members = {
  "tier4_external_api_msgs__srv",  // service namespace
  "GetMetadataPackages",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tier4_external_api_msgs__srv__detail__get_metadata_packages__rosidl_typesupport_introspection_c__GetMetadataPackages_Request_message_type_support_handle,
  NULL  // response message
  // tier4_external_api_msgs__srv__detail__get_metadata_packages__rosidl_typesupport_introspection_c__GetMetadataPackages_Response_message_type_support_handle
};

static rosidl_service_type_support_t tier4_external_api_msgs__srv__detail__get_metadata_packages__rosidl_typesupport_introspection_c__GetMetadataPackages_service_type_support_handle = {
  0,
  &tier4_external_api_msgs__srv__detail__get_metadata_packages__rosidl_typesupport_introspection_c__GetMetadataPackages_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_external_api_msgs, srv, GetMetadataPackages_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_external_api_msgs, srv, GetMetadataPackages_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_external_api_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_external_api_msgs, srv, GetMetadataPackages)() {
  if (!tier4_external_api_msgs__srv__detail__get_metadata_packages__rosidl_typesupport_introspection_c__GetMetadataPackages_service_type_support_handle.typesupport_identifier) {
    tier4_external_api_msgs__srv__detail__get_metadata_packages__rosidl_typesupport_introspection_c__GetMetadataPackages_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tier4_external_api_msgs__srv__detail__get_metadata_packages__rosidl_typesupport_introspection_c__GetMetadataPackages_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_external_api_msgs, srv, GetMetadataPackages_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_external_api_msgs, srv, GetMetadataPackages_Response)()->data;
  }

  return &tier4_external_api_msgs__srv__detail__get_metadata_packages__rosidl_typesupport_introspection_c__GetMetadataPackages_service_type_support_handle;
}