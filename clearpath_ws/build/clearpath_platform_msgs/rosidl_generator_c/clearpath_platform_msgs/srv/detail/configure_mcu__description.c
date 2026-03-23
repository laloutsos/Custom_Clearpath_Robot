// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from clearpath_platform_msgs:srv/ConfigureMcu.idl
// generated code does not contain a copyright notice

#include "clearpath_platform_msgs/srv/detail/configure_mcu__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
const rosidl_type_hash_t *
clearpath_platform_msgs__srv__ConfigureMcu__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc7, 0x58, 0x98, 0x0c, 0x9c, 0x23, 0x9a, 0xa5,
      0x1e, 0xb4, 0x7b, 0x57, 0x80, 0xca, 0xd3, 0x8b,
      0xfd, 0x9f, 0xef, 0xcc, 0xd7, 0xc8, 0x47, 0xc9,
      0x0e, 0xe1, 0xa4, 0xe9, 0xe2, 0x82, 0xbb, 0x06,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
const rosidl_type_hash_t *
clearpath_platform_msgs__srv__ConfigureMcu_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd0, 0x46, 0x2a, 0xa5, 0x73, 0xe9, 0xfa, 0xe9,
      0xc6, 0xa4, 0xb4, 0xff, 0x54, 0xd5, 0xd1, 0x29,
      0x2d, 0x98, 0x3c, 0x93, 0xbb, 0x5d, 0xac, 0xd6,
      0xc8, 0x65, 0x6a, 0xfc, 0x16, 0x11, 0x8d, 0x51,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
const rosidl_type_hash_t *
clearpath_platform_msgs__srv__ConfigureMcu_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x07, 0x4a, 0x5f, 0x92, 0xec, 0x9e, 0x3a, 0xfc,
      0x68, 0x6d, 0xab, 0x16, 0x98, 0x7d, 0xca, 0xdb,
      0xfa, 0xf2, 0x7e, 0x56, 0x63, 0xe8, 0x71, 0xec,
      0x4d, 0xd0, 0x90, 0xf3, 0x9c, 0x07, 0x96, 0x8b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_clearpath_platform_msgs
const rosidl_type_hash_t *
clearpath_platform_msgs__srv__ConfigureMcu_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x93, 0x75, 0xab, 0xdb, 0xaa, 0xf1, 0x00, 0x2a,
      0x28, 0x4f, 0xa2, 0x9d, 0xfa, 0xda, 0x70, 0x44,
      0x3d, 0x6c, 0x0d, 0x9d, 0xe1, 0xce, 0x7e, 0x9f,
      0x8f, 0xaf, 0x68, 0xbf, 0x37, 0x88, 0xc8, 0x53,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char clearpath_platform_msgs__srv__ConfigureMcu__TYPE_NAME[] = "clearpath_platform_msgs/srv/ConfigureMcu";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char clearpath_platform_msgs__srv__ConfigureMcu_Event__TYPE_NAME[] = "clearpath_platform_msgs/srv/ConfigureMcu_Event";
static char clearpath_platform_msgs__srv__ConfigureMcu_Request__TYPE_NAME[] = "clearpath_platform_msgs/srv/ConfigureMcu_Request";
static char clearpath_platform_msgs__srv__ConfigureMcu_Response__TYPE_NAME[] = "clearpath_platform_msgs/srv/ConfigureMcu_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char clearpath_platform_msgs__srv__ConfigureMcu__FIELD_NAME__request_message[] = "request_message";
static char clearpath_platform_msgs__srv__ConfigureMcu__FIELD_NAME__response_message[] = "response_message";
static char clearpath_platform_msgs__srv__ConfigureMcu__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field clearpath_platform_msgs__srv__ConfigureMcu__FIELDS[] = {
  {
    {clearpath_platform_msgs__srv__ConfigureMcu__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {clearpath_platform_msgs__srv__ConfigureMcu_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_platform_msgs__srv__ConfigureMcu__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {clearpath_platform_msgs__srv__ConfigureMcu_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_platform_msgs__srv__ConfigureMcu__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {clearpath_platform_msgs__srv__ConfigureMcu_Event__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription clearpath_platform_msgs__srv__ConfigureMcu__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {clearpath_platform_msgs__srv__ConfigureMcu_Event__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {clearpath_platform_msgs__srv__ConfigureMcu_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {clearpath_platform_msgs__srv__ConfigureMcu_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
clearpath_platform_msgs__srv__ConfigureMcu__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {clearpath_platform_msgs__srv__ConfigureMcu__TYPE_NAME, 40, 40},
      {clearpath_platform_msgs__srv__ConfigureMcu__FIELDS, 3, 3},
    },
    {clearpath_platform_msgs__srv__ConfigureMcu__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = clearpath_platform_msgs__srv__ConfigureMcu_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = clearpath_platform_msgs__srv__ConfigureMcu_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = clearpath_platform_msgs__srv__ConfigureMcu_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char clearpath_platform_msgs__srv__ConfigureMcu_Request__FIELD_NAME__domain_id[] = "domain_id";
static char clearpath_platform_msgs__srv__ConfigureMcu_Request__FIELD_NAME__robot_namespace[] = "robot_namespace";

static rosidl_runtime_c__type_description__Field clearpath_platform_msgs__srv__ConfigureMcu_Request__FIELDS[] = {
  {
    {clearpath_platform_msgs__srv__ConfigureMcu_Request__FIELD_NAME__domain_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_platform_msgs__srv__ConfigureMcu_Request__FIELD_NAME__robot_namespace, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
clearpath_platform_msgs__srv__ConfigureMcu_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {clearpath_platform_msgs__srv__ConfigureMcu_Request__TYPE_NAME, 48, 48},
      {clearpath_platform_msgs__srv__ConfigureMcu_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char clearpath_platform_msgs__srv__ConfigureMcu_Response__FIELD_NAME__success[] = "success";
static char clearpath_platform_msgs__srv__ConfigureMcu_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field clearpath_platform_msgs__srv__ConfigureMcu_Response__FIELDS[] = {
  {
    {clearpath_platform_msgs__srv__ConfigureMcu_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_platform_msgs__srv__ConfigureMcu_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
clearpath_platform_msgs__srv__ConfigureMcu_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {clearpath_platform_msgs__srv__ConfigureMcu_Response__TYPE_NAME, 49, 49},
      {clearpath_platform_msgs__srv__ConfigureMcu_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char clearpath_platform_msgs__srv__ConfigureMcu_Event__FIELD_NAME__info[] = "info";
static char clearpath_platform_msgs__srv__ConfigureMcu_Event__FIELD_NAME__request[] = "request";
static char clearpath_platform_msgs__srv__ConfigureMcu_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field clearpath_platform_msgs__srv__ConfigureMcu_Event__FIELDS[] = {
  {
    {clearpath_platform_msgs__srv__ConfigureMcu_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_platform_msgs__srv__ConfigureMcu_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {clearpath_platform_msgs__srv__ConfigureMcu_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {clearpath_platform_msgs__srv__ConfigureMcu_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {clearpath_platform_msgs__srv__ConfigureMcu_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription clearpath_platform_msgs__srv__ConfigureMcu_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {clearpath_platform_msgs__srv__ConfigureMcu_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {clearpath_platform_msgs__srv__ConfigureMcu_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
clearpath_platform_msgs__srv__ConfigureMcu_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {clearpath_platform_msgs__srv__ConfigureMcu_Event__TYPE_NAME, 46, 46},
      {clearpath_platform_msgs__srv__ConfigureMcu_Event__FIELDS, 3, 3},
    },
    {clearpath_platform_msgs__srv__ConfigureMcu_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = clearpath_platform_msgs__srv__ConfigureMcu_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = clearpath_platform_msgs__srv__ConfigureMcu_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 domain_id # ROS_DOMAIN_ID\n"
  "string robot_namespace # Robot namespace\n"
  "---\n"
  "bool success   # Indicate successful update\n"
  "string message # Error/Success message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
clearpath_platform_msgs__srv__ConfigureMcu__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {clearpath_platform_msgs__srv__ConfigureMcu__TYPE_NAME, 40, 40},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 159, 159},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
clearpath_platform_msgs__srv__ConfigureMcu_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {clearpath_platform_msgs__srv__ConfigureMcu_Request__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
clearpath_platform_msgs__srv__ConfigureMcu_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {clearpath_platform_msgs__srv__ConfigureMcu_Response__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
clearpath_platform_msgs__srv__ConfigureMcu_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {clearpath_platform_msgs__srv__ConfigureMcu_Event__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
clearpath_platform_msgs__srv__ConfigureMcu__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *clearpath_platform_msgs__srv__ConfigureMcu__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *clearpath_platform_msgs__srv__ConfigureMcu_Event__get_individual_type_description_source(NULL);
    sources[3] = *clearpath_platform_msgs__srv__ConfigureMcu_Request__get_individual_type_description_source(NULL);
    sources[4] = *clearpath_platform_msgs__srv__ConfigureMcu_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
clearpath_platform_msgs__srv__ConfigureMcu_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *clearpath_platform_msgs__srv__ConfigureMcu_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
clearpath_platform_msgs__srv__ConfigureMcu_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *clearpath_platform_msgs__srv__ConfigureMcu_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
clearpath_platform_msgs__srv__ConfigureMcu_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *clearpath_platform_msgs__srv__ConfigureMcu_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *clearpath_platform_msgs__srv__ConfigureMcu_Request__get_individual_type_description_source(NULL);
    sources[3] = *clearpath_platform_msgs__srv__ConfigureMcu_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
