// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from clearpath_motor_msgs:msg/LynxFeedback.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_motor_msgs/msg/lynx_feedback.h"


#ifndef CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_FEEDBACK__STRUCT_H_
#define CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_FEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'joint_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/LynxFeedback in the package clearpath_motor_msgs.
/**
  * Number on the bus (CAN ID).
 */
typedef struct clearpath_motor_msgs__msg__LynxFeedback
{
  uint8_t can_id;
  /// Name of joint controlled, or other identifier.
  rosidl_runtime_c__String joint_name;
  /// Current consumed (amps RMS).
  float current;
  /// Motor voltage (volts).
  float voltage;
  /// Angular velocity of the wheel (rad/s).
  float velocity;
  /// Total travel of the wheel (rad).
  float travel;
} clearpath_motor_msgs__msg__LynxFeedback;

// Struct for a sequence of clearpath_motor_msgs__msg__LynxFeedback.
typedef struct clearpath_motor_msgs__msg__LynxFeedback__Sequence
{
  clearpath_motor_msgs__msg__LynxFeedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clearpath_motor_msgs__msg__LynxFeedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_FEEDBACK__STRUCT_H_
