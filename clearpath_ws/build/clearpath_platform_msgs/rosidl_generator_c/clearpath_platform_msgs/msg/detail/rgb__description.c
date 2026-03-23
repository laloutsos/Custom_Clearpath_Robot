// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from clearpath_platform_msgs:msg/RGB.idl
// generated code does not contain a copyright notice

#include "clearpath_platform_msgs/msg/detail/rgb__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
const rosidl_type_hash_t *
clearpath_platform_msgs__msg__RGB__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9d, 0x23, 0x1c, 0x0d, 0x6f, 0x91, 0xc1, 0xd2,
      0x0a, 0xff, 0x4a, 0x31, 0x58, 0xf2, 0xaa, 0xe7,
      0x14, 0x0b, 0x5b, 0xf7, 0xf6, 0x97, 0x74, 0xdf,
      0x75, 0x37, 0xbd, 0x80, 0xc2, 0x97, 0xd8, 0xb0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char clearpath_platform_msgs__msg__RGB__TYPE_NAME[] = "clearpath_platform_msgs/msg/RGB";

// Define type names, field names, and default values
static char clearpath_platform_msgs__msg__RGB__FIELD_NAME__red[] = "red";
static char clearpath_platform_msgs__msg__RGB__FIELD_NAME__green[] = "green";
static char clearpath_platform_msgs__msg__RGB__FIELD_NAME__blue[] = "blue";

static rosidl_runtime_c__type_description__Field clearpath_platform_msgs__msg__RGB__FIELDS[] = {
  {
    {clearpath_platform_msgs__msg__RGB__FIELD_NAME__red, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_platform_msgs__msg__RGB__FIELD_NAME__green, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_platform_msgs__msg__RGB__FIELD_NAME__blue, 4, 4},
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
clearpath_platform_msgs__msg__RGB__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {clearpath_platform_msgs__msg__RGB__TYPE_NAME, 31, 31},
      {clearpath_platform_msgs__msg__RGB__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Represents the intensity of a single RGB LED, either reported or commanded.\n"
  "# Each channel is limited to a range of [0, 255]\n"
  "\n"
  "uint8 red\n"
  "uint8 green\n"
  "uint8 blue";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
clearpath_platform_msgs__msg__RGB__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {clearpath_platform_msgs__msg__RGB__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 161, 161},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
clearpath_platform_msgs__msg__RGB__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *clearpath_platform_msgs__msg__RGB__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
