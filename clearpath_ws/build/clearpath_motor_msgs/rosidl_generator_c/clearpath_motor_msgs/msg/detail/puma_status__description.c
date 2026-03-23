// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from clearpath_motor_msgs:msg/PumaStatus.idl
// generated code does not contain a copyright notice

#include "clearpath_motor_msgs/msg/detail/puma_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_clearpath_motor_msgs
const rosidl_type_hash_t *
clearpath_motor_msgs__msg__PumaStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x90, 0x6b, 0x59, 0xb9, 0x9b, 0x87, 0x6e, 0x47,
      0xfa, 0xfe, 0x50, 0x2c, 0xb0, 0x8c, 0x6e, 0x90,
      0x8e, 0xd9, 0x78, 0xe8, 0x61, 0x9e, 0x81, 0x3c,
      0xd5, 0x38, 0x48, 0x4f, 0xc7, 0x8c, 0xa8, 0x4b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char clearpath_motor_msgs__msg__PumaStatus__TYPE_NAME[] = "clearpath_motor_msgs/msg/PumaStatus";

// Define type names, field names, and default values
static char clearpath_motor_msgs__msg__PumaStatus__FIELD_NAME__device_number[] = "device_number";
static char clearpath_motor_msgs__msg__PumaStatus__FIELD_NAME__device_name[] = "device_name";
static char clearpath_motor_msgs__msg__PumaStatus__FIELD_NAME__bus_voltage[] = "bus_voltage";
static char clearpath_motor_msgs__msg__PumaStatus__FIELD_NAME__temperature[] = "temperature";
static char clearpath_motor_msgs__msg__PumaStatus__FIELD_NAME__output_voltage[] = "output_voltage";
static char clearpath_motor_msgs__msg__PumaStatus__FIELD_NAME__analog_input[] = "analog_input";
static char clearpath_motor_msgs__msg__PumaStatus__FIELD_NAME__mode[] = "mode";
static char clearpath_motor_msgs__msg__PumaStatus__FIELD_NAME__fault[] = "fault";

static rosidl_runtime_c__type_description__Field clearpath_motor_msgs__msg__PumaStatus__FIELDS[] = {
  {
    {clearpath_motor_msgs__msg__PumaStatus__FIELD_NAME__device_number, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__PumaStatus__FIELD_NAME__device_name, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__PumaStatus__FIELD_NAME__bus_voltage, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__PumaStatus__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__PumaStatus__FIELD_NAME__output_voltage, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__PumaStatus__FIELD_NAME__analog_input, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__PumaStatus__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__PumaStatus__FIELD_NAME__fault, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
clearpath_motor_msgs__msg__PumaStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {clearpath_motor_msgs__msg__PumaStatus__TYPE_NAME, 35, 35},
      {clearpath_motor_msgs__msg__PumaStatus__FIELDS, 8, 8},
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
  "uint8 device_number\n"
  "\n"
  "# Name of joint controlled, or other identifier.\n"
  "string device_name\n"
  "\n"
  "# Input terminal voltage (volts).\n"
  "float32 bus_voltage\n"
  "\n"
  "# Internal driver temperature (degC).\n"
  "float32 temperature\n"
  "\n"
  "# Voltage as output to the motor (volts).\n"
  "float32 output_voltage\n"
  "\n"
  "# Value of the auxiliary ADC (volts).\n"
  "float32 analog_input\n"
  "\n"
  "# Available control modes, not all of which are broken out to\n"
  "# this ROS driver.\n"
  "uint8 MODE_VOLTAGE=0\n"
  "uint8 MODE_CURRENT=1\n"
  "uint8 MODE_SPEED=2\n"
  "uint8 MODE_POSITION=3\n"
  "uint8 MODE_VCOMP=4\n"
  "uint8 mode\n"
  "\n"
  "# Fault states which could cause the driver to be immobilized.\n"
  "uint8 FAULT_CURRENT=1\n"
  "uint8 FAULT_TEMPERATURE=2\n"
  "uint8 FAULT_BUS_VOLTAGE=4\n"
  "uint8 FAULT_BRIDGE_DRIVER=8\n"
  "uint8 fault";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
clearpath_motor_msgs__msg__PumaStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {clearpath_motor_msgs__msg__PumaStatus__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 732, 732},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
clearpath_motor_msgs__msg__PumaStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *clearpath_motor_msgs__msg__PumaStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
