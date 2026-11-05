// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from precision_positioning_interfaces:srv/EmergencyStop.idl
// generated code does not contain a copyright notice

#ifndef PRECISION_POSITIONING_INTERFACES__SRV__DETAIL__EMERGENCY_STOP__STRUCT_H_
#define PRECISION_POSITIONING_INTERFACES__SRV__DETAIL__EMERGENCY_STOP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/EmergencyStop in the package precision_positioning_interfaces.
typedef struct precision_positioning_interfaces__srv__EmergencyStop_Request
{
  uint8_t structure_needs_at_least_one_member;
} precision_positioning_interfaces__srv__EmergencyStop_Request;

// Struct for a sequence of precision_positioning_interfaces__srv__EmergencyStop_Request.
typedef struct precision_positioning_interfaces__srv__EmergencyStop_Request__Sequence
{
  precision_positioning_interfaces__srv__EmergencyStop_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} precision_positioning_interfaces__srv__EmergencyStop_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/EmergencyStop in the package precision_positioning_interfaces.
typedef struct precision_positioning_interfaces__srv__EmergencyStop_Response
{
  bool success;
  rosidl_runtime_c__String message;
} precision_positioning_interfaces__srv__EmergencyStop_Response;

// Struct for a sequence of precision_positioning_interfaces__srv__EmergencyStop_Response.
typedef struct precision_positioning_interfaces__srv__EmergencyStop_Response__Sequence
{
  precision_positioning_interfaces__srv__EmergencyStop_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} precision_positioning_interfaces__srv__EmergencyStop_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PRECISION_POSITIONING_INTERFACES__SRV__DETAIL__EMERGENCY_STOP__STRUCT_H_
