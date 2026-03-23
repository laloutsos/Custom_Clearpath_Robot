// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from clearpath_platform_msgs:msg/Temperature.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_platform_msgs/msg/temperature.hpp"


#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__TEMPERATURE__STRUCT_HPP_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__TEMPERATURE__STRUCT_HPP_

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
# define DEPRECATED__clearpath_platform_msgs__msg__Temperature __attribute__((deprecated))
#else
# define DEPRECATED__clearpath_platform_msgs__msg__Temperature __declspec(deprecated)
#endif

namespace clearpath_platform_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Temperature_
{
  using Type = Temperature_<ContainerAllocator>;

  explicit Temperature_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit Temperature_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _temperatures_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _temperatures_type temperatures;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__temperatures(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->temperatures = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t J100_MCU =
    0u;
  static constexpr uint8_t J100_PCB =
    1u;
  static constexpr uint8_t D100_MCU =
    0u;
  static constexpr uint8_t D100_PCB =
    1u;
  static constexpr uint8_t D150_MCU =
    0u;
  static constexpr uint8_t D150_PCB =
    1u;
  static constexpr uint8_t W200_MCU =
    0u;
  static constexpr uint8_t R100_MCU =
    0u;
  static constexpr uint8_t R100_PCB =
    1u;
  static constexpr uint8_t CC01_MCU =
    0u;
  static constexpr uint8_t CC01_FAN1 =
    1u;
  static constexpr uint8_t CC01_FAN2 =
    2u;
  static constexpr uint8_t CC01_FAN3 =
    3u;
  static constexpr uint8_t CC01_FAN4 =
    4u;
  static constexpr uint8_t CC01_FAN5 =
    5u;
  static constexpr uint8_t CC01_FAN6 =
    6u;
  static constexpr uint8_t CC01_FAN7 =
    7u;
  static constexpr uint8_t CC01_FAN8 =
    8u;
  static constexpr uint8_t CC01_5V_INDUCTOR =
    9u;
  static constexpr uint8_t CC01_MAIN_GND_LUG =
    10u;
  static constexpr uint8_t CC01_24V_DCDC =
    11u;
  static constexpr uint8_t CC01_12V_DCDC =
    12u;
  static constexpr uint8_t CC01_EXT_1 =
    13u;
  static constexpr uint8_t CC01_EXT_2 =
    14u;
  static constexpr uint8_t CC01_EXT_3 =
    15u;
  static constexpr uint8_t CC01_EXT_4 =
    16u;
  static constexpr uint8_t CC01_BREAKOUT_1 =
    17u;
  static constexpr uint8_t CC01_BREAKOUT_2 =
    18u;

  // pointer types
  using RawPtr =
    clearpath_platform_msgs::msg::Temperature_<ContainerAllocator> *;
  using ConstRawPtr =
    const clearpath_platform_msgs::msg::Temperature_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<clearpath_platform_msgs::msg::Temperature_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<clearpath_platform_msgs::msg::Temperature_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      clearpath_platform_msgs::msg::Temperature_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<clearpath_platform_msgs::msg::Temperature_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      clearpath_platform_msgs::msg::Temperature_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<clearpath_platform_msgs::msg::Temperature_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<clearpath_platform_msgs::msg::Temperature_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<clearpath_platform_msgs::msg::Temperature_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__clearpath_platform_msgs__msg__Temperature
    std::shared_ptr<clearpath_platform_msgs::msg::Temperature_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__clearpath_platform_msgs__msg__Temperature
    std::shared_ptr<clearpath_platform_msgs::msg::Temperature_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Temperature_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->temperatures != other.temperatures) {
      return false;
    }
    return true;
  }
  bool operator!=(const Temperature_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Temperature_

// alias to use template instance with default allocator
using Temperature =
  clearpath_platform_msgs::msg::Temperature_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Temperature_<ContainerAllocator>::J100_MCU;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Temperature_<ContainerAllocator>::J100_PCB;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Temperature_<ContainerAllocator>::D100_MCU;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Temperature_<ContainerAllocator>::D100_PCB;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Temperature_<ContainerAllocator>::D150_MCU;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Temperature_<ContainerAllocator>::D150_PCB;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Temperature_<ContainerAllocator>::W200_MCU;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Temperature_<ContainerAllocator>::R100_MCU;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Temperature_<ContainerAllocator>::R100_PCB;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Temperature_<ContainerAllocator>::CC01_MCU;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Temperature_<ContainerAllocator>::CC01_FAN1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Temperature_<ContainerAllocator>::CC01_FAN2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Temperature_<ContainerAllocator>::CC01_FAN3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Temperature_<ContainerAllocator>::CC01_FAN4;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Temperature_<ContainerAllocator>::CC01_FAN5;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Temperature_<ContainerAllocator>::CC01_FAN6;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Temperature_<ContainerAllocator>::CC01_FAN7;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Temperature_<ContainerAllocator>::CC01_FAN8;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Temperature_<ContainerAllocator>::CC01_5V_INDUCTOR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Temperature_<ContainerAllocator>::CC01_MAIN_GND_LUG;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Temperature_<ContainerAllocator>::CC01_24V_DCDC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Temperature_<ContainerAllocator>::CC01_12V_DCDC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Temperature_<ContainerAllocator>::CC01_EXT_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Temperature_<ContainerAllocator>::CC01_EXT_2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Temperature_<ContainerAllocator>::CC01_EXT_3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Temperature_<ContainerAllocator>::CC01_EXT_4;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Temperature_<ContainerAllocator>::CC01_BREAKOUT_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Temperature_<ContainerAllocator>::CC01_BREAKOUT_2;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace clearpath_platform_msgs

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__TEMPERATURE__STRUCT_HPP_
