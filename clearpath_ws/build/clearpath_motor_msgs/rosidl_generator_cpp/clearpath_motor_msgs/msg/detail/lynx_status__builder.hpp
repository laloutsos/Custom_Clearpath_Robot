// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from clearpath_motor_msgs:msg/LynxStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_motor_msgs/msg/lynx_status.hpp"


#ifndef CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_STATUS__BUILDER_HPP_
#define CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "clearpath_motor_msgs/msg/detail/lynx_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace clearpath_motor_msgs
{

namespace msg
{

namespace builder
{

class Init_LynxStatus_error_flags
{
public:
  explicit Init_LynxStatus_error_flags(::clearpath_motor_msgs::msg::LynxStatus & msg)
  : msg_(msg)
  {}
  ::clearpath_motor_msgs::msg::LynxStatus error_flags(::clearpath_motor_msgs::msg::LynxStatus::_error_flags_type arg)
  {
    msg_.error_flags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::clearpath_motor_msgs::msg::LynxStatus msg_;
};

class Init_LynxStatus_warning_flags
{
public:
  explicit Init_LynxStatus_warning_flags(::clearpath_motor_msgs::msg::LynxStatus & msg)
  : msg_(msg)
  {}
  Init_LynxStatus_error_flags warning_flags(::clearpath_motor_msgs::msg::LynxStatus::_warning_flags_type arg)
  {
    msg_.warning_flags = std::move(arg);
    return Init_LynxStatus_error_flags(msg_);
  }

private:
  ::clearpath_motor_msgs::msg::LynxStatus msg_;
};

class Init_LynxStatus_status_flags
{
public:
  explicit Init_LynxStatus_status_flags(::clearpath_motor_msgs::msg::LynxStatus & msg)
  : msg_(msg)
  {}
  Init_LynxStatus_warning_flags status_flags(::clearpath_motor_msgs::msg::LynxStatus::_status_flags_type arg)
  {
    msg_.status_flags = std::move(arg);
    return Init_LynxStatus_warning_flags(msg_);
  }

private:
  ::clearpath_motor_msgs::msg::LynxStatus msg_;
};

class Init_LynxStatus_stopped
{
public:
  explicit Init_LynxStatus_stopped(::clearpath_motor_msgs::msg::LynxStatus & msg)
  : msg_(msg)
  {}
  Init_LynxStatus_status_flags stopped(::clearpath_motor_msgs::msg::LynxStatus::_stopped_type arg)
  {
    msg_.stopped = std::move(arg);
    return Init_LynxStatus_status_flags(msg_);
  }

private:
  ::clearpath_motor_msgs::msg::LynxStatus msg_;
};

class Init_LynxStatus_pcb_temperature
{
public:
  explicit Init_LynxStatus_pcb_temperature(::clearpath_motor_msgs::msg::LynxStatus & msg)
  : msg_(msg)
  {}
  Init_LynxStatus_stopped pcb_temperature(::clearpath_motor_msgs::msg::LynxStatus::_pcb_temperature_type arg)
  {
    msg_.pcb_temperature = std::move(arg);
    return Init_LynxStatus_stopped(msg_);
  }

private:
  ::clearpath_motor_msgs::msg::LynxStatus msg_;
};

class Init_LynxStatus_mcu_temperature
{
public:
  explicit Init_LynxStatus_mcu_temperature(::clearpath_motor_msgs::msg::LynxStatus & msg)
  : msg_(msg)
  {}
  Init_LynxStatus_pcb_temperature mcu_temperature(::clearpath_motor_msgs::msg::LynxStatus::_mcu_temperature_type arg)
  {
    msg_.mcu_temperature = std::move(arg);
    return Init_LynxStatus_pcb_temperature(msg_);
  }

private:
  ::clearpath_motor_msgs::msg::LynxStatus msg_;
};

class Init_LynxStatus_motor_temperature
{
public:
  explicit Init_LynxStatus_motor_temperature(::clearpath_motor_msgs::msg::LynxStatus & msg)
  : msg_(msg)
  {}
  Init_LynxStatus_mcu_temperature motor_temperature(::clearpath_motor_msgs::msg::LynxStatus::_motor_temperature_type arg)
  {
    msg_.motor_temperature = std::move(arg);
    return Init_LynxStatus_mcu_temperature(msg_);
  }

private:
  ::clearpath_motor_msgs::msg::LynxStatus msg_;
};

class Init_LynxStatus_firmware_version
{
public:
  explicit Init_LynxStatus_firmware_version(::clearpath_motor_msgs::msg::LynxStatus & msg)
  : msg_(msg)
  {}
  Init_LynxStatus_motor_temperature firmware_version(::clearpath_motor_msgs::msg::LynxStatus::_firmware_version_type arg)
  {
    msg_.firmware_version = std::move(arg);
    return Init_LynxStatus_motor_temperature(msg_);
  }

private:
  ::clearpath_motor_msgs::msg::LynxStatus msg_;
};

class Init_LynxStatus_joint_name
{
public:
  explicit Init_LynxStatus_joint_name(::clearpath_motor_msgs::msg::LynxStatus & msg)
  : msg_(msg)
  {}
  Init_LynxStatus_firmware_version joint_name(::clearpath_motor_msgs::msg::LynxStatus::_joint_name_type arg)
  {
    msg_.joint_name = std::move(arg);
    return Init_LynxStatus_firmware_version(msg_);
  }

private:
  ::clearpath_motor_msgs::msg::LynxStatus msg_;
};

class Init_LynxStatus_can_id
{
public:
  Init_LynxStatus_can_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LynxStatus_joint_name can_id(::clearpath_motor_msgs::msg::LynxStatus::_can_id_type arg)
  {
    msg_.can_id = std::move(arg);
    return Init_LynxStatus_joint_name(msg_);
  }

private:
  ::clearpath_motor_msgs::msg::LynxStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::clearpath_motor_msgs::msg::LynxStatus>()
{
  return clearpath_motor_msgs::msg::builder::Init_LynxStatus_can_id();
}

}  // namespace clearpath_motor_msgs

#endif  // CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_STATUS__BUILDER_HPP_
