// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from clearpath_platform_msgs:msg/DisplayStatus.idl
// generated code does not contain a copyright notice
#include "clearpath_platform_msgs/msg/detail/display_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "clearpath_platform_msgs/msg/detail/display_status__functions.h"
#include "clearpath_platform_msgs/msg/detail/display_status__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace clearpath_platform_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_clearpath_platform_msgs
cdr_serialize(
  const clearpath_platform_msgs::msg::DisplayStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: string1
  cdr << ros_message.string1;

  // Member: string2
  cdr << ros_message.string2;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_clearpath_platform_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  clearpath_platform_msgs::msg::DisplayStatus & ros_message)
{
  // Member: string1
  cdr >> ros_message.string1;

  // Member: string2
  cdr >> ros_message.string2;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_clearpath_platform_msgs
get_serialized_size(
  const clearpath_platform_msgs::msg::DisplayStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: string1
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.string1.size() + 1);

  // Member: string2
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.string2.size() + 1);

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_clearpath_platform_msgs
max_serialized_size_DisplayStatus(
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

  // Member: string1
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
  // Member: string2
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
    using DataType = clearpath_platform_msgs::msg::DisplayStatus;
    is_plain =
      (
      offsetof(DataType, string2) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_clearpath_platform_msgs
cdr_serialize_key(
  const clearpath_platform_msgs::msg::DisplayStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: string1
  cdr << ros_message.string1;

  // Member: string2
  cdr << ros_message.string2;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_clearpath_platform_msgs
get_serialized_size_key(
  const clearpath_platform_msgs::msg::DisplayStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: string1
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.string1.size() + 1);

  // Member: string2
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.string2.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_clearpath_platform_msgs
max_serialized_size_key_DisplayStatus(
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

  // Member: string1
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

  // Member: string2
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
    using DataType = clearpath_platform_msgs::msg::DisplayStatus;
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
  auto typed_message =
    static_cast<const clearpath_platform_msgs::msg::DisplayStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DisplayStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<clearpath_platform_msgs::msg::DisplayStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DisplayStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const clearpath_platform_msgs::msg::DisplayStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DisplayStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_DisplayStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _DisplayStatus__callbacks = {
  "clearpath_platform_msgs::msg",
  "DisplayStatus",
  _DisplayStatus__cdr_serialize,
  _DisplayStatus__cdr_deserialize,
  _DisplayStatus__get_serialized_size,
  _DisplayStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _DisplayStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DisplayStatus__callbacks,
  get_message_typesupport_handle_function,
  &clearpath_platform_msgs__msg__DisplayStatus__get_type_hash,
  &clearpath_platform_msgs__msg__DisplayStatus__get_type_description,
  &clearpath_platform_msgs__msg__DisplayStatus__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace clearpath_platform_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_clearpath_platform_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<clearpath_platform_msgs::msg::DisplayStatus>()
{
  return &clearpath_platform_msgs::msg::typesupport_fastrtps_cpp::_DisplayStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, clearpath_platform_msgs, msg, DisplayStatus)() {
  return &clearpath_platform_msgs::msg::typesupport_fastrtps_cpp::_DisplayStatus__handle;
}

#ifdef __cplusplus
}
#endif
