// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from grid_map_msgs:srv/GetGridMapInfo.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "grid_map_msgs/srv/detail/get_grid_map_info__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace grid_map_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetGridMapInfo_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetGridMapInfo_Request_type_support_ids_t;

static const _GetGridMapInfo_Request_type_support_ids_t _GetGridMapInfo_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetGridMapInfo_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetGridMapInfo_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetGridMapInfo_Request_type_support_symbol_names_t _GetGridMapInfo_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, grid_map_msgs, srv, GetGridMapInfo_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grid_map_msgs, srv, GetGridMapInfo_Request)),
  }
};

typedef struct _GetGridMapInfo_Request_type_support_data_t
{
  void * data[2];
} _GetGridMapInfo_Request_type_support_data_t;

static _GetGridMapInfo_Request_type_support_data_t _GetGridMapInfo_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetGridMapInfo_Request_message_typesupport_map = {
  2,
  "grid_map_msgs",
  &_GetGridMapInfo_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetGridMapInfo_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetGridMapInfo_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetGridMapInfo_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetGridMapInfo_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace grid_map_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<grid_map_msgs::srv::GetGridMapInfo_Request>()
{
  return &::grid_map_msgs::srv::rosidl_typesupport_cpp::GetGridMapInfo_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, grid_map_msgs, srv, GetGridMapInfo_Request)() {
  return get_message_type_support_handle<grid_map_msgs::srv::GetGridMapInfo_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "grid_map_msgs/srv/detail/get_grid_map_info__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace grid_map_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetGridMapInfo_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetGridMapInfo_Response_type_support_ids_t;

static const _GetGridMapInfo_Response_type_support_ids_t _GetGridMapInfo_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetGridMapInfo_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetGridMapInfo_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetGridMapInfo_Response_type_support_symbol_names_t _GetGridMapInfo_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, grid_map_msgs, srv, GetGridMapInfo_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grid_map_msgs, srv, GetGridMapInfo_Response)),
  }
};

typedef struct _GetGridMapInfo_Response_type_support_data_t
{
  void * data[2];
} _GetGridMapInfo_Response_type_support_data_t;

static _GetGridMapInfo_Response_type_support_data_t _GetGridMapInfo_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetGridMapInfo_Response_message_typesupport_map = {
  2,
  "grid_map_msgs",
  &_GetGridMapInfo_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetGridMapInfo_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetGridMapInfo_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetGridMapInfo_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetGridMapInfo_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace grid_map_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<grid_map_msgs::srv::GetGridMapInfo_Response>()
{
  return &::grid_map_msgs::srv::rosidl_typesupport_cpp::GetGridMapInfo_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, grid_map_msgs, srv, GetGridMapInfo_Response)() {
  return get_message_type_support_handle<grid_map_msgs::srv::GetGridMapInfo_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "grid_map_msgs/srv/detail/get_grid_map_info__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace grid_map_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetGridMapInfo_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetGridMapInfo_type_support_ids_t;

static const _GetGridMapInfo_type_support_ids_t _GetGridMapInfo_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetGridMapInfo_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetGridMapInfo_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetGridMapInfo_type_support_symbol_names_t _GetGridMapInfo_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, grid_map_msgs, srv, GetGridMapInfo)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grid_map_msgs, srv, GetGridMapInfo)),
  }
};

typedef struct _GetGridMapInfo_type_support_data_t
{
  void * data[2];
} _GetGridMapInfo_type_support_data_t;

static _GetGridMapInfo_type_support_data_t _GetGridMapInfo_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetGridMapInfo_service_typesupport_map = {
  2,
  "grid_map_msgs",
  &_GetGridMapInfo_service_typesupport_ids.typesupport_identifier[0],
  &_GetGridMapInfo_service_typesupport_symbol_names.symbol_name[0],
  &_GetGridMapInfo_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetGridMapInfo_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetGridMapInfo_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace grid_map_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<grid_map_msgs::srv::GetGridMapInfo>()
{
  return &::grid_map_msgs::srv::rosidl_typesupport_cpp::GetGridMapInfo_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
