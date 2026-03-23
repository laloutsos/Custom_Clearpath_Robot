// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from clearpath_motor_msgs:msg/LynxFeedback.idl
// generated code does not contain a copyright notice
#include "clearpath_motor_msgs/msg/detail/lynx_feedback__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "clearpath_motor_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "clearpath_motor_msgs/msg/detail/lynx_feedback__struct.h"
#include "clearpath_motor_msgs/msg/detail/lynx_feedback__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // joint_name
#include "rosidl_runtime_c/string_functions.h"  // joint_name

// forward declare type support functions


using _LynxFeedback__ros_msg_type = clearpath_motor_msgs__msg__LynxFeedback;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_clearpath_motor_msgs
bool cdr_serialize_clearpath_motor_msgs__msg__LynxFeedback(
  const clearpath_motor_msgs__msg__LynxFeedback * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: can_id
  {
    cdr << ros_message->can_id;
  }

  // Field name: joint_name
  {
    const rosidl_runtime_c__String * str = &ros_message->joint_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: current
  {
    cdr << ros_message->current;
  }

  // Field name: voltage
  {
    cdr << ros_message->voltage;
  }

  // Field name: velocity
  {
    cdr << ros_message->velocity;
  }

  // Field name: travel
  {
    cdr << ros_message->travel;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_clearpath_motor_msgs
bool cdr_deserialize_clearpath_motor_msgs__msg__LynxFeedback(
  eprosima::fastcdr::Cdr & cdr,
  clearpath_motor_msgs__msg__LynxFeedback * ros_message)
{
  // Field name: can_id
  {
    cdr >> ros_message->can_id;
  }

  // Field name: joint_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->joint_name.data) {
      rosidl_runtime_c__String__init(&ros_message->joint_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->joint_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'joint_name'\n");
      return false;
    }
  }

  // Field name: current
  {
    cdr >> ros_message->current;
  }

  // Field name: voltage
  {
    cdr >> ros_message->voltage;
  }

  // Field name: velocity
  {
    cdr >> ros_message->velocity;
  }

  // Field name: travel
  {
    cdr >> ros_message->travel;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_clearpath_motor_msgs
size_t get_serialized_size_clearpath_motor_msgs__msg__LynxFeedback(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LynxFeedback__ros_msg_type * ros_message = static_cast<const _LynxFeedback__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: can_id
  {
    size_t item_size = sizeof(ros_message->can_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: joint_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->joint_name.size + 1);

  // Field name: current
  {
    size_t item_size = sizeof(ros_message->current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: voltage
  {
    size_t item_size = sizeof(ros_message->voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: velocity
  {
    size_t item_size = sizeof(ros_message->velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: travel
  {
    size_t item_size = sizeof(ros_message->travel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_clearpath_motor_msgs
size_t max_serialized_size_clearpath_motor_msgs__msg__LynxFeedback(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: can_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: joint_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: travel
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = clearpath_motor_msgs__msg__LynxFeedback;
    is_plain =
      (
      offsetof(DataType, travel) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_clearpath_motor_msgs
bool cdr_serialize_key_clearpath_motor_msgs__msg__LynxFeedback(
  const clearpath_motor_msgs__msg__LynxFeedback * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: can_id
  {
    cdr << ros_message->can_id;
  }

  // Field name: joint_name
  {
    const rosidl_runtime_c__String * str = &ros_message->joint_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: current
  {
    cdr << ros_message->current;
  }

  // Field name: voltage
  {
    cdr << ros_message->voltage;
  }

  // Field name: velocity
  {
    cdr << ros_message->velocity;
  }

  // Field name: travel
  {
    cdr << ros_message->travel;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_clearpath_motor_msgs
size_t get_serialized_size_key_clearpath_motor_msgs__msg__LynxFeedback(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LynxFeedback__ros_msg_type * ros_message = static_cast<const _LynxFeedback__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: can_id
  {
    size_t item_size = sizeof(ros_message->can_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: joint_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->joint_name.size + 1);

  // Field name: current
  {
    size_t item_size = sizeof(ros_message->current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: voltage
  {
    size_t item_size = sizeof(ros_message->voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: velocity
  {
    size_t item_size = sizeof(ros_message->velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: travel
  {
    size_t item_size = sizeof(ros_message->travel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_clearpath_motor_msgs
size_t max_serialized_size_key_clearpath_motor_msgs__msg__LynxFeedback(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: can_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: joint_name
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: velocity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: travel
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = clearpath_motor_msgs__msg__LynxFeedback;
    is_plain =
      (
      offsetof(DataType, travel) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _LynxFeedback__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const clearpath_motor_msgs__msg__LynxFeedback * ros_message = static_cast<const clearpath_motor_msgs__msg__LynxFeedback *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_clearpath_motor_msgs__msg__LynxFeedback(ros_message, cdr);
}

static bool _LynxFeedback__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  clearpath_motor_msgs__msg__LynxFeedback * ros_message = static_cast<clearpath_motor_msgs__msg__LynxFeedback *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_clearpath_motor_msgs__msg__LynxFeedback(cdr, ros_message);
}

static uint32_t _LynxFeedback__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_clearpath_motor_msgs__msg__LynxFeedback(
      untyped_ros_message, 0));
}

static size_t _LynxFeedback__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_clearpath_motor_msgs__msg__LynxFeedback(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LynxFeedback = {
  "clearpath_motor_msgs::msg",
  "LynxFeedback",
  _LynxFeedback__cdr_serialize,
  _LynxFeedback__cdr_deserialize,
  _LynxFeedback__get_serialized_size,
  _LynxFeedback__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _LynxFeedback__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LynxFeedback,
  get_message_typesupport_handle_function,
  &clearpath_motor_msgs__msg__LynxFeedback__get_type_hash,
  &clearpath_motor_msgs__msg__LynxFeedback__get_type_description,
  &clearpath_motor_msgs__msg__LynxFeedback__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, clearpath_motor_msgs, msg, LynxFeedback)() {
  return &_LynxFeedback__type_support;
}

#if defined(__cplusplus)
}
#endif
