// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from clearpath_platform_msgs:srv/SetPinout.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_platform_msgs/srv/set_pinout.h"


#ifndef CLEARPATH_PLATFORM_MSGS__SRV__DETAIL__SET_PINOUT__STRUCT_H_
#define CLEARPATH_PLATFORM_MSGS__SRV__DETAIL__SET_PINOUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetPinout in the package clearpath_platform_msgs.
typedef struct clearpath_platform_msgs__srv__SetPinout_Request
{
  /// On/Off initial state
  bool state;
  /// Toggle period in ms. Minimum 100ms. A period of 0 implies no toggling.
  uint32_t toggle_period;
} clearpath_platform_msgs__srv__SetPinout_Request;

// Struct for a sequence of clearpath_platform_msgs__srv__SetPinout_Request.
typedef struct clearpath_platform_msgs__srv__SetPinout_Request__Sequence
{
  clearpath_platform_msgs__srv__SetPinout_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clearpath_platform_msgs__srv__SetPinout_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetPinout in the package clearpath_platform_msgs.
typedef struct clearpath_platform_msgs__srv__SetPinout_Response
{
  /// indicate successful run of triggered service
  bool success;
  /// informational, e.g. for error messages
  rosidl_runtime_c__String message;
} clearpath_platform_msgs__srv__SetPinout_Response;

// Struct for a sequence of clearpath_platform_msgs__srv__SetPinout_Response.
typedef struct clearpath_platform_msgs__srv__SetPinout_Response__Sequence
{
  clearpath_platform_msgs__srv__SetPinout_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clearpath_platform_msgs__srv__SetPinout_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  clearpath_platform_msgs__srv__SetPinout_Event__request__MAX_SIZE = 1
};
// response
enum
{
  clearpath_platform_msgs__srv__SetPinout_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetPinout in the package clearpath_platform_msgs.
typedef struct clearpath_platform_msgs__srv__SetPinout_Event
{
  service_msgs__msg__ServiceEventInfo info;
  clearpath_platform_msgs__srv__SetPinout_Request__Sequence request;
  clearpath_platform_msgs__srv__SetPinout_Response__Sequence response;
} clearpath_platform_msgs__srv__SetPinout_Event;

// Struct for a sequence of clearpath_platform_msgs__srv__SetPinout_Event.
typedef struct clearpath_platform_msgs__srv__SetPinout_Event__Sequence
{
  clearpath_platform_msgs__srv__SetPinout_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clearpath_platform_msgs__srv__SetPinout_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CLEARPATH_PLATFORM_MSGS__SRV__DETAIL__SET_PINOUT__STRUCT_H_
