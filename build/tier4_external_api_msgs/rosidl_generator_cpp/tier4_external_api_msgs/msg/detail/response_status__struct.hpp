// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tier4_external_api_msgs:msg/ResponseStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__RESPONSE_STATUS__STRUCT_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__RESPONSE_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__tier4_external_api_msgs__msg__ResponseStatus __attribute__((deprecated))
#else
# define DEPRECATED__tier4_external_api_msgs__msg__ResponseStatus __declspec(deprecated)
#endif

namespace tier4_external_api_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ResponseStatus_
{
  using Type = ResponseStatus_<ContainerAllocator>;

  explicit ResponseStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0ul;
      this->message = "";
    }
  }

  explicit ResponseStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = 0ul;
      this->message = "";
    }
  }

  // field types and members
  using _code_type =
    uint32_t;
  _code_type code;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__code(
    const uint32_t & _arg)
  {
    this->code = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t SUCCESS =
    1u;
  static constexpr uint32_t IGNORED =
    2u;
  static constexpr uint32_t WARN =
    3u;
  // guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
  static constexpr uint32_t ERROR =
    4u;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif

  // pointer types
  using RawPtr =
    tier4_external_api_msgs::msg::ResponseStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const tier4_external_api_msgs::msg::ResponseStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tier4_external_api_msgs::msg::ResponseStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tier4_external_api_msgs::msg::ResponseStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tier4_external_api_msgs::msg::ResponseStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tier4_external_api_msgs::msg::ResponseStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tier4_external_api_msgs::msg::ResponseStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tier4_external_api_msgs::msg::ResponseStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tier4_external_api_msgs::msg::ResponseStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tier4_external_api_msgs::msg::ResponseStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tier4_external_api_msgs__msg__ResponseStatus
    std::shared_ptr<tier4_external_api_msgs::msg::ResponseStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tier4_external_api_msgs__msg__ResponseStatus
    std::shared_ptr<tier4_external_api_msgs::msg::ResponseStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResponseStatus_ & other) const
  {
    if (this->code != other.code) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResponseStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResponseStatus_

// alias to use template instance with default allocator
using ResponseStatus =
  tier4_external_api_msgs::msg::ResponseStatus_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint32_t ResponseStatus_<ContainerAllocator>::SUCCESS;
template<typename ContainerAllocator>
constexpr uint32_t ResponseStatus_<ContainerAllocator>::IGNORED;
template<typename ContainerAllocator>
constexpr uint32_t ResponseStatus_<ContainerAllocator>::WARN;
// guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
template<typename ContainerAllocator>
constexpr uint32_t ResponseStatus_<ContainerAllocator>::ERROR;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif

}  // namespace msg

}  // namespace tier4_external_api_msgs

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__RESPONSE_STATUS__STRUCT_HPP_
