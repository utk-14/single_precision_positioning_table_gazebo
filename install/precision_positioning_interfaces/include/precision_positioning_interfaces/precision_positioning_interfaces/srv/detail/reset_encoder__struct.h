// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from precision_positioning_interfaces:srv/ResetEncoder.idl
// generated code does not contain a copyright notice

#ifndef PRECISION_POSITIONING_INTERFACES__SRV__DETAIL__RESET_ENCODER__STRUCT_H_
#define PRECISION_POSITIONING_INTERFACES__SRV__DETAIL__RESET_ENCODER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ResetEncoder in the package precision_positioning_interfaces.
typedef struct precision_positioning_interfaces__srv__ResetEncoder_Request
{
  double reset_position_mm;
} precision_positioning_interfaces__srv__ResetEncoder_Request;

// Struct for a sequence of precision_positioning_interfaces__srv__ResetEncoder_Request.
typedef struct precision_positioning_interfaces__srv__ResetEncoder_Request__Sequence
{
  precision_positioning_interfaces__srv__ResetEncoder_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} precision_positioning_interfaces__srv__ResetEncoder_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ResetEncoder in the package precision_positioning_interfaces.
typedef struct precision_positioning_interfaces__srv__ResetEncoder_Response
{
  bool success;
  rosidl_runtime_c__String message;
} precision_positioning_interfaces__srv__ResetEncoder_Response;

// Struct for a sequence of precision_positioning_interfaces__srv__ResetEncoder_Response.
typedef struct precision_positioning_interfaces__srv__ResetEncoder_Response__Sequence
{
  precision_positioning_interfaces__srv__ResetEncoder_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} precision_positioning_interfaces__srv__ResetEncoder_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PRECISION_POSITIONING_INTERFACES__SRV__DETAIL__RESET_ENCODER__STRUCT_H_
