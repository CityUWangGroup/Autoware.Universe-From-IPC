// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_external_api_msgs:msg/MetadataPackages.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_external_api_msgs/msg/detail/metadata_packages__rosidl_typesupport_introspection_c.h"
#include "tier4_external_api_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_external_api_msgs/msg/detail/metadata_packages__functions.h"
#include "tier4_external_api_msgs/msg/detail/metadata_packages__struct.h"


// Include directives for member types
// Member `format`
// Member `json`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MetadataPackages__rosidl_typesupport_introspection_c__MetadataPackages_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_external_api_msgs__msg__MetadataPackages__init(message_memory);
}

void MetadataPackages__rosidl_typesupport_introspection_c__MetadataPackages_fini_function(void * message_memory)
{
  tier4_external_api_msgs__msg__MetadataPackages__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MetadataPackages__rosidl_typesupport_introspection_c__MetadataPackages_message_member_array[2] = {
  {
    "format",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__msg__MetadataPackages, format),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "json",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_external_api_msgs__msg__MetadataPackages, json),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MetadataPackages__rosidl_typesupport_introspection_c__MetadataPackages_message_members = {
  "tier4_external_api_msgs__msg",  // message namespace
  "MetadataPackages",  // message name
  2,  // number of fields
  sizeof(tier4_external_api_msgs__msg__MetadataPackages),
  MetadataPackages__rosidl_typesupport_introspection_c__MetadataPackages_message_member_array,  // message members
  MetadataPackages__rosidl_typesupport_introspection_c__MetadataPackages_init_function,  // function to initialize message memory (memory has to be allocated)
  MetadataPackages__rosidl_typesupport_introspection_c__MetadataPackages_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MetadataPackages__rosidl_typesupport_introspection_c__MetadataPackages_message_type_support_handle = {
  0,
  &MetadataPackages__rosidl_typesupport_introspection_c__MetadataPackages_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_external_api_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_external_api_msgs, msg, MetadataPackages)() {
  if (!MetadataPackages__rosidl_typesupport_introspection_c__MetadataPackages_message_type_support_handle.typesupport_identifier) {
    MetadataPackages__rosidl_typesupport_introspection_c__MetadataPackages_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MetadataPackages__rosidl_typesupport_introspection_c__MetadataPackages_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
