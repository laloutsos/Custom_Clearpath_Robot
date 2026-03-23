// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from clearpath_platform_msgs:msg/PinoutState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_platform_msgs/msg/pinout_state.h"


#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__PINOUT_STATE__STRUCT_H_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__PINOUT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'CC01_USER_PWR_CTRL'.
/**
  * Current power rail state
  * CC01
 */
enum
{
  clearpath_platform_msgs__msg__PinoutState__CC01_USER_PWR_CTRL = 0
};

/// Constant 'D100_AUX_IN1'.
/**
  * Current input state
  * Dingo 1.0 (D100)
 */
enum
{
  clearpath_platform_msgs__msg__PinoutState__D100_AUX_IN1 = 0
};

/// Constant 'D100_AUX_IN2'.
enum
{
  clearpath_platform_msgs__msg__PinoutState__D100_AUX_IN2 = 1
};

/// Constant 'D100_AUX_IN3'.
enum
{
  clearpath_platform_msgs__msg__PinoutState__D100_AUX_IN3 = 2
};

/// Constant 'D150_AUX_IN1'.
/**
  * Dingo 1.5 (D150)
 */
enum
{
  clearpath_platform_msgs__msg__PinoutState__D150_AUX_IN1 = 0
};

/// Constant 'D150_AUX_IN2'.
enum
{
  clearpath_platform_msgs__msg__PinoutState__D150_AUX_IN2 = 1
};

/// Constant 'D150_AUX_IN3'.
enum
{
  clearpath_platform_msgs__msg__PinoutState__D150_AUX_IN3 = 2
};

/// Constant 'CC01_AUX_IN1'.
/**
  * CC01
 */
enum
{
  clearpath_platform_msgs__msg__PinoutState__CC01_AUX_IN1 = 0
};

/// Constant 'CC01_AUX_IN2'.
enum
{
  clearpath_platform_msgs__msg__PinoutState__CC01_AUX_IN2 = 1
};

/// Constant 'CC01_AUX_IN3'.
enum
{
  clearpath_platform_msgs__msg__PinoutState__CC01_AUX_IN3 = 2
};

/// Constant 'CC01_GPI0'.
enum
{
  clearpath_platform_msgs__msg__PinoutState__CC01_GPI0 = 3
};

/// Constant 'CC01_GPI1'.
enum
{
  clearpath_platform_msgs__msg__PinoutState__CC01_GPI1 = 4
};

/// Constant 'CC01_GPI2'.
enum
{
  clearpath_platform_msgs__msg__PinoutState__CC01_GPI2 = 5
};

/// Constant 'CC01_GPI3'.
enum
{
  clearpath_platform_msgs__msg__PinoutState__CC01_GPI3 = 6
};

/// Constant 'D100_AUX_OUT1'.
/**
  * Current output state
  * Dingo 1.0 (D100)
 */
enum
{
  clearpath_platform_msgs__msg__PinoutState__D100_AUX_OUT1 = 0
};

/// Constant 'D100_AUX_OUT2'.
enum
{
  clearpath_platform_msgs__msg__PinoutState__D100_AUX_OUT2 = 1
};

/// Constant 'D100_AUX_OUT3'.
enum
{
  clearpath_platform_msgs__msg__PinoutState__D100_AUX_OUT3 = 2
};

/// Constant 'D150_AUX_OUT1'.
/**
  * Dingo 1.5 (D150)
 */
enum
{
  clearpath_platform_msgs__msg__PinoutState__D150_AUX_OUT1 = 0
};

/// Constant 'D150_AUX_OUT2'.
enum
{
  clearpath_platform_msgs__msg__PinoutState__D150_AUX_OUT2 = 1
};

/// Constant 'D150_AUX_OUT3'.
enum
{
  clearpath_platform_msgs__msg__PinoutState__D150_AUX_OUT3 = 2
};

/// Constant 'CC01_AUX_OUT1'.
/**
  * CC01
 */
enum
{
  clearpath_platform_msgs__msg__PinoutState__CC01_AUX_OUT1 = 0
};

/// Constant 'CC01_AUX_OUT2'.
enum
{
  clearpath_platform_msgs__msg__PinoutState__CC01_AUX_OUT2 = 1
};

/// Constant 'CC01_AUX_OUT3'.
enum
{
  clearpath_platform_msgs__msg__PinoutState__CC01_AUX_OUT3 = 2
};

/// Constant 'CC01_GPO0'.
enum
{
  clearpath_platform_msgs__msg__PinoutState__CC01_GPO0 = 3
};

/// Constant 'CC01_GPO1'.
enum
{
  clearpath_platform_msgs__msg__PinoutState__CC01_GPO1 = 4
};

/// Constant 'CC01_GPO2'.
enum
{
  clearpath_platform_msgs__msg__PinoutState__CC01_GPO2 = 5
};

/// Constant 'CC01_GPO3'.
enum
{
  clearpath_platform_msgs__msg__PinoutState__CC01_GPO3 = 6
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'rails'
// Member 'inputs'
// Member 'outputs'
// Member 'output_periods'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/PinoutState in the package clearpath_platform_msgs.
/**
  * Pinout state
 */
typedef struct clearpath_platform_msgs__msg__PinoutState
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__boolean__Sequence rails;
  rosidl_runtime_c__boolean__Sequence inputs;
  rosidl_runtime_c__boolean__Sequence outputs;
  /// Current output toggle period
  rosidl_runtime_c__uint32__Sequence output_periods;
} clearpath_platform_msgs__msg__PinoutState;

// Struct for a sequence of clearpath_platform_msgs__msg__PinoutState.
typedef struct clearpath_platform_msgs__msg__PinoutState__Sequence
{
  clearpath_platform_msgs__msg__PinoutState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clearpath_platform_msgs__msg__PinoutState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__PINOUT_STATE__STRUCT_H_
