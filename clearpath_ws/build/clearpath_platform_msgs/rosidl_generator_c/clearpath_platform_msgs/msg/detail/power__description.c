// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from clearpath_platform_msgs:msg/Power.idl
// generated code does not contain a copyright notice

#include "clearpath_platform_msgs/msg/detail/power__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
const rosidl_type_hash_t *
clearpath_platform_msgs__msg__Power__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdc, 0xae, 0x70, 0x24, 0x6f, 0x95, 0x6b, 0x7e,
      0xc5, 0xca, 0x09, 0x86, 0xfc, 0x5c, 0x6f, 0x76,
      0xf2, 0xf3, 0xfe, 0xc5, 0xa9, 0x24, 0x45, 0x46,
      0x97, 0x22, 0xe9, 0x7c, 0xcd, 0x09, 0x23, 0x8c,
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

static char clearpath_platform_msgs__msg__Power__TYPE_NAME[] = "clearpath_platform_msgs/msg/Power";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char clearpath_platform_msgs__msg__Power__FIELD_NAME__header[] = "header";
static char clearpath_platform_msgs__msg__Power__FIELD_NAME__shore_power_connected[] = "shore_power_connected";
static char clearpath_platform_msgs__msg__Power__FIELD_NAME__battery_connected[] = "battery_connected";
static char clearpath_platform_msgs__msg__Power__FIELD_NAME__power_12v_user_nominal[] = "power_12v_user_nominal";
static char clearpath_platform_msgs__msg__Power__FIELD_NAME__charger_connected[] = "charger_connected";
static char clearpath_platform_msgs__msg__Power__FIELD_NAME__charging_complete[] = "charging_complete";
static char clearpath_platform_msgs__msg__Power__FIELD_NAME__measured_voltages[] = "measured_voltages";
static char clearpath_platform_msgs__msg__Power__FIELD_NAME__measured_currents[] = "measured_currents";

static rosidl_runtime_c__type_description__Field clearpath_platform_msgs__msg__Power__FIELDS[] = {
  {
    {clearpath_platform_msgs__msg__Power__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_platform_msgs__msg__Power__FIELD_NAME__shore_power_connected, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_platform_msgs__msg__Power__FIELD_NAME__battery_connected, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_platform_msgs__msg__Power__FIELD_NAME__power_12v_user_nominal, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_platform_msgs__msg__Power__FIELD_NAME__charger_connected, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_platform_msgs__msg__Power__FIELD_NAME__charging_complete, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_platform_msgs__msg__Power__FIELD_NAME__measured_voltages, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_platform_msgs__msg__Power__FIELD_NAME__measured_currents, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription clearpath_platform_msgs__msg__Power__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
clearpath_platform_msgs__msg__Power__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {clearpath_platform_msgs__msg__Power__TYPE_NAME, 33, 33},
      {clearpath_platform_msgs__msg__Power__FIELDS, 8, 8},
    },
    {clearpath_platform_msgs__msg__Power__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "# Robot Power readings\n"
  "\n"
  "std_msgs/Header header\n"
  "\n"
  "# AC Power\n"
  "int8 NOT_APPLICABLE=-1\n"
  "\n"
  "int8 shore_power_connected  # Indicates if AC power is connected.\n"
  "int8 battery_connected      # Indicates if battery is connected.\n"
  "int8 power_12v_user_nominal # Indicates if the 12V user power is good.\n"
  "int8 charger_connected      # Indicates if a charger is connected.\n"
  "int8 charging_complete      # Indicates if charging is complete.\n"
  "\n"
  "# Voltage rails, in volts\n"
  "# Averaged over the message period\n"
  "\n"
  "# Jackal (J100)\n"
  "uint8 J100_MEASURED_BATTERY=0\n"
  "uint8 J100_MEASURED_5V=1\n"
  "uint8 J100_MEASURED_12V=2\n"
  "\n"
  "# Dingo 1.0 (D100)\n"
  "uint8 D100_MEASURED_BATTERY=0\n"
  "uint8 D100_MEASURED_5V=1\n"
  "uint8 D100_MEASURED_12V=2\n"
  "\n"
  "# Dingo 1.5 (D150)\n"
  "uint8 D150_MEASURED_BATTERY=0\n"
  "uint8 D150_MEASURED_5V=1\n"
  "uint8 D150_MEASURED_12V=2\n"
  "\n"
  "# Warthog (W200)\n"
  "uint8 W200_MEASURED_BATTERY=0\n"
  "uint8 W200_MEASURED_12V=1\n"
  "uint8 W200_MEASURED_24V=2\n"
  "uint8 W200_MEASURED_48V=3\n"
  "\n"
  "# Ridgeback (R100)\n"
  "uint8 R100_MEASURED_BATTERY=0\n"
  "uint8 R100_MEASURED_5V=1\n"
  "uint8 R100_MEASURED_12V=2\n"
  "uint8 R100_MEASURED_INVERTER=3\n"
  "uint8 R100_MEASURED_FRONT_AXLE=4\n"
  "uint8 R100_MEASURED_REAR_AXLE=5\n"
  "uint8 R100_MEASURED_LIGHT=6\n"
  "\n"
  "# Husky (A200)\n"
  "uint8 A200_BATTERY_VOLTAGE=0\n"
  "uint8 A200_LEFT_DRIVER_VOLTAGE=1\n"
  "uint8 A200_RIGHT_DRIVER_VOLTAGE=2\n"
  "uint8 A200_VOLTAGES_SIZE=3\n"
  "\n"
  "# CC01\n"
  "uint8 CC01_BATTERY_VOLTAGE=0\n"
  "uint8 CC01_USER_BATTERY_VOLTAGE=1\n"
  "uint8 CC01_USER_24V_VOLTAGE=2\n"
  "uint8 CC01_USER_12VB_VOLTAGE=3\n"
  "uint8 CC01_SYSTEM_12V_VOLTAGE=4\n"
  "uint8 CC01_EXPANSION_VOLTAGE=5\n"
  "uint8 CC01_BREAKOUT_24V_AUX_VOLTAGE=6\n"
  "uint8 CC01_BREAKOUT_12V_AUX_VOLTAGE=7\n"
  "uint8 CC01_BREAKOUT_USER_12VA_VOLTAGE=8\n"
  "uint8 CC01_BREAKOUT_LYNX1_VOLTAGE=9\n"
  "uint8 CC01_BREAKOUT_LYNX2_VOLTAGE=10\n"
  "uint8 CC01_BREAKOUT_LYNX3_VOLTAGE=11\n"
  "uint8 CC01_BREAKOUT_LYNX4_VOLTAGE=12\n"
  "\n"
  "float32[] measured_voltages\n"
  "\n"
  "# Current senses available on platform, in amps.\n"
  "# Averaged over the message period\n"
  "\n"
  "# Jackal (J100)\n"
  "uint8 J100_TOTAL_CURRENT=0\n"
  "uint8 J100_COMPUTER_CURRENT=1\n"
  "uint8 J100_DRIVE_CURRENT=2\n"
  "uint8 J100_USER_CURRENT=3\n"
  "\n"
  "# Dingo 1.0 (D100)\n"
  "uint8 D100_TOTAL_CURRENT=0\n"
  "uint8 D100_COMPUTER_CURRENT=1\n"
  "\n"
  "# Dingo 1.5 (D150)\n"
  "uint8 D150_TOTAL_CURRENT=0\n"
  "uint8 D150_COMPUTER_CURRENT=1\n"
  "\n"
  "# Warthog (W200)\n"
  "uint8 W200_TOTAL_CURRENT=0\n"
  "uint8 W200_COMPUTER_CURRENT=1\n"
  "uint8 W200_12V_CURRENT=2\n"
  "uint8 W200_24V_CURRENT=3\n"
  "\n"
  "# Ridgeback (R100)\n"
  "uint8 R100_TOTAL_CURRENT=0\n"
  "\n"
  "# Husky (A200)\n"
  "uint8 A200_MCU_AND_USER_PORT_CURRENT=0\n"
  "uint8 A200_LEFT_DRIVER_CURRENT=1\n"
  "uint8 A200_RIGHT_DRIVER_CURRENT=2\n"
  "uint8 A200_CURRENTS_SIZE=3\n"
  "\n"
  "# CC01\n"
  "uint8 CC01_BATTERY_PACK_CURRENT=0\n"
  "uint8 CC01_USER_BATTERY_CURRENT=1\n"
  "uint8 CC01_AUX_HES_CURRENT=2\n"
  "uint8 CC01_SYSTEM_12V_CURRENT=3\n"
  "uint8 CC01_24V_AUX_CURRENT=4\n"
  "uint8 CC01_12V_AUX_CURRENT=5\n"
  "uint8 CC01_BREAKOUT_USER_24V_CURRENT=6\n"
  "uint8 CC01_BREAKOUT_USER_12VA_CURRENT=7\n"
  "uint8 CC01_BREAKOUT_USER_12VB_CURRENT=8\n"
  "uint8 CC01_BREAKOUT_USER_LYNX1_CURRENT=9\n"
  "uint8 CC01_BREAKOUT_USER_LYNX2_CURRENT=10\n"
  "uint8 CC01_BREAKOUT_USER_LYNX3_CURRENT=11\n"
  "uint8 CC01_BREAKOUT_USER_LYNX4_CURRENT=12\n"
  "\n"
  "float32[] measured_currents";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
clearpath_platform_msgs__msg__Power__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {clearpath_platform_msgs__msg__Power__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2953, 2953},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
clearpath_platform_msgs__msg__Power__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *clearpath_platform_msgs__msg__Power__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
