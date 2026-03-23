// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from clearpath_motor_msgs:msg/LynxSystemProtection.idl
// generated code does not contain a copyright notice

#include "clearpath_motor_msgs/msg/detail/lynx_system_protection__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_clearpath_motor_msgs
const rosidl_type_hash_t *
clearpath_motor_msgs__msg__LynxSystemProtection__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x67, 0x3d, 0xef, 0x0f, 0xd5, 0xa1, 0xc9, 0x86,
      0x2e, 0x0a, 0x7c, 0xd6, 0x76, 0x87, 0xc8, 0x95,
      0x5c, 0x52, 0xc0, 0xb0, 0xe1, 0xb3, 0x96, 0x75,
      0x3c, 0x9e, 0x16, 0x5b, 0xad, 0x80, 0xaa, 0x79,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "clearpath_motor_msgs/msg/detail/lynx_motor_protection__functions.h"
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
static const rosidl_type_hash_t clearpath_motor_msgs__msg__LynxMotorProtection__EXPECTED_HASH = {1, {
    0x85, 0x91, 0xc9, 0x9d, 0x4e, 0xdb, 0x65, 0x36,
    0x8d, 0x46, 0xda, 0xab, 0xcc, 0x56, 0x17, 0x95,
    0xe4, 0xe2, 0x9b, 0x9f, 0x3a, 0x10, 0x6f, 0xa2,
    0x6c, 0x94, 0x93, 0xa7, 0x50, 0x99, 0x8d, 0xeb,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char clearpath_motor_msgs__msg__LynxSystemProtection__TYPE_NAME[] = "clearpath_motor_msgs/msg/LynxSystemProtection";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char clearpath_motor_msgs__msg__LynxMotorProtection__TYPE_NAME[] = "clearpath_motor_msgs/msg/LynxMotorProtection";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char clearpath_motor_msgs__msg__LynxSystemProtection__FIELD_NAME__header[] = "header";
static char clearpath_motor_msgs__msg__LynxSystemProtection__FIELD_NAME__system_state[] = "system_state";
static char clearpath_motor_msgs__msg__LynxSystemProtection__FIELD_NAME__motor_states[] = "motor_states";

static rosidl_runtime_c__type_description__Field clearpath_motor_msgs__msg__LynxSystemProtection__FIELDS[] = {
  {
    {clearpath_motor_msgs__msg__LynxSystemProtection__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__LynxSystemProtection__FIELD_NAME__system_state, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__LynxSystemProtection__FIELD_NAME__motor_states, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {clearpath_motor_msgs__msg__LynxMotorProtection__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription clearpath_motor_msgs__msg__LynxSystemProtection__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__LynxMotorProtection__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
clearpath_motor_msgs__msg__LynxSystemProtection__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {clearpath_motor_msgs__msg__LynxSystemProtection__TYPE_NAME, 45, 45},
      {clearpath_motor_msgs__msg__LynxSystemProtection__FIELDS, 3, 3},
    },
    {clearpath_motor_msgs__msg__LynxSystemProtection__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&clearpath_motor_msgs__msg__LynxMotorProtection__EXPECTED_HASH, clearpath_motor_msgs__msg__LynxMotorProtection__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = clearpath_motor_msgs__msg__LynxMotorProtection__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "\n"
  "# System state based on highest protection state of motors\n"
  "uint8 system_state\n"
  "\n"
  "# Individual motor protection states\n"
  "clearpath_motor_msgs/LynxMotorProtection[] motor_states";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
clearpath_motor_msgs__msg__LynxSystemProtection__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {clearpath_motor_msgs__msg__LynxSystemProtection__TYPE_NAME, 45, 45},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 196, 196},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
clearpath_motor_msgs__msg__LynxSystemProtection__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *clearpath_motor_msgs__msg__LynxSystemProtection__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *clearpath_motor_msgs__msg__LynxMotorProtection__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
