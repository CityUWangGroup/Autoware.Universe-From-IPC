// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tier4_api_msgs:msg/ObstacleAvoidanceStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tier4_api_msgs/msg/detail/obstacle_avoidance_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tier4_api_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ObstacleAvoidanceStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tier4_api_msgs::msg::ObstacleAvoidanceStatus(_init);
}

void ObstacleAvoidanceStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tier4_api_msgs::msg::ObstacleAvoidanceStatus *>(message_memory);
  typed_message->~ObstacleAvoidanceStatus();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ObstacleAvoidanceStatus_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_api_msgs::msg::ObstacleAvoidanceStatus, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "obstacle_avoidance_ready",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_api_msgs::msg::ObstacleAvoidanceStatus, obstacle_avoidance_ready),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "candidate_path",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tier4_planning_msgs::msg::Trajectory>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_api_msgs::msg::ObstacleAvoidanceStatus, candidate_path),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ObstacleAvoidanceStatus_message_members = {
  "tier4_api_msgs::msg",  // message namespace
  "ObstacleAvoidanceStatus",  // message name
  3,  // number of fields
  sizeof(tier4_api_msgs::msg::ObstacleAvoidanceStatus),
  ObstacleAvoidanceStatus_message_member_array,  // message members
  ObstacleAvoidanceStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  ObstacleAvoidanceStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ObstacleAvoidanceStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ObstacleAvoidanceStatus_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace tier4_api_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tier4_api_msgs::msg::ObstacleAvoidanceStatus>()
{
  return &::tier4_api_msgs::msg::rosidl_typesupport_introspection_cpp::ObstacleAvoidanceStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tier4_api_msgs, msg, ObstacleAvoidanceStatus)() {
  return &::tier4_api_msgs::msg::rosidl_typesupport_introspection_cpp::ObstacleAvoidanceStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
