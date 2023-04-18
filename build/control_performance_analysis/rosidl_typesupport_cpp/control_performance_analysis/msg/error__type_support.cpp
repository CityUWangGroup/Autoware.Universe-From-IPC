// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from control_performance_analysis:msg/Error.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "control_performance_analysis/msg/detail/error__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace control_performance_analysis
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _Error_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Error_type_support_ids_t;

static const _Error_type_support_ids_t _Error_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Error_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Error_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Error_type_support_symbol_names_t _Error_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, control_performance_analysis, msg, Error)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, control_performance_analysis, msg, Error)),
  }
};

typedef struct _Error_type_support_data_t
{
  void * data[2];
} _Error_type_support_data_t;

static _Error_type_support_data_t _Error_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Error_message_typesupport_map = {
  2,
  "control_performance_analysis",
  &_Error_message_typesupport_ids.typesupport_identifier[0],
  &_Error_message_typesupport_symbol_names.symbol_name[0],
  &_Error_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Error_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Error_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace control_performance_analysis

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<control_performance_analysis::msg::Error>()
{
  return &::control_performance_analysis::msg::rosidl_typesupport_cpp::Error_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, control_performance_analysis, msg, Error)() {
  return get_message_type_support_handle<control_performance_analysis::msg::Error>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
