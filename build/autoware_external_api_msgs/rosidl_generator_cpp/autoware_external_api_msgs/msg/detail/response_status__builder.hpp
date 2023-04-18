// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_external_api_msgs:msg/ResponseStatus.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_EXTERNAL_API_MSGS__MSG__DETAIL__RESPONSE_STATUS__BUILDER_HPP_
#define AUTOWARE_EXTERNAL_API_MSGS__MSG__DETAIL__RESPONSE_STATUS__BUILDER_HPP_

#include "autoware_external_api_msgs/msg/detail/response_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace autoware_external_api_msgs
{

namespace msg
{

namespace builder
{

class Init_ResponseStatus_message
{
public:
  explicit Init_ResponseStatus_message(::autoware_external_api_msgs::msg::ResponseStatus & msg)
  : msg_(msg)
  {}
  ::autoware_external_api_msgs::msg::ResponseStatus message(::autoware_external_api_msgs::msg::ResponseStatus::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_external_api_msgs::msg::ResponseStatus msg_;
};

class Init_ResponseStatus_code
{
public:
  Init_ResponseStatus_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ResponseStatus_message code(::autoware_external_api_msgs::msg::ResponseStatus::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_ResponseStatus_message(msg_);
  }

private:
  ::autoware_external_api_msgs::msg::ResponseStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_external_api_msgs::msg::ResponseStatus>()
{
  return autoware_external_api_msgs::msg::builder::Init_ResponseStatus_code();
}

}  // namespace autoware_external_api_msgs

#endif  // AUTOWARE_EXTERNAL_API_MSGS__MSG__DETAIL__RESPONSE_STATUS__BUILDER_HPP_
