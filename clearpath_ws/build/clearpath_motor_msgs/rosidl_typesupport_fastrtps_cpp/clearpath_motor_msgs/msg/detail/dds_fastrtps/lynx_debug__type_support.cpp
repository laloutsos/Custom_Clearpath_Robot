// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from clearpath_motor_msgs:msg/LynxDebug.idl
// generated code does not contain a copyright notice
#include "clearpath_motor_msgs/msg/detail/lynx_debug__rosidl_typesupport_fastrtps_cpp.hpp"
#include "clearpath_motor_msgs/msg/detail/lynx_debug__functions.h"
#include "clearpath_motor_msgs/msg/detail/lynx_debug__struct.hpp"

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

namespace clearpath_motor_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_clearpath_motor_msgs
cdr_serialize(
  const clearpath_motor_msgs::msg::LynxDebug & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: can_id
  cdr << ros_message.can_id;

  // Member: joint_name
  cdr << ros_message.joint_name;

  // Member: fault_frequency
  cdr << ros_message.fault_frequency;

  // Member: accumulator_flags
  cdr << ros_message.accumulator_flags;

  // Member: accumulators
  {
    cdr << ros_message.accumulators;
  }

  // Member: currents
  {
    cdr << ros_message.currents;
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_clearpath_motor_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  clearpath_motor_msgs::msg::LynxDebug & ros_message)
{
  // Member: can_id
  cdr >> ros_message.can_id;

  // Member: joint_name
  cdr >> ros_message.joint_name;

  // Member: fault_frequency
  cdr >> ros_message.fault_frequency;

  // Member: accumulator_flags
  cdr >> ros_message.accumulator_flags;

  // Member: accumulators
  {
    cdr >> ros_message.accumulators;
  }

  // Member: currents
  {
    cdr >> ros_message.currents;
  }

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_clearpath_motor_msgs
get_serialized_size(
  const clearpath_motor_msgs::msg::LynxDebug & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: can_id
  {
    size_t item_size = sizeof(ros_message.can_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: joint_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.joint_name.size() + 1);

  // Member: fault_frequency
  {
    size_t item_size = sizeof(ros_message.fault_frequency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: accumulator_flags
  {
    size_t item_size = sizeof(ros_message.accumulator_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: accumulators
  {
    size_t array_size = ros_message.accumulators.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.accumulators[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: currents
  {
    size_t array_size = ros_message.currents.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.currents[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_clearpath_motor_msgs
max_serialized_size_LynxDebug(
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

  // Member: can_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: joint_name
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
  // Member: fault_frequency
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: accumulator_flags
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: accumulators
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: currents
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = clearpath_motor_msgs::msg::LynxDebug;
    is_plain =
      (
      offsetof(DataType, currents) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_clearpath_motor_msgs
cdr_serialize_key(
  const clearpath_motor_msgs::msg::LynxDebug & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: can_id
  cdr << ros_message.can_id;

  // Member: joint_name
  cdr << ros_message.joint_name;

  // Member: fault_frequency
  cdr << ros_message.fault_frequency;

  // Member: accumulator_flags
  cdr << ros_message.accumulator_flags;

  // Member: accumulators
  {
    cdr << ros_message.accumulators;
  }

  // Member: currents
  {
    cdr << ros_message.currents;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_clearpath_motor_msgs
get_serialized_size_key(
  const clearpath_motor_msgs::msg::LynxDebug & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: can_id
  {
    size_t item_size = sizeof(ros_message.can_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: joint_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.joint_name.size() + 1);

  // Member: fault_frequency
  {
    size_t item_size = sizeof(ros_message.fault_frequency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: accumulator_flags
  {
    size_t item_size = sizeof(ros_message.accumulator_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: accumulators
  {
    size_t array_size = ros_message.accumulators.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.accumulators[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: currents
  {
    size_t array_size = ros_message.currents.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.currents[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_clearpath_motor_msgs
max_serialized_size_key_LynxDebug(
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

  // Member: can_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: joint_name
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

  // Member: fault_frequency
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: accumulator_flags
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: accumulators
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: currents
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = clearpath_motor_msgs::msg::LynxDebug;
    is_plain =
      (
      offsetof(DataType, currents) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _LynxDebug__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const clearpath_motor_msgs::msg::LynxDebug *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LynxDebug__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<clearpath_motor_msgs::msg::LynxDebug *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LynxDebug__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const clearpath_motor_msgs::msg::LynxDebug *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LynxDebug__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LynxDebug(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LynxDebug__callbacks = {
  "clearpath_motor_msgs::msg",
  "LynxDebug",
  _LynxDebug__cdr_serialize,
  _LynxDebug__cdr_deserialize,
  _LynxDebug__get_serialized_size,
  _LynxDebug__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _LynxDebug__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LynxDebug__callbacks,
  get_message_typesupport_handle_function,
  &clearpath_motor_msgs__msg__LynxDebug__get_type_hash,
  &clearpath_motor_msgs__msg__LynxDebug__get_type_description,
  &clearpath_motor_msgs__msg__LynxDebug__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace clearpath_motor_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_clearpath_motor_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<clearpath_motor_msgs::msg::LynxDebug>()
{
  return &clearpath_motor_msgs::msg::typesupport_fastrtps_cpp::_LynxDebug__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, clearpath_motor_msgs, msg, LynxDebug)() {
  return &clearpath_motor_msgs::msg::typesupport_fastrtps_cpp::_LynxDebug__handle;
}

#ifdef __cplusplus
}
#endif
