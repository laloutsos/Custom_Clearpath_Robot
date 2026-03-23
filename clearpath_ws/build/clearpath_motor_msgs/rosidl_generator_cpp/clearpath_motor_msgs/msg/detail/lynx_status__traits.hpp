// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from clearpath_motor_msgs:msg/LynxStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_motor_msgs/msg/lynx_status.hpp"


#ifndef CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_STATUS__TRAITS_HPP_
#define CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "clearpath_motor_msgs/msg/detail/lynx_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace clearpath_motor_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LynxStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: can_id
  {
    out << "can_id: ";
    rosidl_generator_traits::value_to_yaml(msg.can_id, out);
    out << ", ";
  }

  // member: joint_name
  {
    out << "joint_name: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_name, out);
    out << ", ";
  }

  // member: firmware_version
  {
    out << "firmware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware_version, out);
    out << ", ";
  }

  // member: motor_temperature
  {
    out << "motor_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_temperature, out);
    out << ", ";
  }

  // member: mcu_temperature
  {
    out << "mcu_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.mcu_temperature, out);
    out << ", ";
  }

  // member: pcb_temperature
  {
    out << "pcb_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.pcb_temperature, out);
    out << ", ";
  }

  // member: stopped
  {
    out << "stopped: ";
    rosidl_generator_traits::value_to_yaml(msg.stopped, out);
    out << ", ";
  }

  // member: status_flags
  {
    out << "status_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.status_flags, out);
    out << ", ";
  }

  // member: warning_flags
  {
    out << "warning_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.warning_flags, out);
    out << ", ";
  }

  // member: error_flags
  {
    out << "error_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.error_flags, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LynxStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: can_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_id: ";
    rosidl_generator_traits::value_to_yaml(msg.can_id, out);
    out << "\n";
  }

  // member: joint_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_name: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_name, out);
    out << "\n";
  }

  // member: firmware_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "firmware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware_version, out);
    out << "\n";
  }

  // member: motor_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_temperature, out);
    out << "\n";
  }

  // member: mcu_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mcu_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.mcu_temperature, out);
    out << "\n";
  }

  // member: pcb_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pcb_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.pcb_temperature, out);
    out << "\n";
  }

  // member: stopped
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stopped: ";
    rosidl_generator_traits::value_to_yaml(msg.stopped, out);
    out << "\n";
  }

  // member: status_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.status_flags, out);
    out << "\n";
  }

  // member: warning_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "warning_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.warning_flags, out);
    out << "\n";
  }

  // member: error_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.error_flags, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LynxStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace clearpath_motor_msgs

namespace rosidl_generator_traits
{

[[deprecated("use clearpath_motor_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const clearpath_motor_msgs::msg::LynxStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  clearpath_motor_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use clearpath_motor_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const clearpath_motor_msgs::msg::LynxStatus & msg)
{
  return clearpath_motor_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<clearpath_motor_msgs::msg::LynxStatus>()
{
  return "clearpath_motor_msgs::msg::LynxStatus";
}

template<>
inline const char * name<clearpath_motor_msgs::msg::LynxStatus>()
{
  return "clearpath_motor_msgs/msg/LynxStatus";
}

template<>
struct has_fixed_size<clearpath_motor_msgs::msg::LynxStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<clearpath_motor_msgs::msg::LynxStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<clearpath_motor_msgs::msg::LynxStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_STATUS__TRAITS_HPP_
