// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from clearpath_platform_msgs:msg/DisplayStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_platform_msgs/msg/display_status.hpp"


#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__DISPLAY_STATUS__STRUCT_HPP_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__DISPLAY_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__clearpath_platform_msgs__msg__DisplayStatus __attribute__((deprecated))
#else
# define DEPRECATED__clearpath_platform_msgs__msg__DisplayStatus __declspec(deprecated)
#endif

namespace clearpath_platform_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DisplayStatus_
{
  using Type = DisplayStatus_<ContainerAllocator>;

  explicit DisplayStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->string1 = "";
      this->string2 = "";
    }
  }

  explicit DisplayStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : string1(_alloc),
    string2(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->string1 = "";
      this->string2 = "";
    }
  }

  // field types and members
  using _string1_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _string1_type string1;
  using _string2_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _string2_type string2;

  // setters for named parameter idiom
  Type & set__string1(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->string1 = _arg;
    return *this;
  }
  Type & set__string2(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->string2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    clearpath_platform_msgs::msg::DisplayStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const clearpath_platform_msgs::msg::DisplayStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<clearpath_platform_msgs::msg::DisplayStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<clearpath_platform_msgs::msg::DisplayStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      clearpath_platform_msgs::msg::DisplayStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<clearpath_platform_msgs::msg::DisplayStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      clearpath_platform_msgs::msg::DisplayStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<clearpath_platform_msgs::msg::DisplayStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<clearpath_platform_msgs::msg::DisplayStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<clearpath_platform_msgs::msg::DisplayStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__clearpath_platform_msgs__msg__DisplayStatus
    std::shared_ptr<clearpath_platform_msgs::msg::DisplayStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__clearpath_platform_msgs__msg__DisplayStatus
    std::shared_ptr<clearpath_platform_msgs::msg::DisplayStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DisplayStatus_ & other) const
  {
    if (this->string1 != other.string1) {
      return false;
    }
    if (this->string2 != other.string2) {
      return false;
    }
    return true;
  }
  bool operator!=(const DisplayStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DisplayStatus_

// alias to use template instance with default allocator
using DisplayStatus =
  clearpath_platform_msgs::msg::DisplayStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace clearpath_platform_msgs

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__DISPLAY_STATUS__STRUCT_HPP_
