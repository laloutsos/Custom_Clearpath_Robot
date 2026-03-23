// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from clearpath_platform_msgs:msg/PinoutCommand.idl
// generated code does not contain a copyright notice

#include "clearpath_platform_msgs/msg/detail/pinout_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
const rosidl_type_hash_t *
clearpath_platform_msgs__msg__PinoutCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbb, 0x06, 0xfd, 0x8a, 0xf8, 0xba, 0x2b, 0x39,
      0xad, 0x91, 0xa9, 0xb2, 0xf1, 0x3e, 0x91, 0x2a,
      0xc4, 0xf6, 0xaf, 0xf3, 0xf4, 0xd5, 0x3e, 0x46,
      0x2d, 0x88, 0x82, 0xa0, 0x77, 0xfd, 0x81, 0x04,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char clearpath_platform_msgs__msg__PinoutCommand__TYPE_NAME[] = "clearpath_platform_msgs/msg/PinoutCommand";

// Define type names, field names, and default values
static char clearpath_platform_msgs__msg__PinoutCommand__FIELD_NAME__rails[] = "rails";
static char clearpath_platform_msgs__msg__PinoutCommand__FIELD_NAME__outputs[] = "outputs";

static rosidl_runtime_c__type_description__Field clearpath_platform_msgs__msg__PinoutCommand__FIELDS[] = {
  {
    {clearpath_platform_msgs__msg__PinoutCommand__FIELD_NAME__rails, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_platform_msgs__msg__PinoutCommand__FIELD_NAME__outputs, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
clearpath_platform_msgs__msg__PinoutCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {clearpath_platform_msgs__msg__PinoutCommand__TYPE_NAME, 41, 41},
      {clearpath_platform_msgs__msg__PinoutCommand__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Pinout command\n"
  "\n"
  "# Power rails.\n"
  "\n"
  "# True enables them, False disables them.\n"
  "\n"
  "# CC01\n"
  "uint8 CC01_USER_PWR_CTRL=0\n"
  "\n"
  "bool[] rails\n"
  "\n"
  "# User controlled outputs.\n"
  "\n"
  "# Bit 1 sets the output to on/off\n"
  "# Bit 2-32 represent the toggle period in milliseconds\n"
  "# Toggle period of 0 implies no toggling\n"
  "# Minimum toggle period is 100ms\n"
  "# Toggle period precision is 10ms\n"
  "\n"
  "# Dingo 1.0 (D100)\n"
  "uint8 D100_AUX_OUT1=0\n"
  "uint8 D100_AUX_OUT2=1\n"
  "uint8 D100_AUX_OUT3=2\n"
  "\n"
  "# Dingo 1.5 (D150)\n"
  "uint8 D150_AUX_OUT1=0\n"
  "uint8 D150_AUX_OUT2=1\n"
  "uint8 D150_AUX_OUT3=2\n"
  "\n"
  "# CC01\n"
  "uint8 CC01_AUX_OUT1=0\n"
  "uint8 CC01_AUX_OUT2=1\n"
  "uint8 CC01_AUX_OUT3=2\n"
  "uint8 CC01_GPO0=3\n"
  "uint8 CC01_GPO1=4\n"
  "uint8 CC01_GPO2=5\n"
  "uint8 CC01_GPO3=6\n"
  "\n"
  "uint32[] outputs";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
clearpath_platform_msgs__msg__PinoutCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {clearpath_platform_msgs__msg__PinoutCommand__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 687, 687},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
clearpath_platform_msgs__msg__PinoutCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *clearpath_platform_msgs__msg__PinoutCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
