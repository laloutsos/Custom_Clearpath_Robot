// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from clearpath_platform_msgs:msg/DisplayStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_platform_msgs/msg/display_status.h"


#ifndef CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__DISPLAY_STATUS__STRUCT_H_
#define CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__DISPLAY_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'string1'
// Member 'string2'
#include "rosidl_runtime_c/string.h"

// constants for array fields with an upper bound
// string1
enum
{
  clearpath_platform_msgs__msg__DisplayStatus__string1__MAX_STRING_SIZE = 49
};
// string2
enum
{
  clearpath_platform_msgs__msg__DisplayStatus__string2__MAX_STRING_SIZE = 49
};

/// Struct defined in msg/DisplayStatus in the package clearpath_platform_msgs.
/**
  * This message is used to set the two lines of text on the bottom of the e-ink display
 */
typedef struct clearpath_platform_msgs__msg__DisplayStatus
{
  rosidl_runtime_c__String string1;
  rosidl_runtime_c__String string2;
} clearpath_platform_msgs__msg__DisplayStatus;

// Struct for a sequence of clearpath_platform_msgs__msg__DisplayStatus.
typedef struct clearpath_platform_msgs__msg__DisplayStatus__Sequence
{
  clearpath_platform_msgs__msg__DisplayStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clearpath_platform_msgs__msg__DisplayStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CLEARPATH_PLATFORM_MSGS__MSG__DETAIL__DISPLAY_STATUS__STRUCT_H_
