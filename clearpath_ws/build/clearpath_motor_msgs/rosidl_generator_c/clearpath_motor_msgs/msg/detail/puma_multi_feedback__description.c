// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from clearpath_motor_msgs:msg/PumaMultiFeedback.idl
// generated code does not contain a copyright notice

#include "clearpath_motor_msgs/msg/detail/puma_multi_feedback__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_clearpath_motor_msgs
const rosidl_type_hash_t *
clearpath_motor_msgs__msg__PumaMultiFeedback__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe1, 0x59, 0x7c, 0xf3, 0x6d, 0x7b, 0x64, 0x00,
      0x2d, 0x56, 0x1a, 0xf9, 0x1d, 0x3a, 0xf5, 0x7a,
      0xb5, 0xf9, 0xd1, 0xd8, 0xf3, 0xc7, 0x2b, 0xdc,
      0xc8, 0xf8, 0x81, 0xf5, 0x77, 0x09, 0x00, 0x90,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "clearpath_motor_msgs/msg/detail/puma_feedback__functions.h"
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
static const rosidl_type_hash_t clearpath_motor_msgs__msg__PumaFeedback__EXPECTED_HASH = {1, {
    0x7a, 0x24, 0xfd, 0x8b, 0x11, 0x1d, 0x28, 0x81,
    0x34, 0x80, 0xcc, 0xa6, 0xd2, 0x8b, 0x1c, 0x11,
    0x99, 0x7b, 0x51, 0x6e, 0x71, 0x88, 0x47, 0x25,
    0xd6, 0xd2, 0x6f, 0xc4, 0x71, 0xf4, 0x93, 0x74,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char clearpath_motor_msgs__msg__PumaMultiFeedback__TYPE_NAME[] = "clearpath_motor_msgs/msg/PumaMultiFeedback";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char clearpath_motor_msgs__msg__PumaFeedback__TYPE_NAME[] = "clearpath_motor_msgs/msg/PumaFeedback";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char clearpath_motor_msgs__msg__PumaMultiFeedback__FIELD_NAME__header[] = "header";
static char clearpath_motor_msgs__msg__PumaMultiFeedback__FIELD_NAME__drivers_feedback[] = "drivers_feedback";

static rosidl_runtime_c__type_description__Field clearpath_motor_msgs__msg__PumaMultiFeedback__FIELDS[] = {
  {
    {clearpath_motor_msgs__msg__PumaMultiFeedback__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__PumaMultiFeedback__FIELD_NAME__drivers_feedback, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {clearpath_motor_msgs__msg__PumaFeedback__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription clearpath_motor_msgs__msg__PumaMultiFeedback__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__PumaFeedback__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
clearpath_motor_msgs__msg__PumaMultiFeedback__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {clearpath_motor_msgs__msg__PumaMultiFeedback__TYPE_NAME, 42, 42},
      {clearpath_motor_msgs__msg__PumaMultiFeedback__FIELDS, 2, 2},
    },
    {clearpath_motor_msgs__msg__PumaMultiFeedback__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&clearpath_motor_msgs__msg__PumaFeedback__EXPECTED_HASH, clearpath_motor_msgs__msg__PumaFeedback__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = clearpath_motor_msgs__msg__PumaFeedback__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "\n"
  "clearpath_motor_msgs/PumaFeedback[] drivers_feedback";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
clearpath_motor_msgs__msg__PumaMultiFeedback__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {clearpath_motor_msgs__msg__PumaMultiFeedback__TYPE_NAME, 42, 42},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 77, 77},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
clearpath_motor_msgs__msg__PumaMultiFeedback__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *clearpath_motor_msgs__msg__PumaMultiFeedback__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *clearpath_motor_msgs__msg__PumaFeedback__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
