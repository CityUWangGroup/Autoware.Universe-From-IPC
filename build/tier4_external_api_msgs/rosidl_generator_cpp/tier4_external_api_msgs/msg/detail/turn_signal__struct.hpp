// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_external_api_msgs:msg/TurnSignal.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__TURN_SIGNAL__STRUCT_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__TURN_SIGNAL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__tier4_external_api_msgs__msg__TurnSignal __attribute__((deprecated))
#else
# define DEPRECATED__tier4_external_api_msgs__msg__TurnSignal __declspec(deprecated)
#endif

namespace tier4_external_api_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TurnSignal_
{
  using Type = TurnSignal_<ContainerAllocator>;

  explicit TurnSignal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0;
    }
  }

  explicit TurnSignal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0;
    }
  }

  // field types and members
  using _data_type =
    uint8_t;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const uint8_t & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NONE =
    0u;
  static constexpr uint8_t LEFT =
    1u;
  static constexpr uint8_t RIGHT =
    2u;
  static constexpr uint8_t HAZARD =
    3u;

  // pointer types
  using RawPtr =
    tier4_external_api_msgs::msg::TurnSignal_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_external_api_msgs::msg::TurnSignal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_external_api_msgs::msg::TurnSignal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_external_api_msgs::msg::TurnSignal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_external_api_msgs::msg::TurnSignal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_external_api_msgs::msg::TurnSignal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_external_api_msgs::msg::TurnSignal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_external_api_msgs::msg::TurnSignal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_external_api_msgs::msg::TurnSignal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_external_api_msgs::msg::TurnSignal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_external_api_msgs__msg__TurnSignal
    std::shared_ptr<tier4_external_api_msgs::msg::TurnSignal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_external_api_msgs__msg__TurnSignal
    std::shared_ptr<tier4_external_api_msgs::msg::TurnSignal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurnSignal_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurnSignal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurnSignal_

// alias to use template instance with default allocator
using TurnSignal =
  tier4_external_api_msgs::msg::TurnSignal_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t TurnSignal_<ContainerAllocator>::NONE;
template<typename ContainerAllocator>
constexpr uint8_t TurnSignal_<ContainerAllocator>::LEFT;
template<typename ContainerAllocator>
constexpr uint8_t TurnSignal_<ContainerAllocator>::RIGHT;
template<typename ContainerAllocator>
constexpr uint8_t TurnSignal_<ContainerAllocator>::HAZARD;

}  // namespace msg

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__TURN_SIGNAL__STRUCT_HPP_
