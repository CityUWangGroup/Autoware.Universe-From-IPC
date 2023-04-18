// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from static_centerline_optimizer:msg/PointsWithLaneId.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "static_centerline_optimizer/msg/detail/points_with_lane_id__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace static_centerline_optimizer
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PointsWithLaneId_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) static_centerline_optimizer::msg::PointsWithLaneId(_init);
}

void PointsWithLaneId_fini_function(void * message_memory)
{
  auto typed_message = static_cast<static_centerline_optimizer::msg::PointsWithLaneId *>(message_memory);
  typed_message->~PointsWithLaneId();
}

size_t size_function__PointsWithLaneId__points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PointsWithLaneId__points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void * get_function__PointsWithLaneId__points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void resize_function__PointsWithLaneId__points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PointsWithLaneId_message_member_array[2] = {
  {
    "lane_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(static_centerline_optimizer::msg::PointsWithLaneId, lane_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(static_centerline_optimizer::msg::PointsWithLaneId, points),  // bytes offset in struct
    nullptr,  // default value
    size_function__PointsWithLaneId__points,  // size() function pointer
    get_const_function__PointsWithLaneId__points,  // get_const(index) function pointer
    get_function__PointsWithLaneId__points,  // get(index) function pointer
    resize_function__PointsWithLaneId__points  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PointsWithLaneId_message_members = {
  "static_centerline_optimizer::msg",  // message namespace
  "PointsWithLaneId",  // message name
  2,  // number of fields
  sizeof(static_centerline_optimizer::msg::PointsWithLaneId),
  PointsWithLaneId_message_member_array,  // message members
  PointsWithLaneId_init_function,  // function to initialize message memory (memory has to be allocated)
  PointsWithLaneId_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PointsWithLaneId_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PointsWithLaneId_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace static_centerline_optimizer


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<static_centerline_optimizer::msg::PointsWithLaneId>()
{
  return &::static_centerline_optimizer::msg::rosidl_typesupport_introspection_cpp::PointsWithLaneId_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, static_centerline_optimizer, msg, PointsWithLaneId)() {
  return &::static_centerline_optimizer::msg::rosidl_typesupport_introspection_cpp::PointsWithLaneId_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
