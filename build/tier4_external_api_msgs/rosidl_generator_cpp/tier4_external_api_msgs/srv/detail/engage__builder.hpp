// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_external_api_msgs:srv/Engage.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__ENGAGE__BUILDER_HPP_
#define TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__ENGAGE__BUILDER_HPP_

#include "tier4_external_api_msgs/srv/detail/engage__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tier4_external_api_msgs
{

namespace srv
{

namespace builder
{

class Init_Engage_Request_engage
{
public:
  Init_Engage_Request_engage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_external_api_msgs::srv::Engage_Request engage(::tier4_external_api_msgs::srv::Engage_Request::_engage_type arg)
  {
    msg_.engage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::srv::Engage_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::srv::Engage_Request>()
{
  return tier4_external_api_msgs::srv::builder::Init_Engage_Request_engage();
}

}  // namespace tier4_external_api_msgs


namespace tier4_external_api_msgs
{

namespace srv
{

namespace builder
{

class Init_Engage_Response_status
{
public:
  Init_Engage_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tier4_external_api_msgs::srv::Engage_Response status(::tier4_external_api_msgs::srv::Engage_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_external_api_msgs::srv::Engage_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_external_api_msgs::srv::Engage_Response>()
{
  return tier4_external_api_msgs::srv::builder::Init_Engage_Response_status();
}

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__SRV__DETAIL__ENGAGE__BUILDER_HPP_
