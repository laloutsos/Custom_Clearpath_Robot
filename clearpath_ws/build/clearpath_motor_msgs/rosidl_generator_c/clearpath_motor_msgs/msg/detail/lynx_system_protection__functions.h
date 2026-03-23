// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from clearpath_motor_msgs:msg/LynxSystemProtection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "clearpath_motor_msgs/msg/lynx_system_protection.h"


#ifndef CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_SYSTEM_PROTECTION__FUNCTIONS_H_
#define CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_SYSTEM_PROTECTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "clearpath_motor_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "clearpath_motor_msgs/msg/detail/lynx_system_protection__struct.h"

/// Initialize msg/LynxSystemProtection message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * clearpath_motor_msgs__msg__LynxSystemProtection
 * )) before or use
 * clearpath_motor_msgs__msg__LynxSystemProtection__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_motor_msgs
bool
clearpath_motor_msgs__msg__LynxSystemProtection__init(clearpath_motor_msgs__msg__LynxSystemProtection * msg);

/// Finalize msg/LynxSystemProtection message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_motor_msgs
void
clearpath_motor_msgs__msg__LynxSystemProtection__fini(clearpath_motor_msgs__msg__LynxSystemProtection * msg);

/// Create msg/LynxSystemProtection message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * clearpath_motor_msgs__msg__LynxSystemProtection__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_motor_msgs
clearpath_motor_msgs__msg__LynxSystemProtection *
clearpath_motor_msgs__msg__LynxSystemProtection__create(void);

/// Destroy msg/LynxSystemProtection message.
/**
 * It calls
 * clearpath_motor_msgs__msg__LynxSystemProtection__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_motor_msgs
void
clearpath_motor_msgs__msg__LynxSystemProtection__destroy(clearpath_motor_msgs__msg__LynxSystemProtection * msg);

/// Check for msg/LynxSystemProtection message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_motor_msgs
bool
clearpath_motor_msgs__msg__LynxSystemProtection__are_equal(const clearpath_motor_msgs__msg__LynxSystemProtection * lhs, const clearpath_motor_msgs__msg__LynxSystemProtection * rhs);

/// Copy a msg/LynxSystemProtection message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_motor_msgs
bool
clearpath_motor_msgs__msg__LynxSystemProtection__copy(
  const clearpath_motor_msgs__msg__LynxSystemProtection * input,
  clearpath_motor_msgs__msg__LynxSystemProtection * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_clearpath_motor_msgs
const rosidl_type_hash_t *
clearpath_motor_msgs__msg__LynxSystemProtection__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_clearpath_motor_msgs
const rosidl_runtime_c__type_description__TypeDescription *
clearpath_motor_msgs__msg__LynxSystemProtection__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_clearpath_motor_msgs
const rosidl_runtime_c__type_description__TypeSource *
clearpath_motor_msgs__msg__LynxSystemProtection__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_clearpath_motor_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
clearpath_motor_msgs__msg__LynxSystemProtection__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/LynxSystemProtection messages.
/**
 * It allocates the memory for the number of elements and calls
 * clearpath_motor_msgs__msg__LynxSystemProtection__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_motor_msgs
bool
clearpath_motor_msgs__msg__LynxSystemProtection__Sequence__init(clearpath_motor_msgs__msg__LynxSystemProtection__Sequence * array, size_t size);

/// Finalize array of msg/LynxSystemProtection messages.
/**
 * It calls
 * clearpath_motor_msgs__msg__LynxSystemProtection__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_motor_msgs
void
clearpath_motor_msgs__msg__LynxSystemProtection__Sequence__fini(clearpath_motor_msgs__msg__LynxSystemProtection__Sequence * array);

/// Create array of msg/LynxSystemProtection messages.
/**
 * It allocates the memory for the array and calls
 * clearpath_motor_msgs__msg__LynxSystemProtection__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_motor_msgs
clearpath_motor_msgs__msg__LynxSystemProtection__Sequence *
clearpath_motor_msgs__msg__LynxSystemProtection__Sequence__create(size_t size);

/// Destroy array of msg/LynxSystemProtection messages.
/**
 * It calls
 * clearpath_motor_msgs__msg__LynxSystemProtection__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_motor_msgs
void
clearpath_motor_msgs__msg__LynxSystemProtection__Sequence__destroy(clearpath_motor_msgs__msg__LynxSystemProtection__Sequence * array);

/// Check for msg/LynxSystemProtection message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_motor_msgs
bool
clearpath_motor_msgs__msg__LynxSystemProtection__Sequence__are_equal(const clearpath_motor_msgs__msg__LynxSystemProtection__Sequence * lhs, const clearpath_motor_msgs__msg__LynxSystemProtection__Sequence * rhs);

/// Copy an array of msg/LynxSystemProtection messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_clearpath_motor_msgs
bool
clearpath_motor_msgs__msg__LynxSystemProtection__Sequence__copy(
  const clearpath_motor_msgs__msg__LynxSystemProtection__Sequence * input,
  clearpath_motor_msgs__msg__LynxSystemProtection__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CLEARPATH_MOTOR_MSGS__MSG__DETAIL__LYNX_SYSTEM_PROTECTION__FUNCTIONS_H_
