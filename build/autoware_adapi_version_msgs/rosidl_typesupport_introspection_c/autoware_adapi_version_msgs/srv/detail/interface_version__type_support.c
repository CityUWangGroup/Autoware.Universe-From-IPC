// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_adapi_version_msgs:srv/InterfaceVersion.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_adapi_version_msgs/srv/detail/interface_version__rosidl_typesupport_introspection_c.h"
#include "autoware_adapi_version_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_adapi_version_msgs/srv/detail/interface_version__functions.h"
#include "autoware_adapi_version_msgs/srv/detail/interface_version__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void InterfaceVersion_Request__rosidl_typesupport_introspection_c__InterfaceVersion_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_adapi_version_msgs__srv__InterfaceVersion_Request__init(message_memory);
}

void InterfaceVersion_Request__rosidl_typesupport_introspection_c__InterfaceVersion_Request_fini_function(void * message_memory)
{
  autoware_adapi_version_msgs__srv__InterfaceVersion_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember InterfaceVersion_Request__rosidl_typesupport_introspection_c__InterfaceVersion_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_version_msgs__srv__InterfaceVersion_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers InterfaceVersion_Request__rosidl_typesupport_introspection_c__InterfaceVersion_Request_message_members = {
  "autoware_adapi_version_msgs__srv",  // message namespace
  "InterfaceVersion_Request",  // message name
  1,  // number of fields
  sizeof(autoware_adapi_version_msgs__srv__InterfaceVersion_Request),
  InterfaceVersion_Request__rosidl_typesupport_introspection_c__InterfaceVersion_Request_message_member_array,  // message members
  InterfaceVersion_Request__rosidl_typesupport_introspection_c__InterfaceVersion_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  InterfaceVersion_Request__rosidl_typesupport_introspection_c__InterfaceVersion_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t InterfaceVersion_Request__rosidl_typesupport_introspection_c__InterfaceVersion_Request_message_type_support_handle = {
  0,
  &InterfaceVersion_Request__rosidl_typesupport_introspection_c__InterfaceVersion_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_adapi_version_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_version_msgs, srv, InterfaceVersion_Request)() {
  if (!InterfaceVersion_Request__rosidl_typesupport_introspection_c__InterfaceVersion_Request_message_type_support_handle.typesupport_identifier) {
    InterfaceVersion_Request__rosidl_typesupport_introspection_c__InterfaceVersion_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &InterfaceVersion_Request__rosidl_typesupport_introspection_c__InterfaceVersion_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "autoware_adapi_version_msgs/srv/detail/interface_version__rosidl_typesupport_introspection_c.h"
// already included above
// #include "autoware_adapi_version_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "autoware_adapi_version_msgs/srv/detail/interface_version__functions.h"
// already included above
// #include "autoware_adapi_version_msgs/srv/detail/interface_version__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void InterfaceVersion_Response__rosidl_typesupport_introspection_c__InterfaceVersion_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_adapi_version_msgs__srv__InterfaceVersion_Response__init(message_memory);
}

void InterfaceVersion_Response__rosidl_typesupport_introspection_c__InterfaceVersion_Response_fini_function(void * message_memory)
{
  autoware_adapi_version_msgs__srv__InterfaceVersion_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember InterfaceVersion_Response__rosidl_typesupport_introspection_c__InterfaceVersion_Response_message_member_array[3] = {
  {
    "major",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_version_msgs__srv__InterfaceVersion_Response, major),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "minor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_version_msgs__srv__InterfaceVersion_Response, minor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "patch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_version_msgs__srv__InterfaceVersion_Response, patch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers InterfaceVersion_Response__rosidl_typesupport_introspection_c__InterfaceVersion_Response_message_members = {
  "autoware_adapi_version_msgs__srv",  // message namespace
  "InterfaceVersion_Response",  // message name
  3,  // number of fields
  sizeof(autoware_adapi_version_msgs__srv__InterfaceVersion_Response),
  InterfaceVersion_Response__rosidl_typesupport_introspection_c__InterfaceVersion_Response_message_member_array,  // message members
  InterfaceVersion_Response__rosidl_typesupport_introspection_c__InterfaceVersion_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  InterfaceVersion_Response__rosidl_typesupport_introspection_c__InterfaceVersion_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t InterfaceVersion_Response__rosidl_typesupport_introspection_c__InterfaceVersion_Response_message_type_support_handle = {
  0,
  &InterfaceVersion_Response__rosidl_typesupport_introspection_c__InterfaceVersion_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_adapi_version_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_version_msgs, srv, InterfaceVersion_Response)() {
  if (!InterfaceVersion_Response__rosidl_typesupport_introspection_c__InterfaceVersion_Response_message_type_support_handle.typesupport_identifier) {
    InterfaceVersion_Response__rosidl_typesupport_introspection_c__InterfaceVersion_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &InterfaceVersion_Response__rosidl_typesupport_introspection_c__InterfaceVersion_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "autoware_adapi_version_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "autoware_adapi_version_msgs/srv/detail/interface_version__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers autoware_adapi_version_msgs__srv__detail__interface_version__rosidl_typesupport_introspection_c__InterfaceVersion_service_members = {
  "autoware_adapi_version_msgs__srv",  // service namespace
  "InterfaceVersion",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // autoware_adapi_version_msgs__srv__detail__interface_version__rosidl_typesupport_introspection_c__InterfaceVersion_Request_message_type_support_handle,
  NULL  // response message
  // autoware_adapi_version_msgs__srv__detail__interface_version__rosidl_typesupport_introspection_c__InterfaceVersion_Response_message_type_support_handle
};

static rosidl_service_type_support_t autoware_adapi_version_msgs__srv__detail__interface_version__rosidl_typesupport_introspection_c__InterfaceVersion_service_type_support_handle = {
  0,
  &autoware_adapi_version_msgs__srv__detail__interface_version__rosidl_typesupport_introspection_c__InterfaceVersion_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_version_msgs, srv, InterfaceVersion_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_version_msgs, srv, InterfaceVersion_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_adapi_version_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_version_msgs, srv, InterfaceVersion)() {
  if (!autoware_adapi_version_msgs__srv__detail__interface_version__rosidl_typesupport_introspection_c__InterfaceVersion_service_type_support_handle.typesupport_identifier) {
    autoware_adapi_version_msgs__srv__detail__interface_version__rosidl_typesupport_introspection_c__InterfaceVersion_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)autoware_adapi_version_msgs__srv__detail__interface_version__rosidl_typesupport_introspection_c__InterfaceVersion_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_version_msgs, srv, InterfaceVersion_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_version_msgs, srv, InterfaceVersion_Response)()->data;
  }

  return &autoware_adapi_version_msgs__srv__detail__interface_version__rosidl_typesupport_introspection_c__InterfaceVersion_service_type_support_handle;
}
