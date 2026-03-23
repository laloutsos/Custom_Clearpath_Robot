// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from clearpath_motor_msgs:msg/LynxFeedback.idl
// generated code does not contain a copyright notice

#include "clearpath_motor_msgs/msg/detail/lynx_feedback__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_clearpath_motor_msgs
const rosidl_type_hash_t *
clearpath_motor_msgs__msg__LynxFeedback__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x06, 0x21, 0xa8, 0x06, 0x6e, 0x81, 0xc5, 0xf8,
      0x46, 0x51, 0xe1, 0xaa, 0x1a, 0xb4, 0x90, 0x0d,
      0x14, 0x0d, 0xc5, 0x46, 0xbd, 0x16, 0xe0, 0x9e,
      0x8f, 0xf2, 0x78, 0xd8, 0x9d, 0xbb, 0x4d, 0x8a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char clearpath_motor_msgs__msg__LynxFeedback__TYPE_NAME[] = "clearpath_motor_msgs/msg/LynxFeedback";

// Define type names, field names, and default values
static char clearpath_motor_msgs__msg__LynxFeedback__FIELD_NAME__can_id[] = "can_id";
static char clearpath_motor_msgs__msg__LynxFeedback__FIELD_NAME__joint_name[] = "joint_name";
static char clearpath_motor_msgs__msg__LynxFeedback__FIELD_NAME__current[] = "current";
static char clearpath_motor_msgs__msg__LynxFeedback__FIELD_NAME__voltage[] = "voltage";
static char clearpath_motor_msgs__msg__LynxFeedback__FIELD_NAME__velocity[] = "velocity";
static char clearpath_motor_msgs__msg__LynxFeedback__FIELD_NAME__travel[] = "travel";

static rosidl_runtime_c__type_description__Field clearpath_motor_msgs__msg__LynxFeedback__FIELDS[] = {
  {
    {clearpath_motor_msgs__msg__LynxFeedback__FIELD_NAME__can_id, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__LynxFeedback__FIELD_NAME__joint_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__LynxFeedback__FIELD_NAME__current, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__LynxFeedback__FIELD_NAME__voltage, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__LynxFeedback__FIELD_NAME__velocity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__LynxFeedback__FIELD_NAME__travel, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
clearpath_motor_msgs__msg__LynxFeedback__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {clearpath_motor_msgs__msg__LynxFeedback__TYPE_NAME, 37, 37},
      {clearpath_motor_msgs__msg__LynxFeedback__FIELDS, 6, 6},
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
  "# Current consumed (amps RMS).\n"
  "float32 current\n"
  "\n"
  "# Motor voltage (volts).\n"
  "float32 voltage\n"
  "\n"
  "# Angular velocity of the wheel (rad/s).\n"
  "float32 velocity\n"
  "\n"
  "# Total travel of the wheel (rad).\n"
  "float32 travel";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
clearpath_motor_msgs__msg__LynxFeedback__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {clearpath_motor_msgs__msg__LynxFeedback__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 311, 311},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
clearpath_motor_msgs__msg__LynxFeedback__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *clearpath_motor_msgs__msg__LynxFeedback__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
