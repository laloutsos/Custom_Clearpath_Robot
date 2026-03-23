// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from clearpath_motor_msgs:msg/LynxDebug.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_motor_msgs/msg/lynx_debug.hpp"


#ifndef CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_DEBUG__STRUCT_HPP_
#define CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_DEBUG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__clearpath_motor_msgs__msg__LynxDebug __attribute__((deprecated))
#else
# define DEPRECATED__clearpath_motor_msgs__msg__LynxDebug __declspec(deprecated)
#endif

namespace clearpath_motor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LynxDebug_
{
  using Type = LynxDebug_<ContainerAllocator>;

  explicit LynxDebug_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_id = 0;
      this->joint_name = "";
      this->fault_frequency = 0;
      this->accumulator_flags = 0ul;
    }
  }

  explicit LynxDebug_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_id = 0;
      this->joint_name = "";
      this->fault_frequency = 0;
      this->accumulator_flags = 0ul;
    }
  }

  // field types and members
  using _can_id_type =
    uint8_t;
  _can_id_type can_id;
  using _joint_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _joint_name_type joint_name;
  using _fault_frequency_type =
    uint16_t;
  _fault_frequency_type fault_frequency;
  using _accumulator_flags_type =
    uint32_t;
  _accumulator_flags_type accumulator_flags;
  using _accumulators_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _accumulators_type accumulators;
  using _currents_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _currents_type currents;

  // setters for named parameter idiom
  Type & set__can_id(
    const uint8_t & _arg)
  {
    this->can_id = _arg;
    return *this;
  }
  Type & set__joint_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->joint_name = _arg;
    return *this;
  }
  Type & set__fault_frequency(
    const uint16_t & _arg)
  {
    this->fault_frequency = _arg;
    return *this;
  }
  Type & set__accumulator_flags(
    const uint32_t & _arg)
  {
    this->accumulator_flags = _arg;
    return *this;
  }
  Type & set__accumulators(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->accumulators = _arg;
    return *this;
  }
  Type & set__currents(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->currents = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ACCUMULATOR_FLAG_ABOVE_RATED =
    0u;
  static constexpr uint8_t ACCUMULATOR_FLAG_CONTINUOUS_1_1 =
    1u;
  static constexpr uint8_t ACCUMULATOR_FLAG_CONTINUOUS_1_2 =
    2u;
  static constexpr uint8_t ACCUMULATOR_FLAG_CONTINUOUS_1_3 =
    3u;
  static constexpr uint8_t ACCUMULATOR_FLAG_CONTINUOUS_1_4 =
    4u;
  static constexpr uint8_t ACCUMULATOR_FLAG_CONTINUOUS_1_5 =
    5u;
  static constexpr uint8_t ACCUMULATOR_FLAG_CONTINUOUS_1_6 =
    6u;
  static constexpr uint8_t ACCUMULATOR_FLAG_CONTINUOUS_1_7 =
    7u;
  static constexpr uint8_t ACCUMULATOR_FLAG_CONTINUOUS_1_8 =
    8u;
  static constexpr uint8_t ACCUMULATOR_FLAG_CONTINUOUS_1_9 =
    9u;
  static constexpr uint8_t ACCUMULATOR_FLAG_CONTINUOUS_2_0 =
    10u;
  static constexpr uint8_t ACCUMULATOR_FLAG_CONTINUOUS_2_1 =
    11u;
  static constexpr uint8_t ACCUMULATOR_FLAG_CONTINUOUS_2_2 =
    12u;
  static constexpr uint8_t ACCUMULATOR_FLAG_CONTINUOUS_2_3 =
    13u;
  static constexpr uint8_t ACCUMULATOR_FLAG_CONTINUOUS_2_4 =
    14u;
  static constexpr uint8_t ACCUMULATOR_FLAG_CONTINUOUS_2_5 =
    15u;
  static constexpr uint8_t ACCUMULATOR_FLAG_CONTINUOUS_2_6 =
    16u;
  static constexpr uint8_t ACCUMULATOR_FLAG_CONTINUOUS_2_7 =
    17u;
  static constexpr uint8_t ACCUMULATOR_FLAG_CONTINUOUS_2_8 =
    18u;
  static constexpr uint8_t ACCUMULATOR_FLAG_CONTINUOUS_2_9 =
    19u;
  static constexpr uint8_t ACCUMULATOR_FLAG_CONTINUOUS_3_0 =
    20u;
  static constexpr uint8_t ACCUMULATOR_ABOVE_RATED =
    0u;
  static constexpr uint8_t ACCUMULATOR_CONTINUOUS_1_1 =
    1u;
  static constexpr uint8_t ACCUMULATOR_CONTINUOUS_1_5 =
    2u;
  static constexpr uint8_t ACCUMULATOR_CONTINUOUS_2_0 =
    3u;
  static constexpr uint8_t ACCUMULATOR_CONTINUOUS_2_5 =
    4u;
  static constexpr uint8_t ACCUMULATOR_CONTINUOUS_3_0 =
    5u;
  static constexpr uint8_t CURRENT_ID_FB =
    0u;
  static constexpr uint8_t CURRENT_ID_FF =
    1u;
  static constexpr uint8_t CURRENT_ID_REF =
    2u;
  static constexpr uint8_t CURRENT_IQ_FB =
    3u;
  static constexpr uint8_t CURRENT_IQ_FF =
    4u;
  static constexpr uint8_t CURRENT_IQ_REF =
    5u;

  // pointer types
  using RawPtr =
    clearpath_motor_msgs::msg::LynxDebug_<ContainerAllocator> *;
  using ConstRawPtr =
    const clearpath_motor_msgs::msg::LynxDebug_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<clearpath_motor_msgs::msg::LynxDebug_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<clearpath_motor_msgs::msg::LynxDebug_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      clearpath_motor_msgs::msg::LynxDebug_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<clearpath_motor_msgs::msg::LynxDebug_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      clearpath_motor_msgs::msg::LynxDebug_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<clearpath_motor_msgs::msg::LynxDebug_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<clearpath_motor_msgs::msg::LynxDebug_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<clearpath_motor_msgs::msg::LynxDebug_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__clearpath_motor_msgs__msg__LynxDebug
    std::shared_ptr<clearpath_motor_msgs::msg::LynxDebug_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__clearpath_motor_msgs__msg__LynxDebug
    std::shared_ptr<clearpath_motor_msgs::msg::LynxDebug_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LynxDebug_ & other) const
  {
    if (this->can_id != other.can_id) {
      return false;
    }
    if (this->joint_name != other.joint_name) {
      return false;
    }
    if (this->fault_frequency != other.fault_frequency) {
      return false;
    }
    if (this->accumulator_flags != other.accumulator_flags) {
      return false;
    }
    if (this->accumulators != other.accumulators) {
      return false;
    }
    if (this->currents != other.currents) {
      return false;
    }
    return true;
  }
  bool operator!=(const LynxDebug_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LynxDebug_

// alias to use template instance with default allocator
using LynxDebug =
  clearpath_motor_msgs::msg::LynxDebug_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxDebug_<ContainerAllocator>::ACCUMULATOR_FLAG_ABOVE_RATED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxDebug_<ContainerAllocator>::ACCUMULATOR_FLAG_CONTINUOUS_1_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxDebug_<ContainerAllocator>::ACCUMULATOR_FLAG_CONTINUOUS_1_2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxDebug_<ContainerAllocator>::ACCUMULATOR_FLAG_CONTINUOUS_1_3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxDebug_<ContainerAllocator>::ACCUMULATOR_FLAG_CONTINUOUS_1_4;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxDebug_<ContainerAllocator>::ACCUMULATOR_FLAG_CONTINUOUS_1_5;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxDebug_<ContainerAllocator>::ACCUMULATOR_FLAG_CONTINUOUS_1_6;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxDebug_<ContainerAllocator>::ACCUMULATOR_FLAG_CONTINUOUS_1_7;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxDebug_<ContainerAllocator>::ACCUMULATOR_FLAG_CONTINUOUS_1_8;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxDebug_<ContainerAllocator>::ACCUMULATOR_FLAG_CONTINUOUS_1_9;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxDebug_<ContainerAllocator>::ACCUMULATOR_FLAG_CONTINUOUS_2_0;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxDebug_<ContainerAllocator>::ACCUMULATOR_FLAG_CONTINUOUS_2_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxDebug_<ContainerAllocator>::ACCUMULATOR_FLAG_CONTINUOUS_2_2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxDebug_<ContainerAllocator>::ACCUMULATOR_FLAG_CONTINUOUS_2_3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxDebug_<ContainerAllocator>::ACCUMULATOR_FLAG_CONTINUOUS_2_4;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxDebug_<ContainerAllocator>::ACCUMULATOR_FLAG_CONTINUOUS_2_5;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxDebug_<ContainerAllocator>::ACCUMULATOR_FLAG_CONTINUOUS_2_6;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxDebug_<ContainerAllocator>::ACCUMULATOR_FLAG_CONTINUOUS_2_7;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxDebug_<ContainerAllocator>::ACCUMULATOR_FLAG_CONTINUOUS_2_8;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxDebug_<ContainerAllocator>::ACCUMULATOR_FLAG_CONTINUOUS_2_9;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxDebug_<ContainerAllocator>::ACCUMULATOR_FLAG_CONTINUOUS_3_0;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxDebug_<ContainerAllocator>::ACCUMULATOR_ABOVE_RATED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxDebug_<ContainerAllocator>::ACCUMULATOR_CONTINUOUS_1_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxDebug_<ContainerAllocator>::ACCUMULATOR_CONTINUOUS_1_5;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxDebug_<ContainerAllocator>::ACCUMULATOR_CONTINUOUS_2_0;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxDebug_<ContainerAllocator>::ACCUMULATOR_CONTINUOUS_2_5;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxDebug_<ContainerAllocator>::ACCUMULATOR_CONTINUOUS_3_0;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxDebug_<ContainerAllocator>::CURRENT_ID_FB;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxDebug_<ContainerAllocator>::CURRENT_ID_FF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxDebug_<ContainerAllocator>::CURRENT_ID_REF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxDebug_<ContainerAllocator>::CURRENT_IQ_FB;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxDebug_<ContainerAllocator>::CURRENT_IQ_FF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxDebug_<ContainerAllocator>::CURRENT_IQ_REF;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace clearpath_motor_msgs

#endif  // CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_DEBUG__STRUCT_HPP_
