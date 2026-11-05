// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from precision_positioning_interfaces:srv/MoveAbsolute.idl
// generated code does not contain a copyright notice

#ifndef PRECISION_POSITIONING_INTERFACES__SRV__DETAIL__MOVE_ABSOLUTE__FUNCTIONS_H_
#define PRECISION_POSITIONING_INTERFACES__SRV__DETAIL__MOVE_ABSOLUTE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "precision_positioning_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "precision_positioning_interfaces/srv/detail/move_absolute__struct.h"

/// Initialize srv/MoveAbsolute message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * precision_positioning_interfaces__srv__MoveAbsolute_Request
 * )) before or use
 * precision_positioning_interfaces__srv__MoveAbsolute_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_precision_positioning_interfaces
bool
precision_positioning_interfaces__srv__MoveAbsolute_Request__init(precision_positioning_interfaces__srv__MoveAbsolute_Request * msg);

/// Finalize srv/MoveAbsolute message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_precision_positioning_interfaces
void
precision_positioning_interfaces__srv__MoveAbsolute_Request__fini(precision_positioning_interfaces__srv__MoveAbsolute_Request * msg);

/// Create srv/MoveAbsolute message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * precision_positioning_interfaces__srv__MoveAbsolute_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_precision_positioning_interfaces
precision_positioning_interfaces__srv__MoveAbsolute_Request *
precision_positioning_interfaces__srv__MoveAbsolute_Request__create();

/// Destroy srv/MoveAbsolute message.
/**
 * It calls
 * precision_positioning_interfaces__srv__MoveAbsolute_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_precision_positioning_interfaces
void
precision_positioning_interfaces__srv__MoveAbsolute_Request__destroy(precision_positioning_interfaces__srv__MoveAbsolute_Request * msg);

/// Check for srv/MoveAbsolute message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_precision_positioning_interfaces
bool
precision_positioning_interfaces__srv__MoveAbsolute_Request__are_equal(const precision_positioning_interfaces__srv__MoveAbsolute_Request * lhs, const precision_positioning_interfaces__srv__MoveAbsolute_Request * rhs);

/// Copy a srv/MoveAbsolute message.
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
ROSIDL_GENERATOR_C_PUBLIC_precision_positioning_interfaces
bool
precision_positioning_interfaces__srv__MoveAbsolute_Request__copy(
  const precision_positioning_interfaces__srv__MoveAbsolute_Request * input,
  precision_positioning_interfaces__srv__MoveAbsolute_Request * output);

/// Initialize array of srv/MoveAbsolute messages.
/**
 * It allocates the memory for the number of elements and calls
 * precision_positioning_interfaces__srv__MoveAbsolute_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_precision_positioning_interfaces
bool
precision_positioning_interfaces__srv__MoveAbsolute_Request__Sequence__init(precision_positioning_interfaces__srv__MoveAbsolute_Request__Sequence * array, size_t size);

/// Finalize array of srv/MoveAbsolute messages.
/**
 * It calls
 * precision_positioning_interfaces__srv__MoveAbsolute_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_precision_positioning_interfaces
void
precision_positioning_interfaces__srv__MoveAbsolute_Request__Sequence__fini(precision_positioning_interfaces__srv__MoveAbsolute_Request__Sequence * array);

/// Create array of srv/MoveAbsolute messages.
/**
 * It allocates the memory for the array and calls
 * precision_positioning_interfaces__srv__MoveAbsolute_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_precision_positioning_interfaces
precision_positioning_interfaces__srv__MoveAbsolute_Request__Sequence *
precision_positioning_interfaces__srv__MoveAbsolute_Request__Sequence__create(size_t size);

/// Destroy array of srv/MoveAbsolute messages.
/**
 * It calls
 * precision_positioning_interfaces__srv__MoveAbsolute_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_precision_positioning_interfaces
void
precision_positioning_interfaces__srv__MoveAbsolute_Request__Sequence__destroy(precision_positioning_interfaces__srv__MoveAbsolute_Request__Sequence * array);

/// Check for srv/MoveAbsolute message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_precision_positioning_interfaces
bool
precision_positioning_interfaces__srv__MoveAbsolute_Request__Sequence__are_equal(const precision_positioning_interfaces__srv__MoveAbsolute_Request__Sequence * lhs, const precision_positioning_interfaces__srv__MoveAbsolute_Request__Sequence * rhs);

/// Copy an array of srv/MoveAbsolute messages.
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
ROSIDL_GENERATOR_C_PUBLIC_precision_positioning_interfaces
bool
precision_positioning_interfaces__srv__MoveAbsolute_Request__Sequence__copy(
  const precision_positioning_interfaces__srv__MoveAbsolute_Request__Sequence * input,
  precision_positioning_interfaces__srv__MoveAbsolute_Request__Sequence * output);

/// Initialize srv/MoveAbsolute message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * precision_positioning_interfaces__srv__MoveAbsolute_Response
 * )) before or use
 * precision_positioning_interfaces__srv__MoveAbsolute_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_precision_positioning_interfaces
bool
precision_positioning_interfaces__srv__MoveAbsolute_Response__init(precision_positioning_interfaces__srv__MoveAbsolute_Response * msg);

/// Finalize srv/MoveAbsolute message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_precision_positioning_interfaces
void
precision_positioning_interfaces__srv__MoveAbsolute_Response__fini(precision_positioning_interfaces__srv__MoveAbsolute_Response * msg);

/// Create srv/MoveAbsolute message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * precision_positioning_interfaces__srv__MoveAbsolute_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_precision_positioning_interfaces
precision_positioning_interfaces__srv__MoveAbsolute_Response *
precision_positioning_interfaces__srv__MoveAbsolute_Response__create();

/// Destroy srv/MoveAbsolute message.
/**
 * It calls
 * precision_positioning_interfaces__srv__MoveAbsolute_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_precision_positioning_interfaces
void
precision_positioning_interfaces__srv__MoveAbsolute_Response__destroy(precision_positioning_interfaces__srv__MoveAbsolute_Response * msg);

/// Check for srv/MoveAbsolute message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_precision_positioning_interfaces
bool
precision_positioning_interfaces__srv__MoveAbsolute_Response__are_equal(const precision_positioning_interfaces__srv__MoveAbsolute_Response * lhs, const precision_positioning_interfaces__srv__MoveAbsolute_Response * rhs);

/// Copy a srv/MoveAbsolute message.
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
ROSIDL_GENERATOR_C_PUBLIC_precision_positioning_interfaces
bool
precision_positioning_interfaces__srv__MoveAbsolute_Response__copy(
  const precision_positioning_interfaces__srv__MoveAbsolute_Response * input,
  precision_positioning_interfaces__srv__MoveAbsolute_Response * output);

/// Initialize array of srv/MoveAbsolute messages.
/**
 * It allocates the memory for the number of elements and calls
 * precision_positioning_interfaces__srv__MoveAbsolute_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_precision_positioning_interfaces
bool
precision_positioning_interfaces__srv__MoveAbsolute_Response__Sequence__init(precision_positioning_interfaces__srv__MoveAbsolute_Response__Sequence * array, size_t size);

/// Finalize array of srv/MoveAbsolute messages.
/**
 * It calls
 * precision_positioning_interfaces__srv__MoveAbsolute_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_precision_positioning_interfaces
void
precision_positioning_interfaces__srv__MoveAbsolute_Response__Sequence__fini(precision_positioning_interfaces__srv__MoveAbsolute_Response__Sequence * array);

/// Create array of srv/MoveAbsolute messages.
/**
 * It allocates the memory for the array and calls
 * precision_positioning_interfaces__srv__MoveAbsolute_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_precision_positioning_interfaces
precision_positioning_interfaces__srv__MoveAbsolute_Response__Sequence *
precision_positioning_interfaces__srv__MoveAbsolute_Response__Sequence__create(size_t size);

/// Destroy array of srv/MoveAbsolute messages.
/**
 * It calls
 * precision_positioning_interfaces__srv__MoveAbsolute_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_precision_positioning_interfaces
void
precision_positioning_interfaces__srv__MoveAbsolute_Response__Sequence__destroy(precision_positioning_interfaces__srv__MoveAbsolute_Response__Sequence * array);

/// Check for srv/MoveAbsolute message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_precision_positioning_interfaces
bool
precision_positioning_interfaces__srv__MoveAbsolute_Response__Sequence__are_equal(const precision_positioning_interfaces__srv__MoveAbsolute_Response__Sequence * lhs, const precision_positioning_interfaces__srv__MoveAbsolute_Response__Sequence * rhs);

/// Copy an array of srv/MoveAbsolute messages.
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
ROSIDL_GENERATOR_C_PUBLIC_precision_positioning_interfaces
bool
precision_positioning_interfaces__srv__MoveAbsolute_Response__Sequence__copy(
  const precision_positioning_interfaces__srv__MoveAbsolute_Response__Sequence * input,
  precision_positioning_interfaces__srv__MoveAbsolute_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PRECISION_POSITIONING_INTERFACES__SRV__DETAIL__MOVE_ABSOLUTE__FUNCTIONS_H_
