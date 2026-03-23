// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from clearpath_platform_msgs:msg/PinoutState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "clearpath_platform_msgs/msg/detail/pinout_state__functions.h"
#include "clearpath_platform_msgs/msg/detail/pinout_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace clearpath_platform_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PinoutState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) clearpath_platform_msgs::msg::PinoutState(_init);
}

void PinoutState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<clearpath_platform_msgs::msg::PinoutState *>(message_memory);
  typed_message->~PinoutState();
}

size_t size_function__PinoutState__rails(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__PinoutState__rails(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__PinoutState__rails(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__PinoutState__rails(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PinoutState__inputs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__PinoutState__inputs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__PinoutState__inputs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__PinoutState__inputs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PinoutState__outputs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__PinoutState__outputs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__PinoutState__outputs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__PinoutState__outputs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PinoutState__output_periods(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PinoutState__output_periods(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__PinoutState__output_periods(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__PinoutState__output_periods(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__PinoutState__output_periods(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__PinoutState__output_periods(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__PinoutState__output_periods(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__PinoutState__output_periods(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PinoutState_message_member_array[5] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clearpath_platform_msgs::msg::PinoutState, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rails",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clearpath_platform_msgs::msg::PinoutState, rails),  // bytes offset in struct
    nullptr,  // default value
    size_function__PinoutState__rails,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__PinoutState__rails,  // fetch(index, &value) function pointer
    assign_function__PinoutState__rails,  // assign(index, value) function pointer
    resize_function__PinoutState__rails  // resize(index) function pointer
  },
  {
    "inputs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clearpath_platform_msgs::msg::PinoutState, inputs),  // bytes offset in struct
    nullptr,  // default value
    size_function__PinoutState__inputs,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__PinoutState__inputs,  // fetch(index, &value) function pointer
    assign_function__PinoutState__inputs,  // assign(index, value) function pointer
    resize_function__PinoutState__inputs  // resize(index) function pointer
  },
  {
    "outputs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clearpath_platform_msgs::msg::PinoutState, outputs),  // bytes offset in struct
    nullptr,  // default value
    size_function__PinoutState__outputs,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__PinoutState__outputs,  // fetch(index, &value) function pointer
    assign_function__PinoutState__outputs,  // assign(index, value) function pointer
    resize_function__PinoutState__outputs  // resize(index) function pointer
  },
  {
    "output_periods",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(clearpath_platform_msgs::msg::PinoutState, output_periods),  // bytes offset in struct
    nullptr,  // default value
    size_function__PinoutState__output_periods,  // size() function pointer
    get_const_function__PinoutState__output_periods,  // get_const(index) function pointer
    get_function__PinoutState__output_periods,  // get(index) function pointer
    fetch_function__PinoutState__output_periods,  // fetch(index, &value) function pointer
    assign_function__PinoutState__output_periods,  // assign(index, value) function pointer
    resize_function__PinoutState__output_periods  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PinoutState_message_members = {
  "clearpath_platform_msgs::msg",  // message namespace
  "PinoutState",  // message name
  5,  // number of fields
  sizeof(clearpath_platform_msgs::msg::PinoutState),
  false,  // has_any_key_member_
  PinoutState_message_member_array,  // message members
  PinoutState_init_function,  // function to initialize message memory (memory has to be allocated)
  PinoutState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PinoutState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PinoutState_message_members,
  get_message_typesupport_handle_function,
  &clearpath_platform_msgs__msg__PinoutState__get_type_hash,
  &clearpath_platform_msgs__msg__PinoutState__get_type_description,
  &clearpath_platform_msgs__msg__PinoutState__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace clearpath_platform_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<clearpath_platform_msgs::msg::PinoutState>()
{
  return &::clearpath_platform_msgs::msg::rosidl_typesupport_introspection_cpp::PinoutState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, clearpath_platform_msgs, msg, PinoutState)() {
  return &::clearpath_platform_msgs::msg::rosidl_typesupport_introspection_cpp::PinoutState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
