// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from clearpath_motor_msgs:msg/LynxStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_motor_msgs/msg/lynx_status.hpp"


#ifndef CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_STATUS__STRUCT_HPP_
#define CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__clearpath_motor_msgs__msg__LynxStatus __attribute__((deprecated))
#else
# define DEPRECATED__clearpath_motor_msgs__msg__LynxStatus __declspec(deprecated)
#endif

namespace clearpath_motor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LynxStatus_
{
  using Type = LynxStatus_<ContainerAllocator>;

  explicit LynxStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_id = 0;
      this->joint_name = "";
      this->firmware_version = "";
      this->motor_temperature = 0.0f;
      this->mcu_temperature = 0.0f;
      this->pcb_temperature = 0.0f;
      this->stopped = false;
      this->status_flags = 0ul;
      this->warning_flags = 0ul;
      this->error_flags = 0ul;
    }
  }

  explicit LynxStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_name(_alloc),
    firmware_version(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_id = 0;
      this->joint_name = "";
      this->firmware_version = "";
      this->motor_temperature = 0.0f;
      this->mcu_temperature = 0.0f;
      this->pcb_temperature = 0.0f;
      this->stopped = false;
      this->status_flags = 0ul;
      this->warning_flags = 0ul;
      this->error_flags = 0ul;
    }
  }

  // field types and members
  using _can_id_type =
    uint8_t;
  _can_id_type can_id;
  using _joint_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _joint_name_type joint_name;
  using _firmware_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _firmware_version_type firmware_version;
  using _motor_temperature_type =
    float;
  _motor_temperature_type motor_temperature;
  using _mcu_temperature_type =
    float;
  _mcu_temperature_type mcu_temperature;
  using _pcb_temperature_type =
    float;
  _pcb_temperature_type pcb_temperature;
  using _stopped_type =
    bool;
  _stopped_type stopped;
  using _status_flags_type =
    uint32_t;
  _status_flags_type status_flags;
  using _warning_flags_type =
    uint32_t;
  _warning_flags_type warning_flags;
  using _error_flags_type =
    uint32_t;
  _error_flags_type error_flags;

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
  Type & set__firmware_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->firmware_version = _arg;
    return *this;
  }
  Type & set__motor_temperature(
    const float & _arg)
  {
    this->motor_temperature = _arg;
    return *this;
  }
  Type & set__mcu_temperature(
    const float & _arg)
  {
    this->mcu_temperature = _arg;
    return *this;
  }
  Type & set__pcb_temperature(
    const float & _arg)
  {
    this->pcb_temperature = _arg;
    return *this;
  }
  Type & set__stopped(
    const bool & _arg)
  {
    this->stopped = _arg;
    return *this;
  }
  Type & set__status_flags(
    const uint32_t & _arg)
  {
    this->status_flags = _arg;
    return *this;
  }
  Type & set__warning_flags(
    const uint32_t & _arg)
  {
    this->warning_flags = _arg;
    return *this;
  }
  Type & set__error_flags(
    const uint32_t & _arg)
  {
    this->error_flags = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STATUS_FLAG_ADC_CALIBRATED =
    0u;
  static constexpr uint8_t STATUS_FLAG_FOC_ENABLED =
    1u;
  static constexpr uint8_t STATUS_FLAG_CALIBRATION_REQUESTED =
    2u;
  static constexpr uint8_t STATUS_FLAG_CALIBRATION_CANCELLED =
    3u;
  static constexpr uint8_t STATUS_FLAG_ESTOPPED =
    4u;
  static constexpr uint8_t WARNING_FLAG_MOTOR_THERMISTOR =
    0u;
  static constexpr uint8_t WARNING_FLAG_PCB_THERMISTOR =
    1u;
  static constexpr uint8_t WARNING_FLAG_PHASE =
    2u;
  static constexpr uint8_t WARNING_FLAG_PHASE_A =
    3u;
  static constexpr uint8_t WARNING_FLAG_PHASE_B =
    4u;
  static constexpr uint8_t WARNING_FLAG_PHASE_C =
    5u;
  static constexpr uint8_t WARNING_FLAG_ENCODER_INDEX =
    6u;
  static constexpr uint8_t WARNING_FLAG_ENCODER_OUTPUT_A =
    7u;
  static constexpr uint8_t WARNING_FLAG_ENCODER_OUTPUT_B =
    8u;
  static constexpr uint8_t ERROR_FLAG_NOT_CALIBRATED =
    0u;
  static constexpr uint8_t ERROR_FLAG_MOTOR_FAULT =
    1u;
  static constexpr uint8_t ERROR_FLAG_MOTOR_STALLING =
    2u;
  static constexpr uint8_t ERROR_FLAG_MOTOR_THERMISTOR =
    3u;
  static constexpr uint8_t ERROR_FLAG_PCB_THERMISTOR =
    4u;
  static constexpr uint8_t ERROR_FLAG_PHASE =
    5u;
  static constexpr uint8_t ERROR_FLAG_PHASE_A =
    6u;
  static constexpr uint8_t ERROR_FLAG_PHASE_B =
    7u;
  static constexpr uint8_t ERROR_FLAG_PHASE_C =
    8u;
  static constexpr uint8_t ERROR_FLAG_ENCODER_POWER =
    9u;
  static constexpr uint8_t ERROR_FLAG_ENCODER_INDEX =
    10u;
  static constexpr uint8_t ERROR_FLAG_ENCODER_OUTPUT_A =
    11u;
  static constexpr uint8_t ERROR_FLAG_ENCODER_OUTPUT_B =
    12u;

  // pointer types
  using RawPtr =
    clearpath_motor_msgs::msg::LynxStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const clearpath_motor_msgs::msg::LynxStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<clearpath_motor_msgs::msg::LynxStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<clearpath_motor_msgs::msg::LynxStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      clearpath_motor_msgs::msg::LynxStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<clearpath_motor_msgs::msg::LynxStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      clearpath_motor_msgs::msg::LynxStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<clearpath_motor_msgs::msg::LynxStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<clearpath_motor_msgs::msg::LynxStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<clearpath_motor_msgs::msg::LynxStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__clearpath_motor_msgs__msg__LynxStatus
    std::shared_ptr<clearpath_motor_msgs::msg::LynxStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__clearpath_motor_msgs__msg__LynxStatus
    std::shared_ptr<clearpath_motor_msgs::msg::LynxStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LynxStatus_ & other) const
  {
    if (this->can_id != other.can_id) {
      return false;
    }
    if (this->joint_name != other.joint_name) {
      return false;
    }
    if (this->firmware_version != other.firmware_version) {
      return false;
    }
    if (this->motor_temperature != other.motor_temperature) {
      return false;
    }
    if (this->mcu_temperature != other.mcu_temperature) {
      return false;
    }
    if (this->pcb_temperature != other.pcb_temperature) {
      return false;
    }
    if (this->stopped != other.stopped) {
      return false;
    }
    if (this->status_flags != other.status_flags) {
      return false;
    }
    if (this->warning_flags != other.warning_flags) {
      return false;
    }
    if (this->error_flags != other.error_flags) {
      return false;
    }
    return true;
  }
  bool operator!=(const LynxStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LynxStatus_

// alias to use template instance with default allocator
using LynxStatus =
  clearpath_motor_msgs::msg::LynxStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxStatus_<ContainerAllocator>::STATUS_FLAG_ADC_CALIBRATED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxStatus_<ContainerAllocator>::STATUS_FLAG_FOC_ENABLED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxStatus_<ContainerAllocator>::STATUS_FLAG_CALIBRATION_REQUESTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxStatus_<ContainerAllocator>::STATUS_FLAG_CALIBRATION_CANCELLED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxStatus_<ContainerAllocator>::STATUS_FLAG_ESTOPPED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxStatus_<ContainerAllocator>::WARNING_FLAG_MOTOR_THERMISTOR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxStatus_<ContainerAllocator>::WARNING_FLAG_PCB_THERMISTOR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxStatus_<ContainerAllocator>::WARNING_FLAG_PHASE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxStatus_<ContainerAllocator>::WARNING_FLAG_PHASE_A;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxStatus_<ContainerAllocator>::WARNING_FLAG_PHASE_B;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxStatus_<ContainerAllocator>::WARNING_FLAG_PHASE_C;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxStatus_<ContainerAllocator>::WARNING_FLAG_ENCODER_INDEX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxStatus_<ContainerAllocator>::WARNING_FLAG_ENCODER_OUTPUT_A;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxStatus_<ContainerAllocator>::WARNING_FLAG_ENCODER_OUTPUT_B;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxStatus_<ContainerAllocator>::ERROR_FLAG_NOT_CALIBRATED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxStatus_<ContainerAllocator>::ERROR_FLAG_MOTOR_FAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxStatus_<ContainerAllocator>::ERROR_FLAG_MOTOR_STALLING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxStatus_<ContainerAllocator>::ERROR_FLAG_MOTOR_THERMISTOR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxStatus_<ContainerAllocator>::ERROR_FLAG_PCB_THERMISTOR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxStatus_<ContainerAllocator>::ERROR_FLAG_PHASE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxStatus_<ContainerAllocator>::ERROR_FLAG_PHASE_A;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxStatus_<ContainerAllocator>::ERROR_FLAG_PHASE_B;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxStatus_<ContainerAllocator>::ERROR_FLAG_PHASE_C;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxStatus_<ContainerAllocator>::ERROR_FLAG_ENCODER_POWER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxStatus_<ContainerAllocator>::ERROR_FLAG_ENCODER_INDEX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxStatus_<ContainerAllocator>::ERROR_FLAG_ENCODER_OUTPUT_A;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LynxStatus_<ContainerAllocator>::ERROR_FLAG_ENCODER_OUTPUT_B;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace clearpath_motor_msgs

#endif  // CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_STATUS__STRUCT_HPP_
