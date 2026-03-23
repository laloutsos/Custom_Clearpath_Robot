// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from clearpath_motor_msgs:msg/LynxSystemProtection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_motor_msgs/msg/lynx_system_protection.h"


#ifndef CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_SYSTEM_PROTECTION__STRUCT_H_
#define CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_SYSTEM_PROTECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'motor_states'
#include "clearpath_motor_msgs/msg/detail/lynx_motor_protection__struct.h"

/// Struct defined in msg/LynxSystemProtection in the package clearpath_motor_msgs.
typedef struct clearpath_motor_msgs__msg__LynxSystemProtection
{
  std_msgs__msg__Header header;
  /// System state based on highest protection state of motors
  uint8_t system_state;
  /// Individual motor protection states
  clearpath_motor_msgs__msg__LynxMotorProtection__Sequence motor_states;
} clearpath_motor_msgs__msg__LynxSystemProtection;

// Struct for a sequence of clearpath_motor_msgs__msg__LynxSystemProtection.
typedef struct clearpath_motor_msgs__msg__LynxSystemProtection__Sequence
{
  clearpath_motor_msgs__msg__LynxSystemProtection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clearpath_motor_msgs__msg__LynxSystemProtection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_SYSTEM_PROTECTION__STRUCT_H_
