// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from clearpath_motor_msgs:msg/LynxDebug.idl
// generated code does not contain a copyright notice

#include "clearpath_motor_msgs/msg/detail/lynx_debug__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_clearpath_motor_msgs
const rosidl_type_hash_t *
clearpath_motor_msgs__msg__LynxDebug__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbe, 0x90, 0x23, 0x53, 0x1c, 0x49, 0x83, 0x78,
      0xcd, 0x92, 0x53, 0xb8, 0x1d, 0xdc, 0x72, 0xe6,
      0x60, 0xf4, 0x3e, 0xb3, 0x75, 0xd3, 0x95, 0xe1,
      0x4b, 0xe3, 0x23, 0xf7, 0x81, 0x09, 0x70, 0x36,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char clearpath_motor_msgs__msg__LynxDebug__TYPE_NAME[] = "clearpath_motor_msgs/msg/LynxDebug";

// Define type names, field names, and default values
static char clearpath_motor_msgs__msg__LynxDebug__FIELD_NAME__can_id[] = "can_id";
static char clearpath_motor_msgs__msg__LynxDebug__FIELD_NAME__joint_name[] = "joint_name";
static char clearpath_motor_msgs__msg__LynxDebug__FIELD_NAME__fault_frequency[] = "fault_frequency";
static char clearpath_motor_msgs__msg__LynxDebug__FIELD_NAME__accumulator_flags[] = "accumulator_flags";
static char clearpath_motor_msgs__msg__LynxDebug__FIELD_NAME__accumulators[] = "accumulators";
static char clearpath_motor_msgs__msg__LynxDebug__FIELD_NAME__currents[] = "currents";

static rosidl_runtime_c__type_description__Field clearpath_motor_msgs__msg__LynxDebug__FIELDS[] = {
  {
    {clearpath_motor_msgs__msg__LynxDebug__FIELD_NAME__can_id, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__LynxDebug__FIELD_NAME__joint_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__LynxDebug__FIELD_NAME__fault_frequency, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__LynxDebug__FIELD_NAME__accumulator_flags, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__LynxDebug__FIELD_NAME__accumulators, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_motor_msgs__msg__LynxDebug__FIELD_NAME__currents, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
clearpath_motor_msgs__msg__LynxDebug__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {clearpath_motor_msgs__msg__LynxDebug__TYPE_NAME, 34, 34},
      {clearpath_motor_msgs__msg__LynxDebug__FIELDS, 6, 6},
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
  "# Faults triggered per second\n"
  "uint16 fault_frequency\n"
  "\n"
  "# Accumulator Flags\n"
  "uint8 ACCUMULATOR_FLAG_ABOVE_RATED=0\n"
  "uint8 ACCUMULATOR_FLAG_CONTINUOUS_1_1=1\n"
  "uint8 ACCUMULATOR_FLAG_CONTINUOUS_1_2=2\n"
  "uint8 ACCUMULATOR_FLAG_CONTINUOUS_1_3=3\n"
  "uint8 ACCUMULATOR_FLAG_CONTINUOUS_1_4=4\n"
  "uint8 ACCUMULATOR_FLAG_CONTINUOUS_1_5=5\n"
  "uint8 ACCUMULATOR_FLAG_CONTINUOUS_1_6=6\n"
  "uint8 ACCUMULATOR_FLAG_CONTINUOUS_1_7=7\n"
  "uint8 ACCUMULATOR_FLAG_CONTINUOUS_1_8=8\n"
  "uint8 ACCUMULATOR_FLAG_CONTINUOUS_1_9=9\n"
  "uint8 ACCUMULATOR_FLAG_CONTINUOUS_2_0=10\n"
  "uint8 ACCUMULATOR_FLAG_CONTINUOUS_2_1=11\n"
  "uint8 ACCUMULATOR_FLAG_CONTINUOUS_2_2=12\n"
  "uint8 ACCUMULATOR_FLAG_CONTINUOUS_2_3=13\n"
  "uint8 ACCUMULATOR_FLAG_CONTINUOUS_2_4=14\n"
  "uint8 ACCUMULATOR_FLAG_CONTINUOUS_2_5=15\n"
  "uint8 ACCUMULATOR_FLAG_CONTINUOUS_2_6=16\n"
  "uint8 ACCUMULATOR_FLAG_CONTINUOUS_2_7=17\n"
  "uint8 ACCUMULATOR_FLAG_CONTINUOUS_2_8=18\n"
  "uint8 ACCUMULATOR_FLAG_CONTINUOUS_2_9=19\n"
  "uint8 ACCUMULATOR_FLAG_CONTINUOUS_3_0=20\n"
  "\n"
  "uint32 accumulator_flags\n"
  "\n"
  "uint8 ACCUMULATOR_ABOVE_RATED=0\n"
  "uint8 ACCUMULATOR_CONTINUOUS_1_1=1\n"
  "uint8 ACCUMULATOR_CONTINUOUS_1_5=2\n"
  "uint8 ACCUMULATOR_CONTINUOUS_2_0=3\n"
  "uint8 ACCUMULATOR_CONTINUOUS_2_5=4\n"
  "uint8 ACCUMULATOR_CONTINUOUS_3_0=5\n"
  "float32[] accumulators\n"
  "\n"
  "# Current readings (Amps)\n"
  "uint8 CURRENT_ID_FB=0\n"
  "uint8 CURRENT_ID_FF=1\n"
  "uint8 CURRENT_ID_REF=2\n"
  "uint8 CURRENT_IQ_FB=3\n"
  "uint8 CURRENT_IQ_FF=4\n"
  "uint8 CURRENT_IQ_REF=5\n"
  "float32[] currents";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
clearpath_motor_msgs__msg__LynxDebug__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {clearpath_motor_msgs__msg__LynxDebug__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1471, 1471},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
clearpath_motor_msgs__msg__LynxDebug__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *clearpath_motor_msgs__msg__LynxDebug__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
