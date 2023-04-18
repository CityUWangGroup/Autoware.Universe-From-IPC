// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_rtc_msgs:msg/Module.idl
// generated code does not contain a copyright notice

#ifndef TIER4_RTC_MSGS__MSG__DETAIL__MODULE__STRUCT_HPP_
#define TIER4_RTC_MSGS__MSG__DETAIL__MODULE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__tier4_rtc_msgs__msg__Module __attribute__((deprecated))
#else
# define DEPRECATED__tier4_rtc_msgs__msg__Module __declspec(deprecated)
#endif

namespace tier4_rtc_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Module_
{
  using Type = Module_<ContainerAllocator>;

  explicit Module_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  explicit Module_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NONE =
    0u;
  static constexpr uint8_t LANE_CHANGE_LEFT =
    1u;
  static constexpr uint8_t LANE_CHANGE_RIGHT =
    2u;
  static constexpr uint8_t AVOIDANCE_LEFT =
    3u;
  static constexpr uint8_t AVOIDANCE_RIGHT =
    4u;
  static constexpr uint8_t PULL_OVER =
    5u;
  static constexpr uint8_t PULL_OUT =
    6u;
  static constexpr uint8_t TRAFFIC_LIGHT =
    7u;
  static constexpr uint8_t INTERSECTION =
    8u;
  static constexpr uint8_t CROSSWALK =
    9u;
  static constexpr uint8_t BLIND_SPOT =
    10u;
  static constexpr uint8_t DETECTION_AREA =
    11u;
  static constexpr uint8_t NO_STOPPING_AREA =
    12u;
  static constexpr uint8_t OCCLUSION_SPOT =
    13u;

  // pointer types
  using RawPtr =
    tier4_rtc_msgs::msg::Module_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_rtc_msgs::msg::Module_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_rtc_msgs::msg::Module_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_rtc_msgs::msg::Module_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_rtc_msgs::msg::Module_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_rtc_msgs::msg::Module_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_rtc_msgs::msg::Module_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_rtc_msgs::msg::Module_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_rtc_msgs::msg::Module_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_rtc_msgs::msg::Module_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_rtc_msgs__msg__Module
    std::shared_ptr<tier4_rtc_msgs::msg::Module_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_rtc_msgs__msg__Module
    std::shared_ptr<tier4_rtc_msgs::msg::Module_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Module_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const Module_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Module_

// alias to use template instance with default allocator
using Module =
  tier4_rtc_msgs::msg::Module_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t Module_<ContainerAllocator>::NONE;
template<typename ContainerAllocator>
constexpr uint8_t Module_<ContainerAllocator>::LANE_CHANGE_LEFT;
template<typename ContainerAllocator>
constexpr uint8_t Module_<ContainerAllocator>::LANE_CHANGE_RIGHT;
template<typename ContainerAllocator>
constexpr uint8_t Module_<ContainerAllocator>::AVOIDANCE_LEFT;
template<typename ContainerAllocator>
constexpr uint8_t Module_<ContainerAllocator>::AVOIDANCE_RIGHT;
template<typename ContainerAllocator>
constexpr uint8_t Module_<ContainerAllocator>::PULL_OVER;
template<typename ContainerAllocator>
constexpr uint8_t Module_<ContainerAllocator>::PULL_OUT;
template<typename ContainerAllocator>
constexpr uint8_t Module_<ContainerAllocator>::TRAFFIC_LIGHT;
template<typename ContainerAllocator>
constexpr uint8_t Module_<ContainerAllocator>::INTERSECTION;
template<typename ContainerAllocator>
constexpr uint8_t Module_<ContainerAllocator>::CROSSWALK;
template<typename ContainerAllocator>
constexpr uint8_t Module_<ContainerAllocator>::BLIND_SPOT;
template<typename ContainerAllocator>
constexpr uint8_t Module_<ContainerAllocator>::DETECTION_AREA;
template<typename ContainerAllocator>
constexpr uint8_t Module_<ContainerAllocator>::NO_STOPPING_AREA;
template<typename ContainerAllocator>
constexpr uint8_t Module_<ContainerAllocator>::OCCLUSION_SPOT;

}  // namespace msg

}  // namespace tier4_rtc_msgs

#endif  // TIER4_RTC_MSGS__MSG__DETAIL__MODULE__STRUCT_HPP_
