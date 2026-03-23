// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from clearpath_motor_msgs:action/LynxCalibrate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_motor_msgs/action/lynx_calibrate.h"


#ifndef CLEARPATH_MOTOR_MSGS__ACTION__DETAIL__LYNX_CALIBRATE__STRUCT_H_
#define CLEARPATH_MOTOR_MSGS__ACTION__DETAIL__LYNX_CALIBRATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/LynxCalibrate in the package clearpath_motor_msgs.
typedef struct clearpath_motor_msgs__action__LynxCalibrate_Goal
{
  uint8_t structure_needs_at_least_one_member;
} clearpath_motor_msgs__action__LynxCalibrate_Goal;

// Struct for a sequence of clearpath_motor_msgs__action__LynxCalibrate_Goal.
typedef struct clearpath_motor_msgs__action__LynxCalibrate_Goal__Sequence
{
  clearpath_motor_msgs__action__LynxCalibrate_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clearpath_motor_msgs__action__LynxCalibrate_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'offset'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/LynxCalibrate in the package clearpath_motor_msgs.
typedef struct clearpath_motor_msgs__action__LynxCalibrate_Result
{
  rosidl_runtime_c__float__Sequence offset;
} clearpath_motor_msgs__action__LynxCalibrate_Result;

// Struct for a sequence of clearpath_motor_msgs__action__LynxCalibrate_Result.
typedef struct clearpath_motor_msgs__action__LynxCalibrate_Result__Sequence
{
  clearpath_motor_msgs__action__LynxCalibrate_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clearpath_motor_msgs__action__LynxCalibrate_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'iteration'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/LynxCalibrate in the package clearpath_motor_msgs.
typedef struct clearpath_motor_msgs__action__LynxCalibrate_Feedback
{
  rosidl_runtime_c__uint16__Sequence iteration;
} clearpath_motor_msgs__action__LynxCalibrate_Feedback;

// Struct for a sequence of clearpath_motor_msgs__action__LynxCalibrate_Feedback.
typedef struct clearpath_motor_msgs__action__LynxCalibrate_Feedback__Sequence
{
  clearpath_motor_msgs__action__LynxCalibrate_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clearpath_motor_msgs__action__LynxCalibrate_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "clearpath_motor_msgs/action/detail/lynx_calibrate__struct.h"

/// Struct defined in action/LynxCalibrate in the package clearpath_motor_msgs.
typedef struct clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  clearpath_motor_msgs__action__LynxCalibrate_Goal goal;
} clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request;

// Struct for a sequence of clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request.
typedef struct clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__Sequence
{
  clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/LynxCalibrate in the package clearpath_motor_msgs.
typedef struct clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response;

// Struct for a sequence of clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response.
typedef struct clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__Sequence
{
  clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/LynxCalibrate in the package clearpath_motor_msgs.
typedef struct clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Request__Sequence request;
  clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Response__Sequence response;
} clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event;

// Struct for a sequence of clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event.
typedef struct clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__Sequence
{
  clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clearpath_motor_msgs__action__LynxCalibrate_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/LynxCalibrate in the package clearpath_motor_msgs.
typedef struct clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request;

// Struct for a sequence of clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request.
typedef struct clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__Sequence
{
  clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "clearpath_motor_msgs/action/detail/lynx_calibrate__struct.h"

/// Struct defined in action/LynxCalibrate in the package clearpath_motor_msgs.
typedef struct clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response
{
  int8_t status;
  clearpath_motor_msgs__action__LynxCalibrate_Result result;
} clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response;

// Struct for a sequence of clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response.
typedef struct clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__Sequence
{
  clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/LynxCalibrate in the package clearpath_motor_msgs.
typedef struct clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  clearpath_motor_msgs__action__LynxCalibrate_GetResult_Request__Sequence request;
  clearpath_motor_msgs__action__LynxCalibrate_GetResult_Response__Sequence response;
} clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event;

// Struct for a sequence of clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event.
typedef struct clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__Sequence
{
  clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clearpath_motor_msgs__action__LynxCalibrate_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "clearpath_motor_msgs/action/detail/lynx_calibrate__struct.h"

/// Struct defined in action/LynxCalibrate in the package clearpath_motor_msgs.
typedef struct clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  clearpath_motor_msgs__action__LynxCalibrate_Feedback feedback;
} clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage;

// Struct for a sequence of clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage.
typedef struct clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__Sequence
{
  clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} clearpath_motor_msgs__action__LynxCalibrate_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CLEARPATH_MOTOR_MSGS__ACTION__DETAIL__LYNX_CALIBRATE__STRUCT_H_
