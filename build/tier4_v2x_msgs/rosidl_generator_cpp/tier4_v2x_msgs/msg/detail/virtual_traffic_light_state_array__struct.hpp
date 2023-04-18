// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_v2x_msgs:msg/VirtualTrafficLightStateArray.idl
// generated code does not contain a copyright notice

#ifndef TIER4_V2X_MSGS__MSG__DETAIL__VIRTUAL_TRAFFIC_LIGHT_STATE_ARRAY__STRUCT_HPP_
#define TIER4_V2X_MSGS__MSG__DETAIL__VIRTUAL_TRAFFIC_LIGHT_STATE_ARRAY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'states'
#include "tier4_v2x_msgs/msg/detail/virtual_traffic_light_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tier4_v2x_msgs__msg__VirtualTrafficLightStateArray __attribute__((deprecated))
#else
# define DEPRECATED__tier4_v2x_msgs__msg__VirtualTrafficLightStateArray __declspec(deprecated)
#endif

namespace tier4_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VirtualTrafficLightStateArray_
{
  using Type = VirtualTrafficLightStateArray_<ContainerAllocator>;

  explicit VirtualTrafficLightStateArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    (void)_init;
  }

  explicit VirtualTrafficLightStateArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _states_type =
    std::vector<tier4_v2x_msgs::msg::VirtualTrafficLightState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tier4_v2x_msgs::msg::VirtualTrafficLightState_<ContainerAllocator>>>;
  _states_type states;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__states(
    const std::vector<tier4_v2x_msgs::msg::VirtualTrafficLightState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<tier4_v2x_msgs::msg::VirtualTrafficLightState_<ContainerAllocator>>> & _arg)
  {
    this->states = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tier4_v2x_msgs::msg::VirtualTrafficLightStateArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_v2x_msgs::msg::VirtualTrafficLightStateArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_v2x_msgs::msg::VirtualTrafficLightStateArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_v2x_msgs::msg::VirtualTrafficLightStateArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_v2x_msgs::msg::VirtualTrafficLightStateArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_v2x_msgs::msg::VirtualTrafficLightStateArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_v2x_msgs::msg::VirtualTrafficLightStateArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_v2x_msgs::msg::VirtualTrafficLightStateArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_v2x_msgs::msg::VirtualTrafficLightStateArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_v2x_msgs::msg::VirtualTrafficLightStateArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_v2x_msgs__msg__VirtualTrafficLightStateArray
    std::shared_ptr<tier4_v2x_msgs::msg::VirtualTrafficLightStateArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_v2x_msgs__msg__VirtualTrafficLightStateArray
    std::shared_ptr<tier4_v2x_msgs::msg::VirtualTrafficLightStateArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VirtualTrafficLightStateArray_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->states != other.states) {
      return false;
    }
    return true;
  }
  bool operator!=(const VirtualTrafficLightStateArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VirtualTrafficLightStateArray_

// alias to use template instance with default allocator
using VirtualTrafficLightStateArray =
  tier4_v2x_msgs::msg::VirtualTrafficLightStateArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tier4_v2x_msgs

#endif  // TIER4_V2X_MSGS__MSG__DETAIL__VIRTUAL_TRAFFIC_LIGHT_STATE_ARRAY__STRUCT_HPP_
