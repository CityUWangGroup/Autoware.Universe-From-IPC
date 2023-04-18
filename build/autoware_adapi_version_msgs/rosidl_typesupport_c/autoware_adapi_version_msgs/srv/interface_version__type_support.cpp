// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from autoware_adapi_version_msgs:srv/InterfaceVersion.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "autoware_adapi_version_msgs/msg/rosidl_typesupport_c__visibility_control.h"
#include "autoware_adapi_version_msgs/srv/detail/interface_version__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace autoware_adapi_version_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _InterfaceVersion_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InterfaceVersion_Request_type_support_ids_t;

static const _InterfaceVersion_Request_type_support_ids_t _InterfaceVersion_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _InterfaceVersion_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InterfaceVersion_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InterfaceVersion_Request_type_support_symbol_names_t _InterfaceVersion_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_adapi_version_msgs, srv, InterfaceVersion_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_version_msgs, srv, InterfaceVersion_Request)),
  }
};

typedef struct _InterfaceVersion_Request_type_support_data_t
{
  void * data[2];
} _InterfaceVersion_Request_type_support_data_t;

static _InterfaceVersion_Request_type_support_data_t _InterfaceVersion_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InterfaceVersion_Request_message_typesupport_map = {
  2,
  "autoware_adapi_version_msgs",
  &_InterfaceVersion_Request_message_typesupport_ids.typesupport_identifier[0],
  &_InterfaceVersion_Request_message_typesupport_symbol_names.symbol_name[0],
  &_InterfaceVersion_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t InterfaceVersion_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InterfaceVersion_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace autoware_adapi_version_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_autoware_adapi_version_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, autoware_adapi_version_msgs, srv, InterfaceVersion_Request)() {
  return &::autoware_adapi_version_msgs::srv::rosidl_typesupport_c::InterfaceVersion_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "autoware_adapi_version_msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "autoware_adapi_version_msgs/srv/detail/interface_version__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace autoware_adapi_version_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _InterfaceVersion_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InterfaceVersion_Response_type_support_ids_t;

static const _InterfaceVersion_Response_type_support_ids_t _InterfaceVersion_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _InterfaceVersion_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InterfaceVersion_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InterfaceVersion_Response_type_support_symbol_names_t _InterfaceVersion_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_adapi_version_msgs, srv, InterfaceVersion_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_version_msgs, srv, InterfaceVersion_Response)),
  }
};

typedef struct _InterfaceVersion_Response_type_support_data_t
{
  void * data[2];
} _InterfaceVersion_Response_type_support_data_t;

static _InterfaceVersion_Response_type_support_data_t _InterfaceVersion_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InterfaceVersion_Response_message_typesupport_map = {
  2,
  "autoware_adapi_version_msgs",
  &_InterfaceVersion_Response_message_typesupport_ids.typesupport_identifier[0],
  &_InterfaceVersion_Response_message_typesupport_symbol_names.symbol_name[0],
  &_InterfaceVersion_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t InterfaceVersion_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InterfaceVersion_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace autoware_adapi_version_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_autoware_adapi_version_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, autoware_adapi_version_msgs, srv, InterfaceVersion_Response)() {
  return &::autoware_adapi_version_msgs::srv::rosidl_typesupport_c::InterfaceVersion_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "autoware_adapi_version_msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace autoware_adapi_version_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _InterfaceVersion_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _InterfaceVersion_type_support_ids_t;

static const _InterfaceVersion_type_support_ids_t _InterfaceVersion_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _InterfaceVersion_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _InterfaceVersion_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _InterfaceVersion_type_support_symbol_names_t _InterfaceVersion_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_adapi_version_msgs, srv, InterfaceVersion)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_version_msgs, srv, InterfaceVersion)),
  }
};

typedef struct _InterfaceVersion_type_support_data_t
{
  void * data[2];
} _InterfaceVersion_type_support_data_t;

static _InterfaceVersion_type_support_data_t _InterfaceVersion_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _InterfaceVersion_service_typesupport_map = {
  2,
  "autoware_adapi_version_msgs",
  &_InterfaceVersion_service_typesupport_ids.typesupport_identifier[0],
  &_InterfaceVersion_service_typesupport_symbol_names.symbol_name[0],
  &_InterfaceVersion_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t InterfaceVersion_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_InterfaceVersion_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace autoware_adapi_version_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_autoware_adapi_version_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, autoware_adapi_version_msgs, srv, InterfaceVersion)() {
  return &::autoware_adapi_version_msgs::srv::rosidl_typesupport_c::InterfaceVersion_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
