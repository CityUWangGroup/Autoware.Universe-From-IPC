// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_planning_msgs:msg/PoseWithUuid.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PLANNING_MSGS__MSG__DETAIL__POSE_WITH_UUID__BUILDER_HPP_
#define AUTOWARE_PLANNING_MSGS__MSG__DETAIL__POSE_WITH_UUID__BUILDER_HPP_

#include "autoware_planning_msgs/msg/detail/pose_with_uuid__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace autoware_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_PoseWithUuid_uuid
{
public:
  explicit Init_PoseWithUuid_uuid(::autoware_planning_msgs::msg::PoseWithUuid & msg)
  : msg_(msg)
  {}
  ::autoware_planning_msgs::msg::PoseWithUuid uuid(::autoware_planning_msgs::msg::PoseWithUuid::_uuid_type arg)
  {
    msg_.uuid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_planning_msgs::msg::PoseWithUuid msg_;
};

class Init_PoseWithUuid_pose
{
public:
  Init_PoseWithUuid_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseWithUuid_uuid pose(::autoware_planning_msgs::msg::PoseWithUuid::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_PoseWithUuid_uuid(msg_);
  }

private:
  ::autoware_planning_msgs::msg::PoseWithUuid msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_planning_msgs::msg::PoseWithUuid>()
{
  return autoware_planning_msgs::msg::builder::Init_PoseWithUuid_pose();
}

}  // namespace autoware_planning_msgs

#endif  // AUTOWARE_PLANNING_MSGS__MSG__DETAIL__POSE_WITH_UUID__BUILDER_HPP_
