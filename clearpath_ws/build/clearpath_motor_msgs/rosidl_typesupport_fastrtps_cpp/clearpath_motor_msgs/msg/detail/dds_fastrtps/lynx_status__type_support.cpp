// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from clearpath_motor_msgs:msg/LynxStatus.idl
// generated code does not contain a copyright notice
#include "clearpath_motor_msgs/msg/detail/lynx_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "clearpath_motor_msgs/msg/detail/lynx_status__functions.h"
#include "clearpath_motor_msgs/msg/detail/lynx_status__struct.hpp"

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
  const clearpath_motor_msgs::msg::LynxStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: can_id
  cdr << ros_message.can_id;

  // Member: joint_name
  cdr << ros_message.joint_name;

  // Member: firmware_version
  cdr << ros_message.firmware_version;

  // Member: motor_temperature
  cdr << ros_message.motor_temperature;

  // Member: mcu_temperature
  cdr << ros_message.mcu_temperature;

  // Member: pcb_temperature
  cdr << ros_message.pcb_temperature;

  // Member: stopped
  cdr << (ros_message.stopped ? true : false);

  // Member: status_flags
  cdr << ros_message.status_flags;

  // Member: warning_flags
  cdr << ros_message.warning_flags;

  // Member: error_flags
  cdr << ros_message.error_flags;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_clearpath_motor_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  clearpath_motor_msgs::msg::LynxStatus & ros_message)
{
  // Member: can_id
  cdr >> ros_message.can_id;

  // Member: joint_name
  cdr >> ros_message.joint_name;

  // Member: firmware_version
  cdr >> ros_message.firmware_version;

  // Member: motor_temperature
  cdr >> ros_message.motor_temperature;

  // Member: mcu_temperature
  cdr >> ros_message.mcu_temperature;

  // Member: pcb_temperature
  cdr >> ros_message.pcb_temperature;

  // Member: stopped
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.stopped = tmp ? true : false;
  }

  // Member: status_flags
  cdr >> ros_message.status_flags;

  // Member: warning_flags
  cdr >> ros_message.warning_flags;

  // Member: error_flags
  cdr >> ros_message.error_flags;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_clearpath_motor_msgs
get_serialized_size(
  const clearpath_motor_msgs::msg::LynxStatus & ros_message,
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

  // Member: firmware_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.firmware_version.size() + 1);

  // Member: motor_temperature
  {
    size_t item_size = sizeof(ros_message.motor_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: mcu_temperature
  {
    size_t item_size = sizeof(ros_message.mcu_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pcb_temperature
  {
    size_t item_size = sizeof(ros_message.pcb_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: stopped
  {
    size_t item_size = sizeof(ros_message.stopped);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_flags
  {
    size_t item_size = sizeof(ros_message.status_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: warning_flags
  {
    size_t item_size = sizeof(ros_message.warning_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: error_flags
  {
    size_t item_size = sizeof(ros_message.error_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_clearpath_motor_msgs
max_serialized_size_LynxStatus(
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
  // Member: firmware_version
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
  // Member: motor_temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: mcu_temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: pcb_temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: stopped
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: status_flags
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: warning_flags
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: error_flags
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
    using DataType = clearpath_motor_msgs::msg::LynxStatus;
    is_plain =
      (
      offsetof(DataType, error_flags) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_clearpath_motor_msgs
cdr_serialize_key(
  const clearpath_motor_msgs::msg::LynxStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: can_id
  cdr << ros_message.can_id;

  // Member: joint_name
  cdr << ros_message.joint_name;

  // Member: firmware_version
  cdr << ros_message.firmware_version;

  // Member: motor_temperature
  cdr << ros_message.motor_temperature;

  // Member: mcu_temperature
  cdr << ros_message.mcu_temperature;

  // Member: pcb_temperature
  cdr << ros_message.pcb_temperature;

  // Member: stopped
  cdr << (ros_message.stopped ? true : false);

  // Member: status_flags
  cdr << ros_message.status_flags;

  // Member: warning_flags
  cdr << ros_message.warning_flags;

  // Member: error_flags
  cdr << ros_message.error_flags;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_clearpath_motor_msgs
get_serialized_size_key(
  const clearpath_motor_msgs::msg::LynxStatus & ros_message,
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

  // Member: firmware_version
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.firmware_version.size() + 1);

  // Member: motor_temperature
  {
    size_t item_size = sizeof(ros_message.motor_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: mcu_temperature
  {
    size_t item_size = sizeof(ros_message.mcu_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pcb_temperature
  {
    size_t item_size = sizeof(ros_message.pcb_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: stopped
  {
    size_t item_size = sizeof(ros_message.stopped);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: status_flags
  {
    size_t item_size = sizeof(ros_message.status_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: warning_flags
  {
    size_t item_size = sizeof(ros_message.warning_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: error_flags
  {
    size_t item_size = sizeof(ros_message.error_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_clearpath_motor_msgs
max_serialized_size_key_LynxStatus(
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

  // Member: firmware_version
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

  // Member: motor_temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mcu_temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pcb_temperature
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: stopped
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: status_flags
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: warning_flags
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: error_flags
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
    using DataType = clearpath_motor_msgs::msg::LynxStatus;
    is_plain =
      (
      offsetof(DataType, error_flags) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _LynxStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const clearpath_motor_msgs::msg::LynxStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LynxStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<clearpath_motor_msgs::msg::LynxStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LynxStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const clearpath_motor_msgs::msg::LynxStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LynxStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LynxStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LynxStatus__callbacks = {
  "clearpath_motor_msgs::msg",
  "LynxStatus",
  _LynxStatus__cdr_serialize,
  _LynxStatus__cdr_deserialize,
  _LynxStatus__get_serialized_size,
  _LynxStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _LynxStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LynxStatus__callbacks,
  get_message_typesupport_handle_function,
  &clearpath_motor_msgs__msg__LynxStatus__get_type_hash,
  &clearpath_motor_msgs__msg__LynxStatus__get_type_description,
  &clearpath_motor_msgs__msg__LynxStatus__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace clearpath_motor_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_clearpath_motor_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<clearpath_motor_msgs::msg::LynxStatus>()
{
  return &clearpath_motor_msgs::msg::typesupport_fastrtps_cpp::_LynxStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, clearpath_motor_msgs, msg, LynxStatus)() {
  return &clearpath_motor_msgs::msg::typesupport_fastrtps_cpp::_LynxStatus__handle;
}

#ifdef __cplusplus
}
#endif
