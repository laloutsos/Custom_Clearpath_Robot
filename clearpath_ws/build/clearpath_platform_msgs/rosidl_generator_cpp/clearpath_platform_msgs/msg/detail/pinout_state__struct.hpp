// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from clearpath_platform_msgs:msg/PinoutState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_platform_msgs/msg/pinout_state.hpp"


#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__PINOUT_STATE__STRUCT_HPP_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__PINOUT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__clearpath_platform_msgs__msg__PinoutState __attribute__((deprecated))
#else
# define DEPRECATED__clearpath_platform_msgs__msg__PinoutState __declspec(deprecated)
#endif

namespace clearpath_platform_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PinoutState_
{
  using Type = PinoutState_<ContainerAllocator>;

  explicit PinoutState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit PinoutState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _rails_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _rails_type rails;
  using _inputs_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _inputs_type inputs;
  using _outputs_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _outputs_type outputs;
  using _output_periods_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _output_periods_type output_periods;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__rails(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->rails = _arg;
    return *this;
  }
  Type & set__inputs(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->inputs = _arg;
    return *this;
  }
  Type & set__outputs(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->outputs = _arg;
    return *this;
  }
  Type & set__output_periods(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->output_periods = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CC01_USER_PWR_CTRL =
    0u;
  static constexpr uint8_t D100_AUX_IN1 =
    0u;
  static constexpr uint8_t D100_AUX_IN2 =
    1u;
  static constexpr uint8_t D100_AUX_IN3 =
    2u;
  static constexpr uint8_t D150_AUX_IN1 =
    0u;
  static constexpr uint8_t D150_AUX_IN2 =
    1u;
  static constexpr uint8_t D150_AUX_IN3 =
    2u;
  static constexpr uint8_t CC01_AUX_IN1 =
    0u;
  static constexpr uint8_t CC01_AUX_IN2 =
    1u;
  static constexpr uint8_t CC01_AUX_IN3 =
    2u;
  static constexpr uint8_t CC01_GPI0 =
    3u;
  static constexpr uint8_t CC01_GPI1 =
    4u;
  static constexpr uint8_t CC01_GPI2 =
    5u;
  static constexpr uint8_t CC01_GPI3 =
    6u;
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
    clearpath_platform_msgs::msg::PinoutState_<ContainerAllocator> *;
  using ConstRawPtr =
    const clearpath_platform_msgs::msg::PinoutState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<clearpath_platform_msgs::msg::PinoutState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<clearpath_platform_msgs::msg::PinoutState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      clearpath_platform_msgs::msg::PinoutState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<clearpath_platform_msgs::msg::PinoutState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      clearpath_platform_msgs::msg::PinoutState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<clearpath_platform_msgs::msg::PinoutState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<clearpath_platform_msgs::msg::PinoutState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<clearpath_platform_msgs::msg::PinoutState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__clearpath_platform_msgs__msg__PinoutState
    std::shared_ptr<clearpath_platform_msgs::msg::PinoutState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__clearpath_platform_msgs__msg__PinoutState
    std::shared_ptr<clearpath_platform_msgs::msg::PinoutState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PinoutState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->rails != other.rails) {
      return false;
    }
    if (this->inputs != other.inputs) {
      return false;
    }
    if (this->outputs != other.outputs) {
      return false;
    }
    if (this->output_periods != other.output_periods) {
      return false;
    }
    return true;
  }
  bool operator!=(const PinoutState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PinoutState_

// alias to use template instance with default allocator
using PinoutState =
  clearpath_platform_msgs::msg::PinoutState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutState_<ContainerAllocator>::CC01_USER_PWR_CTRL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutState_<ContainerAllocator>::D100_AUX_IN1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutState_<ContainerAllocator>::D100_AUX_IN2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutState_<ContainerAllocator>::D100_AUX_IN3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutState_<ContainerAllocator>::D150_AUX_IN1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutState_<ContainerAllocator>::D150_AUX_IN2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutState_<ContainerAllocator>::D150_AUX_IN3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutState_<ContainerAllocator>::CC01_AUX_IN1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutState_<ContainerAllocator>::CC01_AUX_IN2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutState_<ContainerAllocator>::CC01_AUX_IN3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutState_<ContainerAllocator>::CC01_GPI0;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutState_<ContainerAllocator>::CC01_GPI1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutState_<ContainerAllocator>::CC01_GPI2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutState_<ContainerAllocator>::CC01_GPI3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutState_<ContainerAllocator>::D100_AUX_OUT1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutState_<ContainerAllocator>::D100_AUX_OUT2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutState_<ContainerAllocator>::D100_AUX_OUT3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutState_<ContainerAllocator>::D150_AUX_OUT1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutState_<ContainerAllocator>::D150_AUX_OUT2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutState_<ContainerAllocator>::D150_AUX_OUT3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutState_<ContainerAllocator>::CC01_AUX_OUT1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutState_<ContainerAllocator>::CC01_AUX_OUT2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutState_<ContainerAllocator>::CC01_AUX_OUT3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutState_<ContainerAllocator>::CC01_GPO0;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutState_<ContainerAllocator>::CC01_GPO1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutState_<ContainerAllocator>::CC01_GPO2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PinoutState_<ContainerAllocator>::CC01_GPO3;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace clearpath_platform_msgs

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__PINOUT_STATE__STRUCT_HPP_
