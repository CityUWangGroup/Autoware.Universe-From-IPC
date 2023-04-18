// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_external_api_msgs:msg/FailSafeState.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__FAIL_SAFE_STATE__STRUCT_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__FAIL_SAFE_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__tier4_external_api_msgs__msg__FailSafeState __attribute__((deprecated))
#else
# define DEPRECATED__tier4_external_api_msgs__msg__FailSafeState __declspec(deprecated)
#endif

namespace tier4_external_api_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FailSafeState_
{
  using Type = FailSafeState_<ContainerAllocator>;

  explicit FailSafeState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
    }
  }

  explicit FailSafeState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
    }
  }

  // field types and members
  using _state_type =
    uint8_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NORMAL =
    1u;
  static constexpr uint8_t OVERRIDE_REQUESTING =
    2u;
  static constexpr uint8_t MRM_OPERATING =
    3u;
  static constexpr uint8_t MRM_SUCCEEDED =
    4u;
  static constexpr uint8_t MRM_FAILED =
    5u;

  // pointer types
  using RawPtr =
    tier4_external_api_msgs::msg::FailSafeState_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_external_api_msgs::msg::FailSafeState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_external_api_msgs::msg::FailSafeState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_external_api_msgs::msg::FailSafeState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_external_api_msgs::msg::FailSafeState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_external_api_msgs::msg::FailSafeState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_external_api_msgs::msg::FailSafeState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_external_api_msgs::msg::FailSafeState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_external_api_msgs::msg::FailSafeState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_external_api_msgs::msg::FailSafeState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_external_api_msgs__msg__FailSafeState
    std::shared_ptr<tier4_external_api_msgs::msg::FailSafeState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_external_api_msgs__msg__FailSafeState
    std::shared_ptr<tier4_external_api_msgs::msg::FailSafeState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FailSafeState_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const FailSafeState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FailSafeState_

// alias to use template instance with default allocator
using FailSafeState =
  tier4_external_api_msgs::msg::FailSafeState_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t FailSafeState_<ContainerAllocator>::NORMAL;
template<typename ContainerAllocator>
constexpr uint8_t FailSafeState_<ContainerAllocator>::OVERRIDE_REQUESTING;
template<typename ContainerAllocator>
constexpr uint8_t FailSafeState_<ContainerAllocator>::MRM_OPERATING;
template<typename ContainerAllocator>
constexpr uint8_t FailSafeState_<ContainerAllocator>::MRM_SUCCEEDED;
template<typename ContainerAllocator>
constexpr uint8_t FailSafeState_<ContainerAllocator>::MRM_FAILED;

}  // namespace msg

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__FAIL_SAFE_STATE__STRUCT_HPP_
