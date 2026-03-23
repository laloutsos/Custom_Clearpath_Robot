// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from clearpath_motor_msgs:msg/LynxMotorProtection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_motor_msgs/msg/lynx_motor_protection.h"


#ifndef CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_MOTOR_PROTECTION__STRUCT_H_
#define CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_MOTOR_PROTECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'NORMAL'.
/**
  * Protection states
 */
enum
{
  clearpath_motor_msgs__msg__LynxMotorProtection__NORMAL = 0
};

/// Constant 'THROTTLED'.
enum
{
  clearpath_motor_msgs__msg__LynxMotorProtection__THROTTLED = 1
};

/// Constant 'OVERHEATED'.
enum
{
  clearpath_motor_msgs__msg__LynxMotorProtection__OVERHEATED = 2
};

/// Constant 'ERROR'.
enum
{
  clearpath_motor_msgs__msg__LynxMotorProtection__ERROR = 3
};

// Include directives for member types
// Member 'joint_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/LynxMotorProtection in the package clearpath_motor_msgs.
/**
  * Number on the bus (CAN ID).
 */
typedef struct clearpath_motor_msgs__msg__LynxMotorProtection
{
  uint8_t can_id;
  /// Name of joint controlled, or other identifier.
  rosidl_runtime_c__String joint_name;
  /// Protection state
  uint8_t state;
} clearpath_motor_msgs__msg__LynxMotorProtection;

// Struct for a sequence of clearpath_motor_msgs__msg__LynxMotorProtection.
typedef struct clearpath_motor_msgs__msg__LynxMotorProtection__Sequence
{
  clearpath_motor_msgs__msg__LynxMotorProtection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clearpath_motor_msgs__msg__LynxMotorProtection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_MOTOR_PROTECTION__STRUCT_H_
