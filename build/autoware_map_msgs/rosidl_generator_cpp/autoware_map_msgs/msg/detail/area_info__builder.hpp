// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_map_msgs:msg/AreaInfo.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MAP_MSGS__MSG__DETAIL__AREA_INFO__BUILDER_HPP_
#define AUTOWARE_MAP_MSGS__MSG__DETAIL__AREA_INFO__BUILDER_HPP_

#include "autoware_map_msgs/msg/detail/area_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace autoware_map_msgs
{

namespace msg
{

namespace builder
{

class Init_AreaInfo_radius
{
public:
  explicit Init_AreaInfo_radius(::autoware_map_msgs::msg::AreaInfo & msg)
  : msg_(msg)
  {}
  ::autoware_map_msgs::msg::AreaInfo radius(::autoware_map_msgs::msg::AreaInfo::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_map_msgs::msg::AreaInfo msg_;
};

class Init_AreaInfo_center
{
public:
  Init_AreaInfo_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AreaInfo_radius center(::autoware_map_msgs::msg::AreaInfo::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_AreaInfo_radius(msg_);
  }

private:
  ::autoware_map_msgs::msg::AreaInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_map_msgs::msg::AreaInfo>()
{
  return autoware_map_msgs::msg::builder::Init_AreaInfo_center();
}

}  // namespace autoware_map_msgs

#endif  // AUTOWARE_MAP_MSGS__MSG__DETAIL__AREA_INFO__BUILDER_HPP_
