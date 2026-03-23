// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from clearpath_platform_msgs:msg/Drive.idl
// generated code does not contain a copyright notice

#include "clearpath_platform_msgs/msg/detail/drive__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
const rosidl_type_hash_t *
clearpath_platform_msgs__msg__Drive__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xef, 0xe1, 0x58, 0xf3, 0xe2, 0x69, 0x3f, 0x38,
      0x11, 0x70, 0x18, 0x98, 0x08, 0x66, 0xf1, 0x92,
      0x2b, 0x55, 0x0e, 0x9b, 0xc4, 0x3a, 0xb0, 0xc8,
      0x6e, 0xf5, 0x03, 0xa7, 0x02, 0x0c, 0xea, 0xb6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char clearpath_platform_msgs__msg__Drive__TYPE_NAME[] = "clearpath_platform_msgs/msg/Drive";

// Define type names, field names, and default values
static char clearpath_platform_msgs__msg__Drive__FIELD_NAME__mode[] = "mode";
static char clearpath_platform_msgs__msg__Drive__FIELD_NAME__drivers[] = "drivers";

static rosidl_runtime_c__type_description__Field clearpath_platform_msgs__msg__Drive__FIELDS[] = {
  {
    {clearpath_platform_msgs__msg__Drive__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_platform_msgs__msg__Drive__FIELD_NAME__drivers, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
clearpath_platform_msgs__msg__Drive__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {clearpath_platform_msgs__msg__Drive__TYPE_NAME, 33, 33},
      {clearpath_platform_msgs__msg__Drive__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message represents a low-level motor command to Jackal.\n"
  "\n"
  "# Command units dependent on the value of this field\n"
  "int8 MODE_VELOCITY=0   # velocity command (rad/s of wheels)\n"
  "int8 MODE_PWM=1        # proportion of full voltage command [-1.0..1.0]\n"
  "int8 MODE_NONE=-1      # no control, commanded values ignored.\n"
  "int8 mode\n"
  "\n"
  "# Units as above, +ve direction propels chassis forward.\n"
  "int8 LEFT=0\n"
  "int8 RIGHT=1\n"
  "float32[2] drivers";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
clearpath_platform_msgs__msg__Drive__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {clearpath_platform_msgs__msg__Drive__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 424, 424},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
clearpath_platform_msgs__msg__Drive__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *clearpath_platform_msgs__msg__Drive__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
