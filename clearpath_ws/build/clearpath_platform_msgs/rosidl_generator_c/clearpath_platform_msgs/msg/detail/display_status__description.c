// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from clearpath_platform_msgs:msg/DisplayStatus.idl
// generated code does not contain a copyright notice

#include "clearpath_platform_msgs/msg/detail/display_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
const rosidl_type_hash_t *
clearpath_platform_msgs__msg__DisplayStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4a, 0x20, 0x54, 0x64, 0x85, 0x5a, 0x8a, 0xe6,
      0xd5, 0x45, 0x77, 0xc1, 0x42, 0x70, 0x6c, 0xca,
      0x3f, 0x5e, 0x71, 0x31, 0x3d, 0xea, 0x55, 0x41,
      0xee, 0xe5, 0xf3, 0xb8, 0x33, 0x39, 0xd1, 0xc5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char clearpath_platform_msgs__msg__DisplayStatus__TYPE_NAME[] = "clearpath_platform_msgs/msg/DisplayStatus";

// Define type names, field names, and default values
static char clearpath_platform_msgs__msg__DisplayStatus__FIELD_NAME__string1[] = "string1";
static char clearpath_platform_msgs__msg__DisplayStatus__FIELD_NAME__string2[] = "string2";

static rosidl_runtime_c__type_description__Field clearpath_platform_msgs__msg__DisplayStatus__FIELDS[] = {
  {
    {clearpath_platform_msgs__msg__DisplayStatus__FIELD_NAME__string1, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOUNDED_STRING,
      0,
      49,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_platform_msgs__msg__DisplayStatus__FIELD_NAME__string2, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOUNDED_STRING,
      0,
      49,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
clearpath_platform_msgs__msg__DisplayStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {clearpath_platform_msgs__msg__DisplayStatus__TYPE_NAME, 41, 41},
      {clearpath_platform_msgs__msg__DisplayStatus__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message is used to set the two lines of text on the bottom of the e-ink display\n"
  "string<=49 string1\n"
  "string<=49 string2";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
clearpath_platform_msgs__msg__DisplayStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {clearpath_platform_msgs__msg__DisplayStatus__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 124, 124},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
clearpath_platform_msgs__msg__DisplayStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *clearpath_platform_msgs__msg__DisplayStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
