// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from clearpath_platform_msgs:msg/PinoutCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_platform_msgs/msg/pinout_command.hpp"


#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__PINOUT_COMMAND__TRAITS_HPP_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__PINOUT_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "clearpath_platform_msgs/msg/detail/pinout_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace clearpath_platform_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PinoutCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: rails
  {
    if (msg.rails.size() == 0) {
      out << "rails: []";
    } else {
      out << "rails: [";
      size_t pending_items = msg.rails.size();
      for (auto item : msg.rails) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: outputs
  {
    if (msg.outputs.size() == 0) {
      out << "outputs: []";
    } else {
      out << "outputs: [";
      size_t pending_items = msg.outputs.size();
      for (auto item : msg.outputs) {
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
  const PinoutCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rails
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rails.size() == 0) {
      out << "rails: []\n";
    } else {
      out << "rails:\n";
      for (auto item : msg.rails) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: outputs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.outputs.size() == 0) {
      out << "outputs: []\n";
    } else {
      out << "outputs:\n";
      for (auto item : msg.outputs) {
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

inline std::string to_yaml(const PinoutCommand & msg, bool use_flow_style = false)
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

}  // namespace clearpath_platform_msgs

namespace rosidl_generator_traits
{

[[deprecated("use clearpath_platform_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const clearpath_platform_msgs::msg::PinoutCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  clearpath_platform_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use clearpath_platform_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const clearpath_platform_msgs::msg::PinoutCommand & msg)
{
  return clearpath_platform_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<clearpath_platform_msgs::msg::PinoutCommand>()
{
  return "clearpath_platform_msgs::msg::PinoutCommand";
}

template<>
inline const char * name<clearpath_platform_msgs::msg::PinoutCommand>()
{
  return "clearpath_platform_msgs/msg/PinoutCommand";
}

template<>
struct has_fixed_size<clearpath_platform_msgs::msg::PinoutCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<clearpath_platform_msgs::msg::PinoutCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<clearpath_platform_msgs::msg::PinoutCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__PINOUT_COMMAND__TRAITS_HPP_
