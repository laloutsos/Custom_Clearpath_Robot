// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from clearpath_platform_msgs:msg/Temperature.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_platform_msgs/msg/temperature.h"


#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__TEMPERATURE__STRUCT_H_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__TEMPERATURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'J100_MCU'.
/**
  * Jackal (J100)
 */
enum
{
  clearpath_platform_msgs__msg__Temperature__J100_MCU = 0
};

/// Constant 'J100_PCB'.
enum
{
  clearpath_platform_msgs__msg__Temperature__J100_PCB = 1
};

/// Constant 'D100_MCU'.
/**
  * Dingo 1.0 (D100)
 */
enum
{
  clearpath_platform_msgs__msg__Temperature__D100_MCU = 0
};

/// Constant 'D100_PCB'.
enum
{
  clearpath_platform_msgs__msg__Temperature__D100_PCB = 1
};

/// Constant 'D150_MCU'.
/**
  * Dingo 1.5 (D150)
 */
enum
{
  clearpath_platform_msgs__msg__Temperature__D150_MCU = 0
};

/// Constant 'D150_PCB'.
enum
{
  clearpath_platform_msgs__msg__Temperature__D150_PCB = 1
};

/// Constant 'W200_MCU'.
/**
  * Warthog (W200)
 */
enum
{
  clearpath_platform_msgs__msg__Temperature__W200_MCU = 0
};

/// Constant 'R100_MCU'.
/**
  * Ridgeback (R100)
 */
enum
{
  clearpath_platform_msgs__msg__Temperature__R100_MCU = 0
};

/// Constant 'R100_PCB'.
enum
{
  clearpath_platform_msgs__msg__Temperature__R100_PCB = 1
};

/// Constant 'CC01_MCU'.
/**
  * Common Core (CC01)
 */
enum
{
  clearpath_platform_msgs__msg__Temperature__CC01_MCU = 0
};

/// Constant 'CC01_FAN1'.
enum
{
  clearpath_platform_msgs__msg__Temperature__CC01_FAN1 = 1
};

/// Constant 'CC01_FAN2'.
enum
{
  clearpath_platform_msgs__msg__Temperature__CC01_FAN2 = 2
};

/// Constant 'CC01_FAN3'.
enum
{
  clearpath_platform_msgs__msg__Temperature__CC01_FAN3 = 3
};

/// Constant 'CC01_FAN4'.
enum
{
  clearpath_platform_msgs__msg__Temperature__CC01_FAN4 = 4
};

/// Constant 'CC01_FAN5'.
enum
{
  clearpath_platform_msgs__msg__Temperature__CC01_FAN5 = 5
};

/// Constant 'CC01_FAN6'.
enum
{
  clearpath_platform_msgs__msg__Temperature__CC01_FAN6 = 6
};

/// Constant 'CC01_FAN7'.
enum
{
  clearpath_platform_msgs__msg__Temperature__CC01_FAN7 = 7
};

/// Constant 'CC01_FAN8'.
enum
{
  clearpath_platform_msgs__msg__Temperature__CC01_FAN8 = 8
};

/// Constant 'CC01_5V_INDUCTOR'.
enum
{
  clearpath_platform_msgs__msg__Temperature__CC01_5V_INDUCTOR = 9
};

/// Constant 'CC01_MAIN_GND_LUG'.
enum
{
  clearpath_platform_msgs__msg__Temperature__CC01_MAIN_GND_LUG = 10
};

/// Constant 'CC01_24V_DCDC'.
enum
{
  clearpath_platform_msgs__msg__Temperature__CC01_24V_DCDC = 11
};

/// Constant 'CC01_12V_DCDC'.
enum
{
  clearpath_platform_msgs__msg__Temperature__CC01_12V_DCDC = 12
};

/// Constant 'CC01_EXT_1'.
enum
{
  clearpath_platform_msgs__msg__Temperature__CC01_EXT_1 = 13
};

/// Constant 'CC01_EXT_2'.
enum
{
  clearpath_platform_msgs__msg__Temperature__CC01_EXT_2 = 14
};

/// Constant 'CC01_EXT_3'.
enum
{
  clearpath_platform_msgs__msg__Temperature__CC01_EXT_3 = 15
};

/// Constant 'CC01_EXT_4'.
enum
{
  clearpath_platform_msgs__msg__Temperature__CC01_EXT_4 = 16
};

/// Constant 'CC01_BREAKOUT_1'.
enum
{
  clearpath_platform_msgs__msg__Temperature__CC01_BREAKOUT_1 = 17
};

/// Constant 'CC01_BREAKOUT_2'.
enum
{
  clearpath_platform_msgs__msg__Temperature__CC01_BREAKOUT_2 = 18
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'temperatures'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Temperature in the package clearpath_platform_msgs.
/**
  * Location of temperature sensors.
 */
typedef struct clearpath_platform_msgs__msg__Temperature
{
  std_msgs__msg__Header header;
  /// Array of temperature readings in Celsius
  rosidl_runtime_c__float__Sequence temperatures;
} clearpath_platform_msgs__msg__Temperature;

// Struct for a sequence of clearpath_platform_msgs__msg__Temperature.
typedef struct clearpath_platform_msgs__msg__Temperature__Sequence
{
  clearpath_platform_msgs__msg__Temperature * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clearpath_platform_msgs__msg__Temperature__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__TEMPERATURE__STRUCT_H_
