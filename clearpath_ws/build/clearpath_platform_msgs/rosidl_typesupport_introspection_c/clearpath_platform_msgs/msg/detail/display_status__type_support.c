// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from clearpath_platform_msgs:msg/DisplayStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "clearpath_platform_msgs/msg/detail/display_status__rosidl_typesupport_introspection_c.h"
#include "clearpath_platform_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "clearpath_platform_msgs/msg/detail/display_status__functions.h"
#include "clearpath_platform_msgs/msg/detail/display_status__struct.h"


// Include directives for member types
// Member `string1`
// Member `string2`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void clearpath_platform_msgs__msg__DisplayStatus__rosidl_typesupport_introspection_c__DisplayStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  clearpath_platform_msgs__msg__DisplayStatus__init(message_memory);
}

void clearpath_platform_msgs__msg__DisplayStatus__rosidl_typesupport_introspection_c__DisplayStatus_fini_function(void * message_memory)
{
  clearpath_platform_msgs__msg__DisplayStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember clearpath_platform_msgs__msg__DisplayStatus__rosidl_typesupport_introspection_c__DisplayStatus_message_member_array[2] = {
  {
    "string1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    49,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clearpath_platform_msgs__msg__DisplayStatus, string1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "string2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    49,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clearpath_platform_msgs__msg__DisplayStatus, string2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers clearpath_platform_msgs__msg__DisplayStatus__rosidl_typesupport_introspection_c__DisplayStatus_message_members = {
  "clearpath_platform_msgs__msg",  // message namespace
  "DisplayStatus",  // message name
  2,  // number of fields
  sizeof(clearpath_platform_msgs__msg__DisplayStatus),
  false,  // has_any_key_member_
  clearpath_platform_msgs__msg__DisplayStatus__rosidl_typesupport_introspection_c__DisplayStatus_message_member_array,  // message members
  clearpath_platform_msgs__msg__DisplayStatus__rosidl_typesupport_introspection_c__DisplayStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  clearpath_platform_msgs__msg__DisplayStatus__rosidl_typesupport_introspection_c__DisplayStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t clearpath_platform_msgs__msg__DisplayStatus__rosidl_typesupport_introspection_c__DisplayStatus_message_type_support_handle = {
  0,
  &clearpath_platform_msgs__msg__DisplayStatus__rosidl_typesupport_introspection_c__DisplayStatus_message_members,
  get_message_typesupport_handle_function,
  &clearpath_platform_msgs__msg__DisplayStatus__get_type_hash,
  &clearpath_platform_msgs__msg__DisplayStatus__get_type_description,
  &clearpath_platform_msgs__msg__DisplayStatus__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_clearpath_platform_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, clearpath_platform_msgs, msg, DisplayStatus)() {
  if (!clearpath_platform_msgs__msg__DisplayStatus__rosidl_typesupport_introspection_c__DisplayStatus_message_type_support_handle.typesupport_identifier) {
    clearpath_platform_msgs__msg__DisplayStatus__rosidl_typesupport_introspection_c__DisplayStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &clearpath_platform_msgs__msg__DisplayStatus__rosidl_typesupport_introspection_c__DisplayStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
