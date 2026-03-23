// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from clearpath_motor_msgs:msg/LynxStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_motor_msgs/msg/lynx_status.h"


#ifndef CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_STATUS__STRUCT_H_
#define CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'STATUS_FLAG_ADC_CALIBRATED'.
/**
  * Status Flags
 */
enum
{
  clearpath_motor_msgs__msg__LynxStatus__STATUS_FLAG_ADC_CALIBRATED = 0
};

/// Constant 'STATUS_FLAG_FOC_ENABLED'.
enum
{
  clearpath_motor_msgs__msg__LynxStatus__STATUS_FLAG_FOC_ENABLED = 1
};

/// Constant 'STATUS_FLAG_CALIBRATION_REQUESTED'.
enum
{
  clearpath_motor_msgs__msg__LynxStatus__STATUS_FLAG_CALIBRATION_REQUESTED = 2
};

/// Constant 'STATUS_FLAG_CALIBRATION_CANCELLED'.
enum
{
  clearpath_motor_msgs__msg__LynxStatus__STATUS_FLAG_CALIBRATION_CANCELLED = 3
};

/// Constant 'STATUS_FLAG_ESTOPPED'.
enum
{
  clearpath_motor_msgs__msg__LynxStatus__STATUS_FLAG_ESTOPPED = 4
};

/// Constant 'WARNING_FLAG_MOTOR_THERMISTOR'.
/**
  * Warning Flags
 */
enum
{
  clearpath_motor_msgs__msg__LynxStatus__WARNING_FLAG_MOTOR_THERMISTOR = 0
};

/// Constant 'WARNING_FLAG_PCB_THERMISTOR'.
enum
{
  clearpath_motor_msgs__msg__LynxStatus__WARNING_FLAG_PCB_THERMISTOR = 1
};

/// Constant 'WARNING_FLAG_PHASE'.
enum
{
  clearpath_motor_msgs__msg__LynxStatus__WARNING_FLAG_PHASE = 2
};

/// Constant 'WARNING_FLAG_PHASE_A'.
enum
{
  clearpath_motor_msgs__msg__LynxStatus__WARNING_FLAG_PHASE_A = 3
};

/// Constant 'WARNING_FLAG_PHASE_B'.
enum
{
  clearpath_motor_msgs__msg__LynxStatus__WARNING_FLAG_PHASE_B = 4
};

/// Constant 'WARNING_FLAG_PHASE_C'.
enum
{
  clearpath_motor_msgs__msg__LynxStatus__WARNING_FLAG_PHASE_C = 5
};

/// Constant 'WARNING_FLAG_ENCODER_INDEX'.
enum
{
  clearpath_motor_msgs__msg__LynxStatus__WARNING_FLAG_ENCODER_INDEX = 6
};

/// Constant 'WARNING_FLAG_ENCODER_OUTPUT_A'.
enum
{
  clearpath_motor_msgs__msg__LynxStatus__WARNING_FLAG_ENCODER_OUTPUT_A = 7
};

/// Constant 'WARNING_FLAG_ENCODER_OUTPUT_B'.
enum
{
  clearpath_motor_msgs__msg__LynxStatus__WARNING_FLAG_ENCODER_OUTPUT_B = 8
};

/// Constant 'ERROR_FLAG_NOT_CALIBRATED'.
/**
  * Error Flags
 */
enum
{
  clearpath_motor_msgs__msg__LynxStatus__ERROR_FLAG_NOT_CALIBRATED = 0
};

/// Constant 'ERROR_FLAG_MOTOR_FAULT'.
enum
{
  clearpath_motor_msgs__msg__LynxStatus__ERROR_FLAG_MOTOR_FAULT = 1
};

/// Constant 'ERROR_FLAG_MOTOR_STALLING'.
enum
{
  clearpath_motor_msgs__msg__LynxStatus__ERROR_FLAG_MOTOR_STALLING = 2
};

/// Constant 'ERROR_FLAG_MOTOR_THERMISTOR'.
enum
{
  clearpath_motor_msgs__msg__LynxStatus__ERROR_FLAG_MOTOR_THERMISTOR = 3
};

/// Constant 'ERROR_FLAG_PCB_THERMISTOR'.
enum
{
  clearpath_motor_msgs__msg__LynxStatus__ERROR_FLAG_PCB_THERMISTOR = 4
};

/// Constant 'ERROR_FLAG_PHASE'.
enum
{
  clearpath_motor_msgs__msg__LynxStatus__ERROR_FLAG_PHASE = 5
};

/// Constant 'ERROR_FLAG_PHASE_A'.
enum
{
  clearpath_motor_msgs__msg__LynxStatus__ERROR_FLAG_PHASE_A = 6
};

/// Constant 'ERROR_FLAG_PHASE_B'.
enum
{
  clearpath_motor_msgs__msg__LynxStatus__ERROR_FLAG_PHASE_B = 7
};

/// Constant 'ERROR_FLAG_PHASE_C'.
enum
{
  clearpath_motor_msgs__msg__LynxStatus__ERROR_FLAG_PHASE_C = 8
};

/// Constant 'ERROR_FLAG_ENCODER_POWER'.
enum
{
  clearpath_motor_msgs__msg__LynxStatus__ERROR_FLAG_ENCODER_POWER = 9
};

/// Constant 'ERROR_FLAG_ENCODER_INDEX'.
enum
{
  clearpath_motor_msgs__msg__LynxStatus__ERROR_FLAG_ENCODER_INDEX = 10
};

/// Constant 'ERROR_FLAG_ENCODER_OUTPUT_A'.
enum
{
  clearpath_motor_msgs__msg__LynxStatus__ERROR_FLAG_ENCODER_OUTPUT_A = 11
};

/// Constant 'ERROR_FLAG_ENCODER_OUTPUT_B'.
enum
{
  clearpath_motor_msgs__msg__LynxStatus__ERROR_FLAG_ENCODER_OUTPUT_B = 12
};

// Include directives for member types
// Member 'joint_name'
// Member 'firmware_version'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/LynxStatus in the package clearpath_motor_msgs.
/**
  * Number on the bus (CAN ID).
 */
typedef struct clearpath_motor_msgs__msg__LynxStatus
{
  uint8_t can_id;
  /// Name of joint controlled, or other identifier.
  rosidl_runtime_c__String joint_name;
  /// Firmware version
  rosidl_runtime_c__String firmware_version;
  /// Motor winding temperature (degC).
  float motor_temperature;
  /// BLDC MCU temperature (degC)
  float mcu_temperature;
  /// BLDC PCB temperature (degC)
  float pcb_temperature;
  /// Hardware triggered stop
  bool stopped;
  uint32_t status_flags;
  uint32_t warning_flags;
  uint32_t error_flags;
} clearpath_motor_msgs__msg__LynxStatus;

// Struct for a sequence of clearpath_motor_msgs__msg__LynxStatus.
typedef struct clearpath_motor_msgs__msg__LynxStatus__Sequence
{
  clearpath_motor_msgs__msg__LynxStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clearpath_motor_msgs__msg__LynxStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_STATUS__STRUCT_H_
