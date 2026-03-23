// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from clearpath_platform_msgs:msg/Temperature.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_platform_msgs/msg/temperature.hpp"


#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__TEMPERATURE__TRAITS_HPP_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__TEMPERATURE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "clearpath_platform_msgs/msg/detail/temperature__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace clearpath_platform_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Temperature & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: temperatures
  {
    if (msg.temperatures.size() == 0) {
      out << "temperatures: []";
    } else {
      out << "temperatures: [";
      size_t pending_items = msg.temperatures.size();
      for (auto item : msg.temperatures) {
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
  const Temperature & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: temperatures
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.temperatures.size() == 0) {
      out << "temperatures: []\n";
    } else {
      out << "temperatures:\n";
      for (auto item : msg.temperatures) {
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

inline std::string to_yaml(const Temperature & msg, bool use_flow_style = false)
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
  const clearpath_platform_msgs::msg::Temperature & msg,
  std::ostream & out, size_t indentation = 0)
{
  clearpath_platform_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use clearpath_platform_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const clearpath_platform_msgs::msg::Temperature & msg)
{
  return clearpath_platform_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<clearpath_platform_msgs::msg::Temperature>()
{
  return "clearpath_platform_msgs::msg::Temperature";
}

template<>
inline const char * name<clearpath_platform_msgs::msg::Temperature>()
{
  return "clearpath_platform_msgs/msg/Temperature";
}

template<>
struct has_fixed_size<clearpath_platform_msgs::msg::Temperature>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<clearpath_platform_msgs::msg::Temperature>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<clearpath_platform_msgs::msg::Temperature>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__TEMPERATURE__TRAITS_HPP_
