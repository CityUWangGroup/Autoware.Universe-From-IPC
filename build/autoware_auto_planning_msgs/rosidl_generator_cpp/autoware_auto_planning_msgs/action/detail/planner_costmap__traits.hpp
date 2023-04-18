// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_planning_msgs:action/PlannerCostmap.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__ACTION__DETAIL__PLANNER_COSTMAP__TRAITS_HPP_
#define AUTOWARE_AUTO_PLANNING_MSGS__ACTION__DETAIL__PLANNER_COSTMAP__TRAITS_HPP_

#include "autoware_auto_planning_msgs/action/detail/planner_costmap__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'route'
#include "autoware_auto_planning_msgs/msg/detail/had_map_route__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_planning_msgs::action::PlannerCostmap_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: route
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "route:\n";
    to_yaml(msg.route, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_auto_planning_msgs::action::PlannerCostmap_Goal & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_planning_msgs::action::PlannerCostmap_Goal>()
{
  return "autoware_auto_planning_msgs::action::PlannerCostmap_Goal";
}

template<>
inline const char * name<autoware_auto_planning_msgs::action::PlannerCostmap_Goal>()
{
  return "autoware_auto_planning_msgs/action/PlannerCostmap_Goal";
}

template<>
struct has_fixed_size<autoware_auto_planning_msgs::action::PlannerCostmap_Goal>
  : std::integral_constant<bool, has_fixed_size<autoware_auto_planning_msgs::msg::HADMapRoute>::value> {};

template<>
struct has_bounded_size<autoware_auto_planning_msgs::action::PlannerCostmap_Goal>
  : std::integral_constant<bool, has_bounded_size<autoware_auto_planning_msgs::msg::HADMapRoute>::value> {};

template<>
struct is_message<autoware_auto_planning_msgs::action::PlannerCostmap_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'costmap'
#include "nav_msgs/msg/detail/occupancy_grid__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_planning_msgs::action::PlannerCostmap_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: costmap
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "costmap:\n";
    to_yaml(msg.costmap, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_auto_planning_msgs::action::PlannerCostmap_Result & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_planning_msgs::action::PlannerCostmap_Result>()
{
  return "autoware_auto_planning_msgs::action::PlannerCostmap_Result";
}

template<>
inline const char * name<autoware_auto_planning_msgs::action::PlannerCostmap_Result>()
{
  return "autoware_auto_planning_msgs/action/PlannerCostmap_Result";
}

template<>
struct has_fixed_size<autoware_auto_planning_msgs::action::PlannerCostmap_Result>
  : std::integral_constant<bool, has_fixed_size<nav_msgs::msg::OccupancyGrid>::value> {};

template<>
struct has_bounded_size<autoware_auto_planning_msgs::action::PlannerCostmap_Result>
  : std::integral_constant<bool, has_bounded_size<nav_msgs::msg::OccupancyGrid>::value> {};

template<>
struct is_message<autoware_auto_planning_msgs::action::PlannerCostmap_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'unused_variable'
#include "std_msgs/msg/detail/empty__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_planning_msgs::action::PlannerCostmap_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: unused_variable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unused_variable:\n";
    to_yaml(msg.unused_variable, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_auto_planning_msgs::action::PlannerCostmap_Feedback & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_planning_msgs::action::PlannerCostmap_Feedback>()
{
  return "autoware_auto_planning_msgs::action::PlannerCostmap_Feedback";
}

template<>
inline const char * name<autoware_auto_planning_msgs::action::PlannerCostmap_Feedback>()
{
  return "autoware_auto_planning_msgs/action/PlannerCostmap_Feedback";
}

template<>
struct has_fixed_size<autoware_auto_planning_msgs::action::PlannerCostmap_Feedback>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Empty>::value> {};

template<>
struct has_bounded_size<autoware_auto_planning_msgs::action::PlannerCostmap_Feedback>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Empty>::value> {};

template<>
struct is_message<autoware_auto_planning_msgs::action::PlannerCostmap_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "autoware_auto_planning_msgs/action/detail/planner_costmap__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Request>()
{
  return "autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Request";
}

template<>
inline const char * name<autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Request>()
{
  return "autoware_auto_planning_msgs/action/PlannerCostmap_SendGoal_Request";
}

template<>
struct has_fixed_size<autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<autoware_auto_planning_msgs::action::PlannerCostmap_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<autoware_auto_planning_msgs::action::PlannerCostmap_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Response>()
{
  return "autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Response";
}

template<>
inline const char * name<autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Response>()
{
  return "autoware_auto_planning_msgs/action/PlannerCostmap_SendGoal_Response";
}

template<>
struct has_fixed_size<autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal>()
{
  return "autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal";
}

template<>
inline const char * name<autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal>()
{
  return "autoware_auto_planning_msgs/action/PlannerCostmap_SendGoal";
}

template<>
struct has_fixed_size<autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Request>::value &&
    has_fixed_size<autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Request>::value &&
    has_bounded_size<autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<autoware_auto_planning_msgs::action::PlannerCostmap_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_planning_msgs::action::PlannerCostmap_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_auto_planning_msgs::action::PlannerCostmap_GetResult_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_planning_msgs::action::PlannerCostmap_GetResult_Request>()
{
  return "autoware_auto_planning_msgs::action::PlannerCostmap_GetResult_Request";
}

template<>
inline const char * name<autoware_auto_planning_msgs::action::PlannerCostmap_GetResult_Request>()
{
  return "autoware_auto_planning_msgs/action/PlannerCostmap_GetResult_Request";
}

template<>
struct has_fixed_size<autoware_auto_planning_msgs::action::PlannerCostmap_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<autoware_auto_planning_msgs::action::PlannerCostmap_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<autoware_auto_planning_msgs::action::PlannerCostmap_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_planning_msgs::action::PlannerCostmap_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_auto_planning_msgs::action::PlannerCostmap_GetResult_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_planning_msgs::action::PlannerCostmap_GetResult_Response>()
{
  return "autoware_auto_planning_msgs::action::PlannerCostmap_GetResult_Response";
}

template<>
inline const char * name<autoware_auto_planning_msgs::action::PlannerCostmap_GetResult_Response>()
{
  return "autoware_auto_planning_msgs/action/PlannerCostmap_GetResult_Response";
}

template<>
struct has_fixed_size<autoware_auto_planning_msgs::action::PlannerCostmap_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<autoware_auto_planning_msgs::action::PlannerCostmap_Result>::value> {};

template<>
struct has_bounded_size<autoware_auto_planning_msgs::action::PlannerCostmap_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<autoware_auto_planning_msgs::action::PlannerCostmap_Result>::value> {};

template<>
struct is_message<autoware_auto_planning_msgs::action::PlannerCostmap_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_auto_planning_msgs::action::PlannerCostmap_GetResult>()
{
  return "autoware_auto_planning_msgs::action::PlannerCostmap_GetResult";
}

template<>
inline const char * name<autoware_auto_planning_msgs::action::PlannerCostmap_GetResult>()
{
  return "autoware_auto_planning_msgs/action/PlannerCostmap_GetResult";
}

template<>
struct has_fixed_size<autoware_auto_planning_msgs::action::PlannerCostmap_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<autoware_auto_planning_msgs::action::PlannerCostmap_GetResult_Request>::value &&
    has_fixed_size<autoware_auto_planning_msgs::action::PlannerCostmap_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<autoware_auto_planning_msgs::action::PlannerCostmap_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<autoware_auto_planning_msgs::action::PlannerCostmap_GetResult_Request>::value &&
    has_bounded_size<autoware_auto_planning_msgs::action::PlannerCostmap_GetResult_Response>::value
  >
{
};

template<>
struct is_service<autoware_auto_planning_msgs::action::PlannerCostmap_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<autoware_auto_planning_msgs::action::PlannerCostmap_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<autoware_auto_planning_msgs::action::PlannerCostmap_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_planning_msgs::action::PlannerCostmap_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_auto_planning_msgs::action::PlannerCostmap_FeedbackMessage & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_planning_msgs::action::PlannerCostmap_FeedbackMessage>()
{
  return "autoware_auto_planning_msgs::action::PlannerCostmap_FeedbackMessage";
}

template<>
inline const char * name<autoware_auto_planning_msgs::action::PlannerCostmap_FeedbackMessage>()
{
  return "autoware_auto_planning_msgs/action/PlannerCostmap_FeedbackMessage";
}

template<>
struct has_fixed_size<autoware_auto_planning_msgs::action::PlannerCostmap_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<autoware_auto_planning_msgs::action::PlannerCostmap_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<autoware_auto_planning_msgs::action::PlannerCostmap_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<autoware_auto_planning_msgs::action::PlannerCostmap_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<autoware_auto_planning_msgs::action::PlannerCostmap_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<autoware_auto_planning_msgs::action::PlannerCostmap>
  : std::true_type
{
};

template<>
struct is_action_goal<autoware_auto_planning_msgs::action::PlannerCostmap_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<autoware_auto_planning_msgs::action::PlannerCostmap_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<autoware_auto_planning_msgs::action::PlannerCostmap_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // AUTOWARE_AUTO_PLANNING_MSGS__ACTION__DETAIL__PLANNER_COSTMAP__TRAITS_HPP_
