// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from clearpath_motor_msgs:msg/LynxDebug.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_motor_msgs/msg/lynx_debug.hpp"


#ifndef CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_DEBUG__BUILDER_HPP_
#define CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_DEBUG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "clearpath_motor_msgs/msg/detail/lynx_debug__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace clearpath_motor_msgs
{

namespace msg
{

namespace builder
{

class Init_LynxDebug_currents
{
public:
  explicit Init_LynxDebug_currents(::clearpath_motor_msgs::msg::LynxDebug & msg)
  : msg_(msg)
  {}
  ::clearpath_motor_msgs::msg::LynxDebug currents(::clearpath_motor_msgs::msg::LynxDebug::_currents_type arg)
  {
    msg_.currents = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clearpath_motor_msgs::msg::LynxDebug msg_;
};

class Init_LynxDebug_accumulators
{
public:
  explicit Init_LynxDebug_accumulators(::clearpath_motor_msgs::msg::LynxDebug & msg)
  : msg_(msg)
  {}
  Init_LynxDebug_currents accumulators(::clearpath_motor_msgs::msg::LynxDebug::_accumulators_type arg)
  {
    msg_.accumulators = std::move(arg);
    return Init_LynxDebug_currents(msg_);
  }

private:
  ::clearpath_motor_msgs::msg::LynxDebug msg_;
};

class Init_LynxDebug_accumulator_flags
{
public:
  explicit Init_LynxDebug_accumulator_flags(::clearpath_motor_msgs::msg::LynxDebug & msg)
  : msg_(msg)
  {}
  Init_LynxDebug_accumulators accumulator_flags(::clearpath_motor_msgs::msg::LynxDebug::_accumulator_flags_type arg)
  {
    msg_.accumulator_flags = std::move(arg);
    return Init_LynxDebug_accumulators(msg_);
  }

private:
  ::clearpath_motor_msgs::msg::LynxDebug msg_;
};

class Init_LynxDebug_fault_frequency
{
public:
  explicit Init_LynxDebug_fault_frequency(::clearpath_motor_msgs::msg::LynxDebug & msg)
  : msg_(msg)
  {}
  Init_LynxDebug_accumulator_flags fault_frequency(::clearpath_motor_msgs::msg::LynxDebug::_fault_frequency_type arg)
  {
    msg_.fault_frequency = std::move(arg);
    return Init_LynxDebug_accumulator_flags(msg_);
  }

private:
  ::clearpath_motor_msgs::msg::LynxDebug msg_;
};

class Init_LynxDebug_joint_name
{
public:
  explicit Init_LynxDebug_joint_name(::clearpath_motor_msgs::msg::LynxDebug & msg)
  : msg_(msg)
  {}
  Init_LynxDebug_fault_frequency joint_name(::clearpath_motor_msgs::msg::LynxDebug::_joint_name_type arg)
  {
    msg_.joint_name = std::move(arg);
    return Init_LynxDebug_fault_frequency(msg_);
  }

private:
  ::clearpath_motor_msgs::msg::LynxDebug msg_;
};

class Init_LynxDebug_can_id
{
public:
  Init_LynxDebug_can_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LynxDebug_joint_name can_id(::clearpath_motor_msgs::msg::LynxDebug::_can_id_type arg)
  {
    msg_.can_id = std::move(arg);
    return Init_LynxDebug_joint_name(msg_);
  }

private:
  ::clearpath_motor_msgs::msg::LynxDebug msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::clearpath_motor_msgs::msg::LynxDebug>()
{
  return clearpath_motor_msgs::msg::builder::Init_LynxDebug_can_id();
}

}  // namespace clearpath_motor_msgs

#endif  // CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_DEBUG__BUILDER_HPP_
