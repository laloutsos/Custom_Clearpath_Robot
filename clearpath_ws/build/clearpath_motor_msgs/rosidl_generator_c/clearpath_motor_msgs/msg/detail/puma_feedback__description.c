// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from clearpath_motor_msgs:msg/PumaFeedback.idl
// generated code does not contain a copyright notice

#include "clearpath_motor_msgs/msg/detail/puma_feedback__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_clearpath_motor_msgs
const rosidl_type_hash_t *
clearpath_motor_msgs__msg__PumaFeedback__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7a, 0x24, 0xfd, 0x8b, 0x11, 0x1d, 0x28, 0x81,
      0x34, 0x80, 0xcc, 0xa6, 0xd2, 0x8b, 0x1c, 0x11,
      0x99, 0x7b, 0x51, 0x6e, 0x71, 0x88, 0x47, 0x25,
      0xd6, 0xd2, 0x6f, 0xc4, 0x71, 0xf4, 0x93, 0x74,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char clearpath_motor_msgs__msg__PumaFeedback__TYPE_NAME[] = "clearpath_motor_msgs/msg/PumaFeedback";

// Define type names, field names, and default values
static char clearpath_motor_msgs__msg__PumaFeedback__FIELD_NAME__device_number[] = "device_number";
static char clearpath_motor_msgs__msg__PumaFeedback__FIELD_NAME__device_name[] = "device_name";
static char clearpath_motor_msgs__msg__PumaFeedback__FIELD_NAME__duty_cycle[] = "duty_cycle";
static char clearpath_motor_msgs__msg__PumaFeedback__FIELD_NAME__current[] = "current";
static char clearpath_motor_msgs__msg__PumaFeedback__FIELD_NAME__travel[] = "travel";
static char clearpath_motor_msgs__msg__PumaFeedback__FIELD_NAME__speed[] = "speed";
static char clearpath_motor_msgs__msg__PumaFeedback__FIELD_NAME__setpoint[] = "setpoint";

static rosidl_runtime_c__type_description__Field clearpath_motor_msgs__msg__PumaFeedback__FIELDS[] = {
  {
    {clearpath_motor_msgs__msg__PumaFeedback__FIELD_NAME__device_number, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__PumaFeedback__FIELD_NAME__device_name, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__PumaFeedback__FIELD_NAME__duty_cycle, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__PumaFeedback__FIELD_NAME__current, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__PumaFeedback__FIELD_NAME__travel, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__PumaFeedback__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__PumaFeedback__FIELD_NAME__setpoint, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
clearpath_motor_msgs__msg__PumaFeedback__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {clearpath_motor_msgs__msg__PumaFeedback__TYPE_NAME, 37, 37},
      {clearpath_motor_msgs__msg__PumaFeedback__FIELDS, 7, 7},
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
  "# Duty cycle of the h-bridge driver (-1..1).\n"
  "float32 duty_cycle\n"
  "\n"
  "# Current consumed (amps).\n"
  "float32 current\n"
  "\n"
  "# Travel as measured by the encoder (rad).\n"
  "float64 travel\n"
  "\n"
  "# Angular velocity as measured by the encoder (rad/s).\n"
  "float64 speed\n"
  "\n"
  "# The reported setpoint value of the on-board controller for the given mode.\n"
  "# In voltage control, duty cycle of the h-bridge driver (-1..1).\n"
  "# In speed control, angular velocity setpoint of the on-board controller (rad/s).\n"
  "# In position control, travel as measured by the encoder (rad).\n"
  "# In current control, the current consumed (amps).\n"
  "float64 setpoint";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
clearpath_motor_msgs__msg__PumaFeedback__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {clearpath_motor_msgs__msg__PumaFeedback__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 714, 714},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
clearpath_motor_msgs__msg__PumaFeedback__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *clearpath_motor_msgs__msg__PumaFeedback__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
