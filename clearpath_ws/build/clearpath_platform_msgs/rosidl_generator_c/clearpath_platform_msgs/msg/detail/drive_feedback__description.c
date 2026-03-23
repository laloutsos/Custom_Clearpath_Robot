// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from clearpath_platform_msgs:msg/DriveFeedback.idl
// generated code does not contain a copyright notice

#include "clearpath_platform_msgs/msg/detail/drive_feedback__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
const rosidl_type_hash_t *
clearpath_platform_msgs__msg__DriveFeedback__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x74, 0x74, 0x8d, 0x44, 0x54, 0xa0, 0x23, 0x43,
      0x31, 0x4e, 0x47, 0x2e, 0x5f, 0x64, 0xca, 0xb3,
      0x1f, 0x2d, 0x1b, 0x4c, 0x56, 0xbd, 0x00, 0xd7,
      0x47, 0x5d, 0x85, 0xef, 0x7c, 0x50, 0xd0, 0xa1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char clearpath_platform_msgs__msg__DriveFeedback__TYPE_NAME[] = "clearpath_platform_msgs/msg/DriveFeedback";

// Define type names, field names, and default values
static char clearpath_platform_msgs__msg__DriveFeedback__FIELD_NAME__current[] = "current";
static char clearpath_platform_msgs__msg__DriveFeedback__FIELD_NAME__duty_cycle[] = "duty_cycle";
static char clearpath_platform_msgs__msg__DriveFeedback__FIELD_NAME__bridge_temperature[] = "bridge_temperature";
static char clearpath_platform_msgs__msg__DriveFeedback__FIELD_NAME__motor_temperature[] = "motor_temperature";
static char clearpath_platform_msgs__msg__DriveFeedback__FIELD_NAME__measured_velocity[] = "measured_velocity";
static char clearpath_platform_msgs__msg__DriveFeedback__FIELD_NAME__measured_travel[] = "measured_travel";
static char clearpath_platform_msgs__msg__DriveFeedback__FIELD_NAME__driver_fault[] = "driver_fault";

static rosidl_runtime_c__type_description__Field clearpath_platform_msgs__msg__DriveFeedback__FIELDS[] = {
  {
    {clearpath_platform_msgs__msg__DriveFeedback__FIELD_NAME__current, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_platform_msgs__msg__DriveFeedback__FIELD_NAME__duty_cycle, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_platform_msgs__msg__DriveFeedback__FIELD_NAME__bridge_temperature, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_platform_msgs__msg__DriveFeedback__FIELD_NAME__motor_temperature, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_platform_msgs__msg__DriveFeedback__FIELD_NAME__measured_velocity, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_platform_msgs__msg__DriveFeedback__FIELD_NAME__measured_travel, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_platform_msgs__msg__DriveFeedback__FIELD_NAME__driver_fault, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
clearpath_platform_msgs__msg__DriveFeedback__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {clearpath_platform_msgs__msg__DriveFeedback__TYPE_NAME, 41, 41},
      {clearpath_platform_msgs__msg__DriveFeedback__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message represents feedback data from a single drive unit (driver + motor).\n"
  "\n"
  "# Current flowing from battery into the MOSFET bridge.\n"
  "float32 current\n"
  "\n"
  "# Instantaneous duty cycle of MOSFET bridge.\n"
  "float32 duty_cycle\n"
  "\n"
  "# Temperatures measured in the MOSFET bridge and on the motor casing, in deg C.\n"
  "float32 bridge_temperature\n"
  "float32 motor_temperature\n"
  "\n"
  "# Encoder data\n"
  "float32 measured_velocity   # rad/s\n"
  "float32 measured_travel     # rad\n"
  "\n"
  "# True if the underlying driver chip reports a fault condition.\n"
  "bool driver_fault";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
clearpath_platform_msgs__msg__DriveFeedback__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {clearpath_platform_msgs__msg__DriveFeedback__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 523, 523},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
clearpath_platform_msgs__msg__DriveFeedback__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *clearpath_platform_msgs__msg__DriveFeedback__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
