// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_planning_msgs:action/RecordTrajectory.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__ACTION__DETAIL__RECORD_TRAJECTORY__BUILDER_HPP_
#define AUTOWARE_AUTO_PLANNING_MSGS__ACTION__DETAIL__RECORD_TRAJECTORY__BUILDER_HPP_

#include "autoware_auto_planning_msgs/action/detail/record_trajectory__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace autoware_auto_planning_msgs
{

namespace action
{

namespace builder
{

class Init_RecordTrajectory_Goal_record_path
{
public:
  Init_RecordTrajectory_Goal_record_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::autoware_auto_planning_msgs::action::RecordTrajectory_Goal record_path(::autoware_auto_planning_msgs::action::RecordTrajectory_Goal::_record_path_type arg)
  {
    msg_.record_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_planning_msgs::action::RecordTrajectory_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_planning_msgs::action::RecordTrajectory_Goal>()
{
  return autoware_auto_planning_msgs::action::builder::Init_RecordTrajectory_Goal_record_path();
}

}  // namespace autoware_auto_planning_msgs


namespace autoware_auto_planning_msgs
{

namespace action
{

namespace builder
{

class Init_RecordTrajectory_Result_unused_flag
{
public:
  Init_RecordTrajectory_Result_unused_flag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::autoware_auto_planning_msgs::action::RecordTrajectory_Result unused_flag(::autoware_auto_planning_msgs::action::RecordTrajectory_Result::_unused_flag_type arg)
  {
    msg_.unused_flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_planning_msgs::action::RecordTrajectory_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_planning_msgs::action::RecordTrajectory_Result>()
{
  return autoware_auto_planning_msgs::action::builder::Init_RecordTrajectory_Result_unused_flag();
}

}  // namespace autoware_auto_planning_msgs


namespace autoware_auto_planning_msgs
{

namespace action
{

namespace builder
{

class Init_RecordTrajectory_Feedback_current_length
{
public:
  Init_RecordTrajectory_Feedback_current_length()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::autoware_auto_planning_msgs::action::RecordTrajectory_Feedback current_length(::autoware_auto_planning_msgs::action::RecordTrajectory_Feedback::_current_length_type arg)
  {
    msg_.current_length = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_planning_msgs::action::RecordTrajectory_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_planning_msgs::action::RecordTrajectory_Feedback>()
{
  return autoware_auto_planning_msgs::action::builder::Init_RecordTrajectory_Feedback_current_length();
}

}  // namespace autoware_auto_planning_msgs


namespace autoware_auto_planning_msgs
{

namespace action
{

namespace builder
{

class Init_RecordTrajectory_SendGoal_Request_goal
{
public:
  explicit Init_RecordTrajectory_SendGoal_Request_goal(::autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Request goal(::autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Request msg_;
};

class Init_RecordTrajectory_SendGoal_Request_goal_id
{
public:
  Init_RecordTrajectory_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecordTrajectory_SendGoal_Request_goal goal_id(::autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RecordTrajectory_SendGoal_Request_goal(msg_);
  }

private:
  ::autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Request>()
{
  return autoware_auto_planning_msgs::action::builder::Init_RecordTrajectory_SendGoal_Request_goal_id();
}

}  // namespace autoware_auto_planning_msgs


namespace autoware_auto_planning_msgs
{

namespace action
{

namespace builder
{

class Init_RecordTrajectory_SendGoal_Response_stamp
{
public:
  explicit Init_RecordTrajectory_SendGoal_Response_stamp(::autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Response stamp(::autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Response msg_;
};

class Init_RecordTrajectory_SendGoal_Response_accepted
{
public:
  Init_RecordTrajectory_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecordTrajectory_SendGoal_Response_stamp accepted(::autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_RecordTrajectory_SendGoal_Response_stamp(msg_);
  }

private:
  ::autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_planning_msgs::action::RecordTrajectory_SendGoal_Response>()
{
  return autoware_auto_planning_msgs::action::builder::Init_RecordTrajectory_SendGoal_Response_accepted();
}

}  // namespace autoware_auto_planning_msgs


namespace autoware_auto_planning_msgs
{

namespace action
{

namespace builder
{

class Init_RecordTrajectory_GetResult_Request_goal_id
{
public:
  Init_RecordTrajectory_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Request goal_id(::autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Request>()
{
  return autoware_auto_planning_msgs::action::builder::Init_RecordTrajectory_GetResult_Request_goal_id();
}

}  // namespace autoware_auto_planning_msgs


namespace autoware_auto_planning_msgs
{

namespace action
{

namespace builder
{

class Init_RecordTrajectory_GetResult_Response_result
{
public:
  explicit Init_RecordTrajectory_GetResult_Response_result(::autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Response result(::autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Response msg_;
};

class Init_RecordTrajectory_GetResult_Response_status
{
public:
  Init_RecordTrajectory_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecordTrajectory_GetResult_Response_result status(::autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RecordTrajectory_GetResult_Response_result(msg_);
  }

private:
  ::autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_planning_msgs::action::RecordTrajectory_GetResult_Response>()
{
  return autoware_auto_planning_msgs::action::builder::Init_RecordTrajectory_GetResult_Response_status();
}

}  // namespace autoware_auto_planning_msgs


namespace autoware_auto_planning_msgs
{

namespace action
{

namespace builder
{

class Init_RecordTrajectory_FeedbackMessage_feedback
{
public:
  explicit Init_RecordTrajectory_FeedbackMessage_feedback(::autoware_auto_planning_msgs::action::RecordTrajectory_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::autoware_auto_planning_msgs::action::RecordTrajectory_FeedbackMessage feedback(::autoware_auto_planning_msgs::action::RecordTrajectory_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_planning_msgs::action::RecordTrajectory_FeedbackMessage msg_;
};

class Init_RecordTrajectory_FeedbackMessage_goal_id
{
public:
  Init_RecordTrajectory_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecordTrajectory_FeedbackMessage_feedback goal_id(::autoware_auto_planning_msgs::action::RecordTrajectory_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RecordTrajectory_FeedbackMessage_feedback(msg_);
  }

private:
  ::autoware_auto_planning_msgs::action::RecordTrajectory_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_planning_msgs::action::RecordTrajectory_FeedbackMessage>()
{
  return autoware_auto_planning_msgs::action::builder::Init_RecordTrajectory_FeedbackMessage_goal_id();
}

}  // namespace autoware_auto_planning_msgs

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__ACTION__DETAIL__RECORD_TRAJECTORY__BUILDER_HPP_
