// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from clearpath_motor_msgs:msg/LynxDebug.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_motor_msgs/msg/lynx_debug.h"


#ifndef CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_DEBUG__STRUCT_H_
#define CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_DEBUG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ACCUMULATOR_FLAG_ABOVE_RATED'.
/**
  * Accumulator Flags
 */
enum
{
  clearpath_motor_msgs__msg__LynxDebug__ACCUMULATOR_FLAG_ABOVE_RATED = 0
};

/// Constant 'ACCUMULATOR_FLAG_CONTINUOUS_1_1'.
enum
{
  clearpath_motor_msgs__msg__LynxDebug__ACCUMULATOR_FLAG_CONTINUOUS_1_1 = 1
};

/// Constant 'ACCUMULATOR_FLAG_CONTINUOUS_1_2'.
enum
{
  clearpath_motor_msgs__msg__LynxDebug__ACCUMULATOR_FLAG_CONTINUOUS_1_2 = 2
};

/// Constant 'ACCUMULATOR_FLAG_CONTINUOUS_1_3'.
enum
{
  clearpath_motor_msgs__msg__LynxDebug__ACCUMULATOR_FLAG_CONTINUOUS_1_3 = 3
};

/// Constant 'ACCUMULATOR_FLAG_CONTINUOUS_1_4'.
enum
{
  clearpath_motor_msgs__msg__LynxDebug__ACCUMULATOR_FLAG_CONTINUOUS_1_4 = 4
};

/// Constant 'ACCUMULATOR_FLAG_CONTINUOUS_1_5'.
enum
{
  clearpath_motor_msgs__msg__LynxDebug__ACCUMULATOR_FLAG_CONTINUOUS_1_5 = 5
};

/// Constant 'ACCUMULATOR_FLAG_CONTINUOUS_1_6'.
enum
{
  clearpath_motor_msgs__msg__LynxDebug__ACCUMULATOR_FLAG_CONTINUOUS_1_6 = 6
};

/// Constant 'ACCUMULATOR_FLAG_CONTINUOUS_1_7'.
enum
{
  clearpath_motor_msgs__msg__LynxDebug__ACCUMULATOR_FLAG_CONTINUOUS_1_7 = 7
};

/// Constant 'ACCUMULATOR_FLAG_CONTINUOUS_1_8'.
enum
{
  clearpath_motor_msgs__msg__LynxDebug__ACCUMULATOR_FLAG_CONTINUOUS_1_8 = 8
};

/// Constant 'ACCUMULATOR_FLAG_CONTINUOUS_1_9'.
enum
{
  clearpath_motor_msgs__msg__LynxDebug__ACCUMULATOR_FLAG_CONTINUOUS_1_9 = 9
};

/// Constant 'ACCUMULATOR_FLAG_CONTINUOUS_2_0'.
enum
{
  clearpath_motor_msgs__msg__LynxDebug__ACCUMULATOR_FLAG_CONTINUOUS_2_0 = 10
};

/// Constant 'ACCUMULATOR_FLAG_CONTINUOUS_2_1'.
enum
{
  clearpath_motor_msgs__msg__LynxDebug__ACCUMULATOR_FLAG_CONTINUOUS_2_1 = 11
};

/// Constant 'ACCUMULATOR_FLAG_CONTINUOUS_2_2'.
enum
{
  clearpath_motor_msgs__msg__LynxDebug__ACCUMULATOR_FLAG_CONTINUOUS_2_2 = 12
};

/// Constant 'ACCUMULATOR_FLAG_CONTINUOUS_2_3'.
enum
{
  clearpath_motor_msgs__msg__LynxDebug__ACCUMULATOR_FLAG_CONTINUOUS_2_3 = 13
};

/// Constant 'ACCUMULATOR_FLAG_CONTINUOUS_2_4'.
enum
{
  clearpath_motor_msgs__msg__LynxDebug__ACCUMULATOR_FLAG_CONTINUOUS_2_4 = 14
};

/// Constant 'ACCUMULATOR_FLAG_CONTINUOUS_2_5'.
enum
{
  clearpath_motor_msgs__msg__LynxDebug__ACCUMULATOR_FLAG_CONTINUOUS_2_5 = 15
};

/// Constant 'ACCUMULATOR_FLAG_CONTINUOUS_2_6'.
enum
{
  clearpath_motor_msgs__msg__LynxDebug__ACCUMULATOR_FLAG_CONTINUOUS_2_6 = 16
};

/// Constant 'ACCUMULATOR_FLAG_CONTINUOUS_2_7'.
enum
{
  clearpath_motor_msgs__msg__LynxDebug__ACCUMULATOR_FLAG_CONTINUOUS_2_7 = 17
};

/// Constant 'ACCUMULATOR_FLAG_CONTINUOUS_2_8'.
enum
{
  clearpath_motor_msgs__msg__LynxDebug__ACCUMULATOR_FLAG_CONTINUOUS_2_8 = 18
};

/// Constant 'ACCUMULATOR_FLAG_CONTINUOUS_2_9'.
enum
{
  clearpath_motor_msgs__msg__LynxDebug__ACCUMULATOR_FLAG_CONTINUOUS_2_9 = 19
};

/// Constant 'ACCUMULATOR_FLAG_CONTINUOUS_3_0'.
enum
{
  clearpath_motor_msgs__msg__LynxDebug__ACCUMULATOR_FLAG_CONTINUOUS_3_0 = 20
};

/// Constant 'ACCUMULATOR_ABOVE_RATED'.
enum
{
  clearpath_motor_msgs__msg__LynxDebug__ACCUMULATOR_ABOVE_RATED = 0
};

/// Constant 'ACCUMULATOR_CONTINUOUS_1_1'.
enum
{
  clearpath_motor_msgs__msg__LynxDebug__ACCUMULATOR_CONTINUOUS_1_1 = 1
};

/// Constant 'ACCUMULATOR_CONTINUOUS_1_5'.
enum
{
  clearpath_motor_msgs__msg__LynxDebug__ACCUMULATOR_CONTINUOUS_1_5 = 2
};

/// Constant 'ACCUMULATOR_CONTINUOUS_2_0'.
enum
{
  clearpath_motor_msgs__msg__LynxDebug__ACCUMULATOR_CONTINUOUS_2_0 = 3
};

/// Constant 'ACCUMULATOR_CONTINUOUS_2_5'.
enum
{
  clearpath_motor_msgs__msg__LynxDebug__ACCUMULATOR_CONTINUOUS_2_5 = 4
};

/// Constant 'ACCUMULATOR_CONTINUOUS_3_0'.
enum
{
  clearpath_motor_msgs__msg__LynxDebug__ACCUMULATOR_CONTINUOUS_3_0 = 5
};

/// Constant 'CURRENT_ID_FB'.
/**
  * Current readings (Amps)
 */
enum
{
  clearpath_motor_msgs__msg__LynxDebug__CURRENT_ID_FB = 0
};

/// Constant 'CURRENT_ID_FF'.
enum
{
  clearpath_motor_msgs__msg__LynxDebug__CURRENT_ID_FF = 1
};

/// Constant 'CURRENT_ID_REF'.
enum
{
  clearpath_motor_msgs__msg__LynxDebug__CURRENT_ID_REF = 2
};

/// Constant 'CURRENT_IQ_FB'.
enum
{
  clearpath_motor_msgs__msg__LynxDebug__CURRENT_IQ_FB = 3
};

/// Constant 'CURRENT_IQ_FF'.
enum
{
  clearpath_motor_msgs__msg__LynxDebug__CURRENT_IQ_FF = 4
};

/// Constant 'CURRENT_IQ_REF'.
enum
{
  clearpath_motor_msgs__msg__LynxDebug__CURRENT_IQ_REF = 5
};

// Include directives for member types
// Member 'joint_name'
#include "rosidl_runtime_c/string.h"
// Member 'accumulators'
// Member 'currents'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/LynxDebug in the package clearpath_motor_msgs.
/**
  * Number on the bus (CAN ID).
 */
typedef struct clearpath_motor_msgs__msg__LynxDebug
{
  uint8_t can_id;
  /// Name of joint controlled, or other identifier.
  rosidl_runtime_c__String joint_name;
  /// Faults triggered per second
  uint16_t fault_frequency;
  uint32_t accumulator_flags;
  rosidl_runtime_c__float__Sequence accumulators;
  rosidl_runtime_c__float__Sequence currents;
} clearpath_motor_msgs__msg__LynxDebug;

// Struct for a sequence of clearpath_motor_msgs__msg__LynxDebug.
typedef struct clearpath_motor_msgs__msg__LynxDebug__Sequence
{
  clearpath_motor_msgs__msg__LynxDebug * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clearpath_motor_msgs__msg__LynxDebug__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_DEBUG__STRUCT_H_
