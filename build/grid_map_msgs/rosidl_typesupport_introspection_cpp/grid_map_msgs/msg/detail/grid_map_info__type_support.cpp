// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from grid_map_msgs:msg/GridMapInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "grid_map_msgs/msg/detail/grid_map_info__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace grid_map_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void GridMapInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) grid_map_msgs::msg::GridMapInfo(_init);
}

void GridMapInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<grid_map_msgs::msg::GridMapInfo *>(message_memory);
  typed_message->~GridMapInfo();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GridMapInfo_message_member_array[4] = {
  {
    "resolution",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grid_map_msgs::msg::GridMapInfo, resolution),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "length_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grid_map_msgs::msg::GridMapInfo, length_x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "length_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grid_map_msgs::msg::GridMapInfo, length_y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grid_map_msgs::msg::GridMapInfo, pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GridMapInfo_message_members = {
  "grid_map_msgs::msg",  // message namespace
  "GridMapInfo",  // message name
  4,  // number of fields
  sizeof(grid_map_msgs::msg::GridMapInfo),
  GridMapInfo_message_member_array,  // message members
  GridMapInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  GridMapInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GridMapInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GridMapInfo_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace grid_map_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<grid_map_msgs::msg::GridMapInfo>()
{
  return &::grid_map_msgs::msg::rosidl_typesupport_introspection_cpp::GridMapInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grid_map_msgs, msg, GridMapInfo)() {
  return &::grid_map_msgs::msg::rosidl_typesupport_introspection_cpp::GridMapInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
