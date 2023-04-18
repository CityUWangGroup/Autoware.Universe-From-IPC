// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from morai_msgs:srv/MoraiSyncModeCmdSrv.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__SRV__DETAIL__MORAI_SYNC_MODE_CMD_SRV__BUILDER_HPP_
#define MORAI_MSGS__SRV__DETAIL__MORAI_SYNC_MODE_CMD_SRV__BUILDER_HPP_

#include "morai_msgs/srv/detail/morai_sync_mode_cmd_srv__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace morai_msgs
{

namespace srv
{

namespace builder
{

class Init_MoraiSyncModeCmdSrv_Request_request
{
public:
  Init_MoraiSyncModeCmdSrv_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::morai_msgs::srv::MoraiSyncModeCmdSrv_Request request(::morai_msgs::srv::MoraiSyncModeCmdSrv_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::srv::MoraiSyncModeCmdSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::srv::MoraiSyncModeCmdSrv_Request>()
{
  return morai_msgs::srv::builder::Init_MoraiSyncModeCmdSrv_Request_request();
}

}  // namespace morai_msgs


namespace morai_msgs
{

namespace srv
{

namespace builder
{

class Init_MoraiSyncModeCmdSrv_Response_response
{
public:
  Init_MoraiSyncModeCmdSrv_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::morai_msgs::srv::MoraiSyncModeCmdSrv_Response response(::morai_msgs::srv::MoraiSyncModeCmdSrv_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::morai_msgs::srv::MoraiSyncModeCmdSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::morai_msgs::srv::MoraiSyncModeCmdSrv_Response>()
{
  return morai_msgs::srv::builder::Init_MoraiSyncModeCmdSrv_Response_response();
}

}  // namespace morai_msgs

#endif  // MORAI_MSGS__SRV__DETAIL__MORAI_SYNC_MODE_CMD_SRV__BUILDER_HPP_
