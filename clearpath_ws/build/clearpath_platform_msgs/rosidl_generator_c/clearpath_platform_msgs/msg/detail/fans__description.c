// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from clearpath_platform_msgs:msg/Fans.idl
// generated code does not contain a copyright notice

#include "clearpath_platform_msgs/msg/detail/fans__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
const rosidl_type_hash_t *
clearpath_platform_msgs__msg__Fans__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbb, 0x63, 0x67, 0x9f, 0x13, 0x66, 0x33, 0xe7,
      0x9c, 0xe8, 0x80, 0x4f, 0xa0, 0xbd, 0x39, 0x87,
      0xd6, 0xda, 0xc3, 0x36, 0xfb, 0x91, 0x03, 0xce,
      0x97, 0x26, 0xa6, 0x50, 0x6d, 0x35, 0x97, 0x37,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char clearpath_platform_msgs__msg__Fans__TYPE_NAME[] = "clearpath_platform_msgs/msg/Fans";

// Define type names, field names, and default values
static char clearpath_platform_msgs__msg__Fans__FIELD_NAME__fans[] = "fans";

static rosidl_runtime_c__type_description__Field clearpath_platform_msgs__msg__Fans__FIELDS[] = {
  {
    {clearpath_platform_msgs__msg__Fans__FIELD_NAME__fans, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
clearpath_platform_msgs__msg__Fans__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {clearpath_platform_msgs__msg__Fans__TYPE_NAME, 32, 32},
      {clearpath_platform_msgs__msg__Fans__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Location of fans.\n"
  "\n"
  "# Common Core (CC01)\n"
  "uint8 CC01_FAN1=0\n"
  "uint8 CC01_FAN2=1\n"
  "uint8 CC01_FAN3=2\n"
  "uint8 CC01_FAN4=3\n"
  "uint8 CC01_FAN5=4\n"
  "uint8 CC01_FAN6=5\n"
  "uint8 CC01_FAN7=6\n"
  "uint8 CC01_FAN8=7\n"
  "\n"
  "# Ridgeback (R100)\n"
  "uint8 R100_EQUIPMENT_BAY_INTAKE=0\n"
  "uint8 R100_EQUIPMENT_BAY_EXHAUST=1\n"
  "uint8 R100_CHARGER_BAY_INTAKE=2\n"
  "uint8 R100_CHARGER_BAY_EXHAUST=3\n"
  "uint8 R100_USER_BAY_INTAKE=4\n"
  "uint8 R100_USER_BAY_EXHAUST=5\n"
  "\n"
  "# Possible fan states\n"
  "uint8 FAN_OFF=0\n"
  "uint8 FAN_ON_HIGH=1\n"
  "uint8 FAN_ON_LOW=2\n"
  "\n"
  "# Control for the fans\n"
  "uint8[] fans";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
clearpath_platform_msgs__msg__Fans__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {clearpath_platform_msgs__msg__Fans__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 514, 514},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
clearpath_platform_msgs__msg__Fans__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *clearpath_platform_msgs__msg__Fans__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
