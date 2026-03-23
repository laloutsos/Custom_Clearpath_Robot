// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from clearpath_motor_msgs:msg/LynxMotorProtection.idl
// generated code does not contain a copyright notice

#include "clearpath_motor_msgs/msg/detail/lynx_motor_protection__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_clearpath_motor_msgs
const rosidl_type_hash_t *
clearpath_motor_msgs__msg__LynxMotorProtection__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x85, 0x91, 0xc9, 0x9d, 0x4e, 0xdb, 0x65, 0x36,
      0x8d, 0x46, 0xda, 0xab, 0xcc, 0x56, 0x17, 0x95,
      0xe4, 0xe2, 0x9b, 0x9f, 0x3a, 0x10, 0x6f, 0xa2,
      0x6c, 0x94, 0x93, 0xa7, 0x50, 0x99, 0x8d, 0xeb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char clearpath_motor_msgs__msg__LynxMotorProtection__TYPE_NAME[] = "clearpath_motor_msgs/msg/LynxMotorProtection";

// Define type names, field names, and default values
static char clearpath_motor_msgs__msg__LynxMotorProtection__FIELD_NAME__can_id[] = "can_id";
static char clearpath_motor_msgs__msg__LynxMotorProtection__FIELD_NAME__joint_name[] = "joint_name";
static char clearpath_motor_msgs__msg__LynxMotorProtection__FIELD_NAME__state[] = "state";

static rosidl_runtime_c__type_description__Field clearpath_motor_msgs__msg__LynxMotorProtection__FIELDS[] = {
  {
    {clearpath_motor_msgs__msg__LynxMotorProtection__FIELD_NAME__can_id, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__LynxMotorProtection__FIELD_NAME__joint_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__LynxMotorProtection__FIELD_NAME__state, 5, 5},
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
clearpath_motor_msgs__msg__LynxMotorProtection__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {clearpath_motor_msgs__msg__LynxMotorProtection__TYPE_NAME, 44, 44},
      {clearpath_motor_msgs__msg__LynxMotorProtection__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Number on the bus (CAN ID).\n"
  "uint8 can_id\n"
  "\n"
  "# Name of joint controlled, or other identifier.\n"
  "string joint_name\n"
  "\n"
  "# Protection states\n"
  "uint8 NORMAL=0\n"
  "uint8 THROTTLED=1\n"
  "uint8 OVERHEATED=2\n"
  "uint8 ERROR=3\n"
  "\n"
  "# Protection state\n"
  "uint8 state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
clearpath_motor_msgs__msg__LynxMotorProtection__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {clearpath_motor_msgs__msg__LynxMotorProtection__TYPE_NAME, 44, 44},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 230, 230},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
clearpath_motor_msgs__msg__LynxMotorProtection__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *clearpath_motor_msgs__msg__LynxMotorProtection__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
