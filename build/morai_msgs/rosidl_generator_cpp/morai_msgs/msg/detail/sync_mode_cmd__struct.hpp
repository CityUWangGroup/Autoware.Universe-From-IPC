// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from morai_msgs:msg/SyncModeCmd.idl
// generated code does not contain a copyright notice

#ifndef MORAI_MSGS__MSG__DETAIL__SYNC_MODE_CMD__STRUCT_HPP_
#define MORAI_MSGS__MSG__DETAIL__SYNC_MODE_CMD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__morai_msgs__msg__SyncModeCmd __attribute__((deprecated))
#else
# define DEPRECATED__morai_msgs__msg__SyncModeCmd __declspec(deprecated)
#endif

namespace morai_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SyncModeCmd_
{
  using Type = SyncModeCmd_<ContainerAllocator>;

  explicit SyncModeCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->user_id = "";
      this->start_sync_mode = false;
      this->time_step = 0ul;
    }
  }

  explicit SyncModeCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : user_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->user_id = "";
      this->start_sync_mode = false;
      this->time_step = 0ul;
    }
  }

  // field types and members
  using _user_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _user_id_type user_id;
  using _start_sync_mode_type =
    bool;
  _start_sync_mode_type start_sync_mode;
  using _time_step_type =
    uint32_t;
  _time_step_type time_step;

  // setters for named parameter idiom
  Type & set__user_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->user_id = _arg;
    return *this;
  }
  Type & set__start_sync_mode(
    const bool & _arg)
  {
    this->start_sync_mode = _arg;
    return *this;
  }
  Type & set__time_step(
    const uint32_t & _arg)
  {
    this->time_step = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    morai_msgs::msg::SyncModeCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const morai_msgs::msg::SyncModeCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<morai_msgs::msg::SyncModeCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<morai_msgs::msg::SyncModeCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::SyncModeCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::SyncModeCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      morai_msgs::msg::SyncModeCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<morai_msgs::msg::SyncModeCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<morai_msgs::msg::SyncModeCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<morai_msgs::msg::SyncModeCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__morai_msgs__msg__SyncModeCmd
    std::shared_ptr<morai_msgs::msg::SyncModeCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__morai_msgs__msg__SyncModeCmd
    std::shared_ptr<morai_msgs::msg::SyncModeCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SyncModeCmd_ & other) const
  {
    if (this->user_id != other.user_id) {
      return false;
    }
    if (this->start_sync_mode != other.start_sync_mode) {
      return false;
    }
    if (this->time_step != other.time_step) {
      return false;
    }
    return true;
  }
  bool operator!=(const SyncModeCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SyncModeCmd_

// alias to use template instance with default allocator
using SyncModeCmd =
  morai_msgs::msg::SyncModeCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace morai_msgs

#endif  // MORAI_MSGS__MSG__DETAIL__SYNC_MODE_CMD__STRUCT_HPP_
