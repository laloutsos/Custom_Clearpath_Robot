// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from clearpath_motor_msgs:msg/LynxMultiFeedback.idl
// generated code does not contain a copyright notice

#include "clearpath_motor_msgs/msg/detail/lynx_multi_feedback__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_clearpath_motor_msgs
const rosidl_type_hash_t *
clearpath_motor_msgs__msg__LynxMultiFeedback__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf1, 0x6b, 0x11, 0x02, 0x25, 0xad, 0x0e, 0xa2,
      0xc3, 0xaf, 0x3b, 0xd1, 0xe2, 0x3d, 0x7a, 0xd8,
      0x0f, 0xfb, 0xe1, 0x96, 0xc9, 0x11, 0x38, 0x80,
      0x16, 0x6a, 0x38, 0x98, 0x30, 0xa7, 0x78, 0xa6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "clearpath_motor_msgs/msg/detail/lynx_feedback__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t clearpath_motor_msgs__msg__LynxFeedback__EXPECTED_HASH = {1, {
    0x06, 0x21, 0xa8, 0x06, 0x6e, 0x81, 0xc5, 0xf8,
    0x46, 0x51, 0xe1, 0xaa, 0x1a, 0xb4, 0x90, 0x0d,
    0x14, 0x0d, 0xc5, 0x46, 0xbd, 0x16, 0xe0, 0x9e,
    0x8f, 0xf2, 0x78, 0xd8, 0x9d, 0xbb, 0x4d, 0x8a,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char clearpath_motor_msgs__msg__LynxMultiFeedback__TYPE_NAME[] = "clearpath_motor_msgs/msg/LynxMultiFeedback";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char clearpath_motor_msgs__msg__LynxFeedback__TYPE_NAME[] = "clearpath_motor_msgs/msg/LynxFeedback";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char clearpath_motor_msgs__msg__LynxMultiFeedback__FIELD_NAME__header[] = "header";
static char clearpath_motor_msgs__msg__LynxMultiFeedback__FIELD_NAME__drivers[] = "drivers";

static rosidl_runtime_c__type_description__Field clearpath_motor_msgs__msg__LynxMultiFeedback__FIELDS[] = {
  {
    {clearpath_motor_msgs__msg__LynxMultiFeedback__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__LynxMultiFeedback__FIELD_NAME__drivers, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {clearpath_motor_msgs__msg__LynxFeedback__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription clearpath_motor_msgs__msg__LynxMultiFeedback__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__LynxFeedback__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
clearpath_motor_msgs__msg__LynxMultiFeedback__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {clearpath_motor_msgs__msg__LynxMultiFeedback__TYPE_NAME, 42, 42},
      {clearpath_motor_msgs__msg__LynxMultiFeedback__FIELDS, 2, 2},
    },
    {clearpath_motor_msgs__msg__LynxMultiFeedback__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&clearpath_motor_msgs__msg__LynxFeedback__EXPECTED_HASH, clearpath_motor_msgs__msg__LynxFeedback__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = clearpath_motor_msgs__msg__LynxFeedback__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "\n"
  "clearpath_motor_msgs/LynxFeedback[] drivers";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
clearpath_motor_msgs__msg__LynxMultiFeedback__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {clearpath_motor_msgs__msg__LynxMultiFeedback__TYPE_NAME, 42, 42},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 68, 68},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
clearpath_motor_msgs__msg__LynxMultiFeedback__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *clearpath_motor_msgs__msg__LynxMultiFeedback__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *clearpath_motor_msgs__msg__LynxFeedback__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
