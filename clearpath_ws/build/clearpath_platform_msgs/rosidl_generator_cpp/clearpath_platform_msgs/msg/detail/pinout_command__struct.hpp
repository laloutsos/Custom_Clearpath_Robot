// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from clearpath_platform_msgs:msg/PinoutCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_platform_msgs/msg/pinout_command.hpp"


#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__PINOUT_COMMAND__STRUCT_HPP_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__PINOUT_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__clearpath_platform_msgs__msg__PinoutCommand __attribute__((deprecated))
#else
# define DEPRECATED__clearpath_platform_msgs__msg__PinoutCommand __declspec(deprecated)
#endif

namespace clearpath_platform_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PinoutCommand_
{
  using Type = PinoutCommand_<ContainerAllocator>;

  explicit PinoutCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit PinoutCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _rails_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _rails_type rails;
  using _outputs_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _outputs_type outputs;

  // setters for named parameter idiom
  Type & set__rails(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->rails = _arg;
    return *this;
  }
  Type & set__outputs(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->outputs = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CC01_USER_PWR_CTRL =
    0u;
  static constexpr uint8_t D100_AUX_OUT1 =
    0u;
  static constexpr uint8_t D100_AUX_OUT2 =
    1u;
  static constexpr uint8_t D100_AUX_OUT3 =
    2u;
  static constexpr uint8_t D150_AUX_OUT1 =
    0u;
  static constexpr uint8_t D150_AUX_OUT2 =
    1u;
  static constexpr uint8_t D150_AUX_OUT3 =
    2u;
  static constexpr uint8_t CC01_AUX_OUT1 =
    0u;
  static constexpr uint8_t CC01_AUX_OUT2 =
    1u;
  static constexpr uint8_t CC01_AUX_OUT3 =
    2u;
  static constexpr uint8_t CC01_GPO0 =
    3u;
  static constexpr uint8_t CC01_GPO1 =
    4u;
  static constexpr uint8_t CC01_GPO2 =
    5u;
  static constexpr uint8_t CC01_GPO3 =
    6u;

  // pointer types
  using RawPtr =
    clearpath_platform_msgs::msg::PinoutCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const clearpath_platform_msgs::msg::PinoutCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<clearpath_platform_msgs::msg::PinoutCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<clearpath_platform_msgs::msg::PinoutCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      clearpath_platform_msgs::msg::PinoutCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<clearpath_platform_msgs::msg::PinoutCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      clearpath_platform_msgs::msg::PinoutCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<clearpath_platform_msgs::msg::PinoutCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<clearpath_platform_msgs::msg::PinoutCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<clearpath_platform_msgs::msg::PinoutCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__clearpath_platform_msgs__msg__PinoutCommand
    std::shared_ptr<clearpath_platform_msgs::msg::PinoutCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__clearpath_platform_msgs__msg__PinoutCommand
    std::shared_ptr<clearpath_platform_msgs::msg::PinoutCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PinoutCommand_ & other) const
  {
    if (this->rails != other.rails) {
      return false;
    }
    if (this->outputs != other.outputs) {
      return false;
    }
    return true;
  }
  bool operator!=(const PinoutCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PinoutCommand_

// alias to use template instance with default allocator
using PinoutCommand =
  clearpath_platform_msgs::msg::PinoutCommand_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutCommand_<ContainerAllocator>::CC01_USER_PWR_CTRL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutCommand_<ContainerAllocator>::D100_AUX_OUT1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutCommand_<ContainerAllocator>::D100_AUX_OUT2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutCommand_<ContainerAllocator>::D100_AUX_OUT3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutCommand_<ContainerAllocator>::D150_AUX_OUT1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutCommand_<ContainerAllocator>::D150_AUX_OUT2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutCommand_<ContainerAllocator>::D150_AUX_OUT3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutCommand_<ContainerAllocator>::CC01_AUX_OUT1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutCommand_<ContainerAllocator>::CC01_AUX_OUT2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutCommand_<ContainerAllocator>::CC01_AUX_OUT3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutCommand_<ContainerAllocator>::CC01_GPO0;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutCommand_<ContainerAllocator>::CC01_GPO1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutCommand_<ContainerAllocator>::CC01_GPO2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutCommand_<ContainerAllocator>::CC01_GPO3;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace clearpath_platform_msgs

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__PINOUT_COMMAND__STRUCT_HPP_
