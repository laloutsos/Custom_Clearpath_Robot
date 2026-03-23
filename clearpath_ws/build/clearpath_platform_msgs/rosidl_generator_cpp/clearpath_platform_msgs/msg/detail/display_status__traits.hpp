// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from clearpath_platform_msgs:msg/DisplayStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_platform_msgs/msg/display_status.hpp"


#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__DISPLAY_STATUS__TRAITS_HPP_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__DISPLAY_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "clearpath_platform_msgs/msg/detail/display_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace clearpath_platform_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DisplayStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: string1
  {
    out << "string1: ";
    rosidl_generator_traits::value_to_yaml(msg.string1, out);
    out << ", ";
  }

  // member: string2
  {
    out << "string2: ";
    rosidl_generator_traits::value_to_yaml(msg.string2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DisplayStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: string1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "string1: ";
    rosidl_generator_traits::value_to_yaml(msg.string1, out);
    out << "\n";
  }

  // member: string2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "string2: ";
    rosidl_generator_traits::value_to_yaml(msg.string2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DisplayStatus & msg, bool use_flow_style = false)
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
  const clearpath_platform_msgs::msg::DisplayStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  clearpath_platform_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use clearpath_platform_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const clearpath_platform_msgs::msg::DisplayStatus & msg)
{
  return clearpath_platform_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<clearpath_platform_msgs::msg::DisplayStatus>()
{
  return "clearpath_platform_msgs::msg::DisplayStatus";
}

template<>
inline const char * name<clearpath_platform_msgs::msg::DisplayStatus>()
{
  return "clearpath_platform_msgs/msg/DisplayStatus";
}

template<>
struct has_fixed_size<clearpath_platform_msgs::msg::DisplayStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<clearpath_platform_msgs::msg::DisplayStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<clearpath_platform_msgs::msg::DisplayStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__DISPLAY_STATUS__TRAITS_HPP_
