// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from clearpath_platform_msgs:msg/Lights.idl
// generated code does not contain a copyright notice

#include "clearpath_platform_msgs/msg/detail/lights__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
const rosidl_type_hash_t *
clearpath_platform_msgs__msg__Lights__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xca, 0x39, 0xce, 0x30, 0xfd, 0xc1, 0x56, 0x5b,
      0xaa, 0x25, 0xa4, 0xe9, 0xac, 0x9c, 0x30, 0x02,
      0xd6, 0xb7, 0xab, 0x0c, 0xa0, 0xe9, 0x0c, 0xae,
      0x5b, 0x4c, 0x25, 0x27, 0x98, 0xad, 0xd6, 0xa8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "clearpath_platform_msgs/msg/detail/rgb__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t clearpath_platform_msgs__msg__RGB__EXPECTED_HASH = {1, {
    0x9d, 0x23, 0x1c, 0x0d, 0x6f, 0x91, 0xc1, 0xd2,
    0x0a, 0xff, 0x4a, 0x31, 0x58, 0xf2, 0xaa, 0xe7,
    0x14, 0x0b, 0x5b, 0xf7, 0xf6, 0x97, 0x74, 0xdf,
    0x75, 0x37, 0xbd, 0x80, 0xc2, 0x97, 0xd8, 0xb0,
  }};
#endif

static char clearpath_platform_msgs__msg__Lights__TYPE_NAME[] = "clearpath_platform_msgs/msg/Lights";
static char clearpath_platform_msgs__msg__RGB__TYPE_NAME[] = "clearpath_platform_msgs/msg/RGB";

// Define type names, field names, and default values
static char clearpath_platform_msgs__msg__Lights__FIELD_NAME__lights[] = "lights";

static rosidl_runtime_c__type_description__Field clearpath_platform_msgs__msg__Lights__FIELDS[] = {
  {
    {clearpath_platform_msgs__msg__Lights__FIELD_NAME__lights, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {clearpath_platform_msgs__msg__RGB__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription clearpath_platform_msgs__msg__Lights__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {clearpath_platform_msgs__msg__RGB__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
clearpath_platform_msgs__msg__Lights__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {clearpath_platform_msgs__msg__Lights__TYPE_NAME, 34, 34},
      {clearpath_platform_msgs__msg__Lights__FIELDS, 1, 1},
    },
    {clearpath_platform_msgs__msg__Lights__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&clearpath_platform_msgs__msg__RGB__EXPECTED_HASH, clearpath_platform_msgs__msg__RGB__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = clearpath_platform_msgs__msg__RGB__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Represents a command for the pairs of RGB body lights on a CPR robot.\n"
  "\n"
  "# Dingo 1.0 (D100)\n"
  "uint8 D100_LIGHTS_REAR_LEFT=0\n"
  "uint8 D100_LIGHTS_FRONT_LEFT=1\n"
  "uint8 D100_LIGHTS_FRONT_RIGHT=2\n"
  "uint8 D100_LIGHTS_REAR_RIGHT=3\n"
  "\n"
  "# Dingo 1.5 (D150)\n"
  "uint8 D150_LIGHTS_REAR_LEFT=0\n"
  "uint8 D150_LIGHTS_FRONT_LEFT=1\n"
  "uint8 D150_LIGHTS_FRONT_RIGHT=2\n"
  "uint8 D150_LIGHTS_REAR_RIGHT=3\n"
  "\n"
  "# Ridgeback (R100)\n"
  "uint8 R100_LIGHTS_FRONT_PORT_UPPER=0\n"
  "uint8 R100_LIGHTS_FRONT_PORT_LOWER=1\n"
  "uint8 R100_LIGHTS_FRONT_STARBOARD_UPPER=2\n"
  "uint8 R100_LIGHTS_FRONT_STARBOARD_LOWER=3\n"
  "uint8 R100_LIGHTS_REAR_PORT_UPPER=4\n"
  "uint8 R100_LIGHTS_REAR_PORT_LOWER=5\n"
  "uint8 R100_LIGHTS_REAR_STARBOARD_UPPER=6\n"
  "uint8 R100_LIGHTS_REAR_STARBOARD_LOWER=7\n"
  "\n"
  "# Warthog (W200)\n"
  "uint8 W200_LIGHTS_FRONT_LEFT=0\n"
  "uint8 W200_LIGHTS_FRONT_RIGHT=1\n"
  "uint8 W200_LIGHTS_REAR_LEFT=2\n"
  "uint8 W200_LIGHTS_REAR_RIGHT=3\n"
  "\n"
  "# Husky (A300)\n"
  "uint8 A300_LIGHTS_FRONT_RIGHT=0\n"
  "uint8 A300_LIGHTS_FRONT_LEFT=1\n"
  "uint8 A300_LIGHTS_REAR_LEFT=2\n"
  "uint8 A300_LIGHTS_REAR_RIGHT=3\n"
  "\n"
  "RGB[] lights";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
clearpath_platform_msgs__msg__Lights__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {clearpath_platform_msgs__msg__Lights__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 988, 988},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
clearpath_platform_msgs__msg__Lights__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *clearpath_platform_msgs__msg__Lights__get_individual_type_description_source(NULL),
    sources[1] = *clearpath_platform_msgs__msg__RGB__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
