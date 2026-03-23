// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from clearpath_platform_msgs:msg/PinoutState.idl
// generated code does not contain a copyright notice

#include "clearpath_platform_msgs/msg/detail/pinout_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
const rosidl_type_hash_t *
clearpath_platform_msgs__msg__PinoutState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x94, 0x84, 0x2e, 0x5e, 0xe9, 0x08, 0xec, 0x5c,
      0x66, 0xc0, 0x26, 0x04, 0x19, 0x79, 0x68, 0x34,
      0x9c, 0x87, 0xbe, 0x6b, 0x36, 0xca, 0xee, 0x1f,
      0x3a, 0x9f, 0x52, 0xae, 0xca, 0xf0, 0x7b, 0x9f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
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
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char clearpath_platform_msgs__msg__PinoutState__TYPE_NAME[] = "clearpath_platform_msgs/msg/PinoutState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char clearpath_platform_msgs__msg__PinoutState__FIELD_NAME__header[] = "header";
static char clearpath_platform_msgs__msg__PinoutState__FIELD_NAME__rails[] = "rails";
static char clearpath_platform_msgs__msg__PinoutState__FIELD_NAME__inputs[] = "inputs";
static char clearpath_platform_msgs__msg__PinoutState__FIELD_NAME__outputs[] = "outputs";
static char clearpath_platform_msgs__msg__PinoutState__FIELD_NAME__output_periods[] = "output_periods";

static rosidl_runtime_c__type_description__Field clearpath_platform_msgs__msg__PinoutState__FIELDS[] = {
  {
    {clearpath_platform_msgs__msg__PinoutState__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_platform_msgs__msg__PinoutState__FIELD_NAME__rails, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_platform_msgs__msg__PinoutState__FIELD_NAME__inputs, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_platform_msgs__msg__PinoutState__FIELD_NAME__outputs, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_platform_msgs__msg__PinoutState__FIELD_NAME__output_periods, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription clearpath_platform_msgs__msg__PinoutState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
clearpath_platform_msgs__msg__PinoutState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {clearpath_platform_msgs__msg__PinoutState__TYPE_NAME, 39, 39},
      {clearpath_platform_msgs__msg__PinoutState__FIELDS, 5, 5},
    },
    {clearpath_platform_msgs__msg__PinoutState__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Pinout state\n"
  "\n"
  "std_msgs/Header header\n"
  "\n"
  "# Current power rail state\n"
  "\n"
  "# CC01\n"
  "uint8 CC01_USER_PWR_CTRL=0\n"
  "\n"
  "bool[] rails\n"
  "\n"
  "# Current input state\n"
  "\n"
  "# Dingo 1.0 (D100)\n"
  "uint8 D100_AUX_IN1=0\n"
  "uint8 D100_AUX_IN2=1\n"
  "uint8 D100_AUX_IN3=2\n"
  "\n"
  "# Dingo 1.5 (D150)\n"
  "uint8 D150_AUX_IN1=0\n"
  "uint8 D150_AUX_IN2=1\n"
  "uint8 D150_AUX_IN3=2\n"
  "\n"
  "# CC01\n"
  "uint8 CC01_AUX_IN1=0\n"
  "uint8 CC01_AUX_IN2=1\n"
  "uint8 CC01_AUX_IN3=2\n"
  "uint8 CC01_GPI0=3\n"
  "uint8 CC01_GPI1=4\n"
  "uint8 CC01_GPI2=5\n"
  "uint8 CC01_GPI3=6\n"
  "\n"
  "bool[] inputs\n"
  "\n"
  "# Current output state\n"
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
  "bool[] outputs\n"
  "\n"
  "# Current output toggle period\n"
  "\n"
  "uint32[] output_periods";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
clearpath_platform_msgs__msg__PinoutState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {clearpath_platform_msgs__msg__PinoutState__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 878, 878},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
clearpath_platform_msgs__msg__PinoutState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *clearpath_platform_msgs__msg__PinoutState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
