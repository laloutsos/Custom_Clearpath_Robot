// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from clearpath_motor_msgs:msg/LynxMultiDebug.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_motor_msgs/msg/lynx_multi_debug.h"


#ifndef CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_MULTI_DEBUG__STRUCT_H_
#define CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_MULTI_DEBUG__STRUCT_H_

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
// Member 'drivers'
#include "clearpath_motor_msgs/msg/detail/lynx_debug__struct.h"

/// Struct defined in msg/LynxMultiDebug in the package clearpath_motor_msgs.
typedef struct clearpath_motor_msgs__msg__LynxMultiDebug
{
  std_msgs__msg__Header header;
  clearpath_motor_msgs__msg__LynxDebug__Sequence drivers;
} clearpath_motor_msgs__msg__LynxMultiDebug;

// Struct for a sequence of clearpath_motor_msgs__msg__LynxMultiDebug.
typedef struct clearpath_motor_msgs__msg__LynxMultiDebug__Sequence
{
  clearpath_motor_msgs__msg__LynxMultiDebug * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clearpath_motor_msgs__msg__LynxMultiDebug__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_MULTI_DEBUG__STRUCT_H_
