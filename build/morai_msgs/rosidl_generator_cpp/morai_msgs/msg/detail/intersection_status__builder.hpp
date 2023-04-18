// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:msg/IntersectionStatus.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__INTERSECTION_STATUS__BUILDER_HPP_
#define MORAI_MSGS__MSG__DETAIL__INTERSECTION_STATUS__BUILDER_HPP_

#include "morai_msgs/msg/detail/intersection_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace morai_msgs
{

namespace msg
{

namespace builder
{

class Init_IntersectionStatus_intersection_status_time
{
public:
  explicit Init_IntersectionStatus_intersection_status_time(::morai_msgs::msg::IntersectionStatus & msg)
  : msg_(msg)
  {}
  ::morai_msgs::msg::IntersectionStatus intersection_status_time(::morai_msgs::msg::IntersectionStatus::_intersection_status_time_type arg)
  {
    msg_.intersection_status_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::msg::IntersectionStatus msg_;
};

class Init_IntersectionStatus_intersection_status
{
public:
  explicit Init_IntersectionStatus_intersection_status(::morai_msgs::msg::IntersectionStatus & msg)
  : msg_(msg)
  {}
  Init_IntersectionStatus_intersection_status_time intersection_status(::morai_msgs::msg::IntersectionStatus::_intersection_status_type arg)
  {
    msg_.intersection_status = std::move(arg);
    return Init_IntersectionStatus_intersection_status_time(msg_);
  }

private:
  ::morai_msgs::msg::IntersectionStatus msg_;
};

class Init_IntersectionStatus_intersection_index
{
public:
  explicit Init_IntersectionStatus_intersection_index(::morai_msgs::msg::IntersectionStatus & msg)
  : msg_(msg)
  {}
  Init_IntersectionStatus_intersection_status intersection_index(::morai_msgs::msg::IntersectionStatus::_intersection_index_type arg)
  {
    msg_.intersection_index = std::move(arg);
    return Init_IntersectionStatus_intersection_status(msg_);
  }

private:
  ::morai_msgs::msg::IntersectionStatus msg_;
};

class Init_IntersectionStatus_header
{
public:
  Init_IntersectionStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IntersectionStatus_intersection_index header(::morai_msgs::msg::IntersectionStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_IntersectionStatus_intersection_index(msg_);
  }

private:
  ::morai_msgs::msg::IntersectionStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::msg::IntersectionStatus>()
{
  return morai_msgs::msg::builder::Init_IntersectionStatus_header();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__INTERSECTION_STATUS__BUILDER_HPP_
