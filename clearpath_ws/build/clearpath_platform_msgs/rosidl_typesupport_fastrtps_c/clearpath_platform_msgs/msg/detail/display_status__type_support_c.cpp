// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from clearpath_platform_msgs:msg/DisplayStatus.idl
// generated code does not contain a copyright notice
#include "clearpath_platform_msgs/msg/detail/display_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "clearpath_platform_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "clearpath_platform_msgs/msg/detail/display_status__struct.h"
#include "clearpath_platform_msgs/msg/detail/display_status__functions.h"
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

#include "rosidl_runtime_c/string.h"  // string1, string2
#include "rosidl_runtime_c/string_functions.h"  // string1, string2

// forward declare type support functions


using _DisplayStatus__ros_msg_type = clearpath_platform_msgs__msg__DisplayStatus;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_clearpath_platform_msgs
bool cdr_serialize_clearpath_platform_msgs__msg__DisplayStatus(
  const clearpath_platform_msgs__msg__DisplayStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: string1
  {
    const rosidl_runtime_c__String * str = &ros_message->string1;
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

  // Field name: string2
  {
    const rosidl_runtime_c__String * str = &ros_message->string2;
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

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_clearpath_platform_msgs
bool cdr_deserialize_clearpath_platform_msgs__msg__DisplayStatus(
  eprosima::fastcdr::Cdr & cdr,
  clearpath_platform_msgs__msg__DisplayStatus * ros_message)
{
  // Field name: string1
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->string1.data) {
      rosidl_runtime_c__String__init(&ros_message->string1);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->string1,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'string1'\n");
      return false;
    }
  }

  // Field name: string2
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->string2.data) {
      rosidl_runtime_c__String__init(&ros_message->string2);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->string2,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'string2'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_clearpath_platform_msgs
size_t get_serialized_size_clearpath_platform_msgs__msg__DisplayStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DisplayStatus__ros_msg_type * ros_message = static_cast<const _DisplayStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: string1
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->string1.size + 1);

  // Field name: string2
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->string2.size + 1);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_clearpath_platform_msgs
size_t max_serialized_size_clearpath_platform_msgs__msg__DisplayStatus(
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

  // Field name: string1
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        49 +
        1;
    }
  }

  // Field name: string2
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        49 +
        1;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = clearpath_platform_msgs__msg__DisplayStatus;
    is_plain =
      (
      offsetof(DataType, string2) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_clearpath_platform_msgs
bool cdr_serialize_key_clearpath_platform_msgs__msg__DisplayStatus(
  const clearpath_platform_msgs__msg__DisplayStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: string1
  {
    const rosidl_runtime_c__String * str = &ros_message->string1;
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

  // Field name: string2
  {
    const rosidl_runtime_c__String * str = &ros_message->string2;
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

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_clearpath_platform_msgs
size_t get_serialized_size_key_clearpath_platform_msgs__msg__DisplayStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DisplayStatus__ros_msg_type * ros_message = static_cast<const _DisplayStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: string1
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->string1.size + 1);

  // Field name: string2
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->string2.size + 1);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_clearpath_platform_msgs
size_t max_serialized_size_key_clearpath_platform_msgs__msg__DisplayStatus(
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
  // Field name: string1
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        49 +
        1;
    }
  }

  // Field name: string2
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        49 +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = clearpath_platform_msgs__msg__DisplayStatus;
    is_plain =
      (
      offsetof(DataType, string2) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _DisplayStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const clearpath_platform_msgs__msg__DisplayStatus * ros_message = static_cast<const clearpath_platform_msgs__msg__DisplayStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_clearpath_platform_msgs__msg__DisplayStatus(ros_message, cdr);
}

static bool _DisplayStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  clearpath_platform_msgs__msg__DisplayStatus * ros_message = static_cast<clearpath_platform_msgs__msg__DisplayStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_clearpath_platform_msgs__msg__DisplayStatus(cdr, ros_message);
}

static uint32_t _DisplayStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_clearpath_platform_msgs__msg__DisplayStatus(
      untyped_ros_message, 0));
}

static size_t _DisplayStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_clearpath_platform_msgs__msg__DisplayStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DisplayStatus = {
  "clearpath_platform_msgs::msg",
  "DisplayStatus",
  _DisplayStatus__cdr_serialize,
  _DisplayStatus__cdr_deserialize,
  _DisplayStatus__get_serialized_size,
  _DisplayStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _DisplayStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DisplayStatus,
  get_message_typesupport_handle_function,
  &clearpath_platform_msgs__msg__DisplayStatus__get_type_hash,
  &clearpath_platform_msgs__msg__DisplayStatus__get_type_description,
  &clearpath_platform_msgs__msg__DisplayStatus__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, clearpath_platform_msgs, msg, DisplayStatus)() {
  return &_DisplayStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
