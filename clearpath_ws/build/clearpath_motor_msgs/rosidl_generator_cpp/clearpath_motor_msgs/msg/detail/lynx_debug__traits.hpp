// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from clearpath_motor_msgs:msg/LynxDebug.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_motor_msgs/msg/lynx_debug.hpp"


#ifndef CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_DEBUG__TRAITS_HPP_
#define CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_DEBUG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "clearpath_motor_msgs/msg/detail/lynx_debug__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace clearpath_motor_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LynxDebug & msg,
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

  // member: fault_frequency
  {
    out << "fault_frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_frequency, out);
    out << ", ";
  }

  // member: accumulator_flags
  {
    out << "accumulator_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.accumulator_flags, out);
    out << ", ";
  }

  // member: accumulators
  {
    if (msg.accumulators.size() == 0) {
      out << "accumulators: []";
    } else {
      out << "accumulators: [";
      size_t pending_items = msg.accumulators.size();
      for (auto item : msg.accumulators) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: currents
  {
    if (msg.currents.size() == 0) {
      out << "currents: []";
    } else {
      out << "currents: [";
      size_t pending_items = msg.currents.size();
      for (auto item : msg.currents) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LynxDebug & msg,
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

  // member: fault_frequency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fault_frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_frequency, out);
    out << "\n";
  }

  // member: accumulator_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accumulator_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.accumulator_flags, out);
    out << "\n";
  }

  // member: accumulators
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.accumulators.size() == 0) {
      out << "accumulators: []\n";
    } else {
      out << "accumulators:\n";
      for (auto item : msg.accumulators) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: currents
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.currents.size() == 0) {
      out << "currents: []\n";
    } else {
      out << "currents:\n";
      for (auto item : msg.currents) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LynxDebug & msg, bool use_flow_style = false)
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
  const clearpath_motor_msgs::msg::LynxDebug & msg,
  std::ostream & out, size_t indentation = 0)
{
  clearpath_motor_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use clearpath_motor_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const clearpath_motor_msgs::msg::LynxDebug & msg)
{
  return clearpath_motor_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<clearpath_motor_msgs::msg::LynxDebug>()
{
  return "clearpath_motor_msgs::msg::LynxDebug";
}

template<>
inline const char * name<clearpath_motor_msgs::msg::LynxDebug>()
{
  return "clearpath_motor_msgs/msg/LynxDebug";
}

template<>
struct has_fixed_size<clearpath_motor_msgs::msg::LynxDebug>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<clearpath_motor_msgs::msg::LynxDebug>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<clearpath_motor_msgs::msg::LynxDebug>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_DEBUG__TRAITS_HPP_
