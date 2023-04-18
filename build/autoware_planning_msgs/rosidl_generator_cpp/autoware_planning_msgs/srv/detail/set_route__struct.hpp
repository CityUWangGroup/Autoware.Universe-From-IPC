// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_planning_msgs:srv/SetRoute.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PLANNING_MSGS__SRV__DETAIL__SET_ROUTE__STRUCT_HPP_
#define AUTOWARE_PLANNING_MSGS__SRV__DETAIL__SET_ROUTE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'goal'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'segments'
#include "autoware_planning_msgs/msg/detail/lanelet_segment__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_planning_msgs__srv__SetRoute_Request __attribute__((deprecated))
#else
# define DEPRECATED__autoware_planning_msgs__srv__SetRoute_Request __declspec(deprecated)
#endif

namespace autoware_planning_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetRoute_Request_
{
  using Type = SetRoute_Request_<ContainerAllocator>;

  explicit SetRoute_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit SetRoute_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _goal_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _goal_type goal;
  using _segments_type =
    std::vector<autoware_planning_msgs::msg::LaneletSegment_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_planning_msgs::msg::LaneletSegment_<ContainerAllocator>>>;
  _segments_type segments;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__goal(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }
  Type & set__segments(
    const std::vector<autoware_planning_msgs::msg::LaneletSegment_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_planning_msgs::msg::LaneletSegment_<ContainerAllocator>>> & _arg)
  {
    this->segments = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_planning_msgs::srv::SetRoute_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_planning_msgs::srv::SetRoute_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_planning_msgs::srv::SetRoute_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_planning_msgs::srv::SetRoute_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_planning_msgs::srv::SetRoute_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_planning_msgs::srv::SetRoute_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_planning_msgs::srv::SetRoute_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_planning_msgs::srv::SetRoute_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_planning_msgs::srv::SetRoute_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_planning_msgs::srv::SetRoute_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_planning_msgs__srv__SetRoute_Request
    std::shared_ptr<autoware_planning_msgs::srv::SetRoute_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_planning_msgs__srv__SetRoute_Request
    std::shared_ptr<autoware_planning_msgs::srv::SetRoute_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetRoute_Request_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    if (this->segments != other.segments) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetRoute_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetRoute_Request_

// alias to use template instance with default allocator
using SetRoute_Request =
  autoware_planning_msgs::srv::SetRoute_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace autoware_planning_msgs


// Include directives for member types
// Member 'status'
#include "autoware_common_msgs/msg/detail/response_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_planning_msgs__srv__SetRoute_Response __attribute__((deprecated))
#else
# define DEPRECATED__autoware_planning_msgs__srv__SetRoute_Response __declspec(deprecated)
#endif

namespace autoware_planning_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetRoute_Response_
{
  using Type = SetRoute_Response_<ContainerAllocator>;

  explicit SetRoute_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_init)
  {
    (void)_init;
  }

  explicit SetRoute_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _status_type =
    autoware_common_msgs::msg::ResponseStatus_<ContainerAllocator>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const autoware_common_msgs::msg::ResponseStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_planning_msgs::srv::SetRoute_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_planning_msgs::srv::SetRoute_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_planning_msgs::srv::SetRoute_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_planning_msgs::srv::SetRoute_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_planning_msgs::srv::SetRoute_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_planning_msgs::srv::SetRoute_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_planning_msgs::srv::SetRoute_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_planning_msgs::srv::SetRoute_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_planning_msgs::srv::SetRoute_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_planning_msgs::srv::SetRoute_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_planning_msgs__srv__SetRoute_Response
    std::shared_ptr<autoware_planning_msgs::srv::SetRoute_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_planning_msgs__srv__SetRoute_Response
    std::shared_ptr<autoware_planning_msgs::srv::SetRoute_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetRoute_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetRoute_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetRoute_Response_

// alias to use template instance with default allocator
using SetRoute_Response =
  autoware_planning_msgs::srv::SetRoute_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace autoware_planning_msgs

namespace autoware_planning_msgs
{

namespace srv
{

struct SetRoute
{
  using Request = autoware_planning_msgs::srv::SetRoute_Request;
  using Response = autoware_planning_msgs::srv::SetRoute_Response;
};

}  // namespace srv

}  // namespace autoware_planning_msgs

#endif  // AUTOWARE_PLANNING_MSGS__SRV__DETAIL__SET_ROUTE__STRUCT_HPP_
