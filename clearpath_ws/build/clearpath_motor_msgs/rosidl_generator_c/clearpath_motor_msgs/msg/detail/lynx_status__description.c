// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from clearpath_motor_msgs:msg/LynxStatus.idl
// generated code does not contain a copyright notice

#include "clearpath_motor_msgs/msg/detail/lynx_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_clearpath_motor_msgs
const rosidl_type_hash_t *
clearpath_motor_msgs__msg__LynxStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdc, 0x6d, 0x32, 0x6f, 0x2e, 0x95, 0x7b, 0x0b,
      0x64, 0xf3, 0x92, 0x2f, 0x6c, 0x95, 0x12, 0x09,
      0x0e, 0x03, 0x5e, 0xd5, 0x5a, 0xaa, 0xa2, 0xb9,
      0x2a, 0x24, 0xcc, 0xce, 0xf3, 0x19, 0x82, 0x5f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char clearpath_motor_msgs__msg__LynxStatus__TYPE_NAME[] = "clearpath_motor_msgs/msg/LynxStatus";

// Define type names, field names, and default values
static char clearpath_motor_msgs__msg__LynxStatus__FIELD_NAME__can_id[] = "can_id";
static char clearpath_motor_msgs__msg__LynxStatus__FIELD_NAME__joint_name[] = "joint_name";
static char clearpath_motor_msgs__msg__LynxStatus__FIELD_NAME__firmware_version[] = "firmware_version";
static char clearpath_motor_msgs__msg__LynxStatus__FIELD_NAME__motor_temperature[] = "motor_temperature";
static char clearpath_motor_msgs__msg__LynxStatus__FIELD_NAME__mcu_temperature[] = "mcu_temperature";
static char clearpath_motor_msgs__msg__LynxStatus__FIELD_NAME__pcb_temperature[] = "pcb_temperature";
static char clearpath_motor_msgs__msg__LynxStatus__FIELD_NAME__stopped[] = "stopped";
static char clearpath_motor_msgs__msg__LynxStatus__FIELD_NAME__status_flags[] = "status_flags";
static char clearpath_motor_msgs__msg__LynxStatus__FIELD_NAME__warning_flags[] = "warning_flags";
static char clearpath_motor_msgs__msg__LynxStatus__FIELD_NAME__error_flags[] = "error_flags";

static rosidl_runtime_c__type_description__Field clearpath_motor_msgs__msg__LynxStatus__FIELDS[] = {
  {
    {clearpath_motor_msgs__msg__LynxStatus__FIELD_NAME__can_id, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__LynxStatus__FIELD_NAME__joint_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__LynxStatus__FIELD_NAME__firmware_version, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__LynxStatus__FIELD_NAME__motor_temperature, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__LynxStatus__FIELD_NAME__mcu_temperature, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__LynxStatus__FIELD_NAME__pcb_temperature, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__LynxStatus__FIELD_NAME__stopped, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__LynxStatus__FIELD_NAME__status_flags, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__LynxStatus__FIELD_NAME__warning_flags, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__LynxStatus__FIELD_NAME__error_flags, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
clearpath_motor_msgs__msg__LynxStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {clearpath_motor_msgs__msg__LynxStatus__TYPE_NAME, 35, 35},
      {clearpath_motor_msgs__msg__LynxStatus__FIELDS, 10, 10},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Number on the bus (CAN ID).\n"
  "uint8 can_id\n"
  "\n"
  "# Name of joint controlled, or other identifier.\n"
  "string joint_name\n"
  "\n"
  "# Firmware version\n"
  "string firmware_version\n"
  "\n"
  "# Motor winding temperature (degC).\n"
  "float32 motor_temperature\n"
  "\n"
  "# BLDC MCU temperature (degC)\n"
  "float32 mcu_temperature\n"
  "\n"
  "# BLDC PCB temperature (degC)\n"
  "float32 pcb_temperature\n"
  "\n"
  "# Hardware triggered stop\n"
  "bool stopped\n"
  "\n"
  "# Status Flags\n"
  "uint8 STATUS_FLAG_ADC_CALIBRATED=0\n"
  "uint8 STATUS_FLAG_FOC_ENABLED=1\n"
  "uint8 STATUS_FLAG_CALIBRATION_REQUESTED=2\n"
  "uint8 STATUS_FLAG_CALIBRATION_CANCELLED=3\n"
  "uint8 STATUS_FLAG_ESTOPPED=4\n"
  "\n"
  "uint32 status_flags\n"
  "\n"
  "# Warning Flags\n"
  "uint8 WARNING_FLAG_MOTOR_THERMISTOR=0\n"
  "uint8 WARNING_FLAG_PCB_THERMISTOR=1\n"
  "uint8 WARNING_FLAG_PHASE=2\n"
  "uint8 WARNING_FLAG_PHASE_A=3\n"
  "uint8 WARNING_FLAG_PHASE_B=4\n"
  "uint8 WARNING_FLAG_PHASE_C=5\n"
  "uint8 WARNING_FLAG_ENCODER_INDEX=6\n"
  "uint8 WARNING_FLAG_ENCODER_OUTPUT_A=7\n"
  "uint8 WARNING_FLAG_ENCODER_OUTPUT_B=8\n"
  "\n"
  "uint32 warning_flags\n"
  "\n"
  "# Error Flags\n"
  "uint8 ERROR_FLAG_NOT_CALIBRATED=0\n"
  "uint8 ERROR_FLAG_MOTOR_FAULT=1\n"
  "uint8 ERROR_FLAG_MOTOR_STALLING=2\n"
  "uint8 ERROR_FLAG_MOTOR_THERMISTOR=3\n"
  "uint8 ERROR_FLAG_PCB_THERMISTOR=4\n"
  "uint8 ERROR_FLAG_PHASE=5\n"
  "uint8 ERROR_FLAG_PHASE_A=6\n"
  "uint8 ERROR_FLAG_PHASE_B=7\n"
  "uint8 ERROR_FLAG_PHASE_C=8\n"
  "uint8 ERROR_FLAG_ENCODER_POWER=9\n"
  "uint8 ERROR_FLAG_ENCODER_INDEX=10\n"
  "uint8 ERROR_FLAG_ENCODER_OUTPUT_A=11\n"
  "uint8 ERROR_FLAG_ENCODER_OUTPUT_B=12\n"
  "\n"
  "uint32 error_flags";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
clearpath_motor_msgs__msg__LynxStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {clearpath_motor_msgs__msg__LynxStatus__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1374, 1374},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
clearpath_motor_msgs__msg__LynxStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *clearpath_motor_msgs__msg__LynxStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
