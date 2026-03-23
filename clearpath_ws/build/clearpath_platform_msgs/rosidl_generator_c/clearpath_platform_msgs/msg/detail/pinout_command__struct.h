// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from clearpath_platform_msgs:msg/PinoutCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_platform_msgs/msg/pinout_command.h"


#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__PINOUT_COMMAND__STRUCT_H_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__PINOUT_COMMAND__STRUCT_H_

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
  * Power rails.
  * True enables them, False disables them.
  * CC01
 */
enum
{
  clearpath_platform_msgs__msg__PinoutCommand__CC01_USER_PWR_CTRL = 0
};

/// Constant 'D100_AUX_OUT1'.
/**
  * User controlled outputs.
  * Bit 1 sets the output to on/off
  * Bit 2-32 represent the toggle period in milliseconds
  * Toggle period of 0 implies no toggling
  * Minimum toggle period is 100ms
  * Toggle period precision is 10ms
  * Dingo 1.0 (D100)
 */
enum
{
  clearpath_platform_msgs__msg__PinoutCommand__D100_AUX_OUT1 = 0
};

/// Constant 'D100_AUX_OUT2'.
enum
{
  clearpath_platform_msgs__msg__PinoutCommand__D100_AUX_OUT2 = 1
};

/// Constant 'D100_AUX_OUT3'.
enum
{
  clearpath_platform_msgs__msg__PinoutCommand__D100_AUX_OUT3 = 2
};

/// Constant 'D150_AUX_OUT1'.
/**
  * Dingo 1.5 (D150)
 */
enum
{
  clearpath_platform_msgs__msg__PinoutCommand__D150_AUX_OUT1 = 0
};

/// Constant 'D150_AUX_OUT2'.
enum
{
  clearpath_platform_msgs__msg__PinoutCommand__D150_AUX_OUT2 = 1
};

/// Constant 'D150_AUX_OUT3'.
enum
{
  clearpath_platform_msgs__msg__PinoutCommand__D150_AUX_OUT3 = 2
};

/// Constant 'CC01_AUX_OUT1'.
/**
  * CC01
 */
enum
{
  clearpath_platform_msgs__msg__PinoutCommand__CC01_AUX_OUT1 = 0
};

/// Constant 'CC01_AUX_OUT2'.
enum
{
  clearpath_platform_msgs__msg__PinoutCommand__CC01_AUX_OUT2 = 1
};

/// Constant 'CC01_AUX_OUT3'.
enum
{
  clearpath_platform_msgs__msg__PinoutCommand__CC01_AUX_OUT3 = 2
};

/// Constant 'CC01_GPO0'.
enum
{
  clearpath_platform_msgs__msg__PinoutCommand__CC01_GPO0 = 3
};

/// Constant 'CC01_GPO1'.
enum
{
  clearpath_platform_msgs__msg__PinoutCommand__CC01_GPO1 = 4
};

/// Constant 'CC01_GPO2'.
enum
{
  clearpath_platform_msgs__msg__PinoutCommand__CC01_GPO2 = 5
};

/// Constant 'CC01_GPO3'.
enum
{
  clearpath_platform_msgs__msg__PinoutCommand__CC01_GPO3 = 6
};

// Include directives for member types
// Member 'rails'
// Member 'outputs'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/PinoutCommand in the package clearpath_platform_msgs.
/**
  * Pinout command
 */
typedef struct clearpath_platform_msgs__msg__PinoutCommand
{
  rosidl_runtime_c__boolean__Sequence rails;
  rosidl_runtime_c__uint32__Sequence outputs;
} clearpath_platform_msgs__msg__PinoutCommand;

// Struct for a sequence of clearpath_platform_msgs__msg__PinoutCommand.
typedef struct clearpath_platform_msgs__msg__PinoutCommand__Sequence
{
  clearpath_platform_msgs__msg__PinoutCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clearpath_platform_msgs__msg__PinoutCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__PINOUT_COMMAND__STRUCT_H_
