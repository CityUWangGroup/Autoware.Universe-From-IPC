// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_api_msgs:msg/LaneChangeStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_API_MSGS__MSG__DETAIL__LANE_CHANGE_STATUS__STRUCT_HPP_
#define TIER4_API_MSGS__MSG__DETAIL__LANE_CHANGE_STATUS__STRUCT_HPP_

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
// Member 'candidate_path'
#include "tier4_planning_msgs/msg/detail/path__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_api_msgs__msg__LaneChangeStatus __attribute__((deprecated))
#else
# define DEPRECATED__tier4_api_msgs__msg__LaneChangeStatus __declspec(deprecated)
#endif

namespace tier4_api_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneChangeStatus_
{
  using Type = LaneChangeStatus_<ContainerAllocator>;

  explicit LaneChangeStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    candidate_path(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->force_lane_change_available = false;
      this->lane_change_ready = false;
    }
  }

  explicit LaneChangeStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    candidate_path(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->force_lane_change_available = false;
      this->lane_change_ready = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _force_lane_change_available_type =
    bool;
  _force_lane_change_available_type force_lane_change_available;
  using _lane_change_ready_type =
    bool;
  _lane_change_ready_type lane_change_ready;
  using _candidate_path_type =
    tier4_planning_msgs::msg::Path_<ContainerAllocator>;
  _candidate_path_type candidate_path;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__force_lane_change_available(
    const bool & _arg)
  {
    this->force_lane_change_available = _arg;
    return *this;
  }
  Type & set__lane_change_ready(
    const bool & _arg)
  {
    this->lane_change_ready = _arg;
    return *this;
  }
  Type & set__candidate_path(
    const tier4_planning_msgs::msg::Path_<ContainerAllocator> & _arg)
  {
    this->candidate_path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_api_msgs::msg::LaneChangeStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_api_msgs::msg::LaneChangeStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_api_msgs::msg::LaneChangeStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_api_msgs::msg::LaneChangeStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_api_msgs::msg::LaneChangeStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_api_msgs::msg::LaneChangeStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_api_msgs::msg::LaneChangeStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_api_msgs::msg::LaneChangeStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_api_msgs::msg::LaneChangeStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_api_msgs::msg::LaneChangeStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_api_msgs__msg__LaneChangeStatus
    std::shared_ptr<tier4_api_msgs::msg::LaneChangeStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_api_msgs__msg__LaneChangeStatus
    std::shared_ptr<tier4_api_msgs::msg::LaneChangeStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneChangeStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->force_lane_change_available != other.force_lane_change_available) {
      return false;
    }
    if (this->lane_change_ready != other.lane_change_ready) {
      return false;
    }
    if (this->candidate_path != other.candidate_path) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneChangeStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneChangeStatus_

// alias to use template instance with default allocator
using LaneChangeStatus =
  tier4_api_msgs::msg::LaneChangeStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_api_msgs

#endif  // TIER4_API_MSGS__MSG__DETAIL__LANE_CHANGE_STATUS__STRUCT_HPP_
