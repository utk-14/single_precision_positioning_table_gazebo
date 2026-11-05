// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from precision_positioning_interfaces:srv/Home.idl
// generated code does not contain a copyright notice
#include "precision_positioning_interfaces/srv/detail/home__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
precision_positioning_interfaces__srv__Home_Request__init(precision_positioning_interfaces__srv__Home_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
precision_positioning_interfaces__srv__Home_Request__fini(precision_positioning_interfaces__srv__Home_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
precision_positioning_interfaces__srv__Home_Request__are_equal(const precision_positioning_interfaces__srv__Home_Request * lhs, const precision_positioning_interfaces__srv__Home_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
precision_positioning_interfaces__srv__Home_Request__copy(
  const precision_positioning_interfaces__srv__Home_Request * input,
  precision_positioning_interfaces__srv__Home_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

precision_positioning_interfaces__srv__Home_Request *
precision_positioning_interfaces__srv__Home_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  precision_positioning_interfaces__srv__Home_Request * msg = (precision_positioning_interfaces__srv__Home_Request *)allocator.allocate(sizeof(precision_positioning_interfaces__srv__Home_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(precision_positioning_interfaces__srv__Home_Request));
  bool success = precision_positioning_interfaces__srv__Home_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
precision_positioning_interfaces__srv__Home_Request__destroy(precision_positioning_interfaces__srv__Home_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    precision_positioning_interfaces__srv__Home_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
precision_positioning_interfaces__srv__Home_Request__Sequence__init(precision_positioning_interfaces__srv__Home_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  precision_positioning_interfaces__srv__Home_Request * data = NULL;

  if (size) {
    data = (precision_positioning_interfaces__srv__Home_Request *)allocator.zero_allocate(size, sizeof(precision_positioning_interfaces__srv__Home_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = precision_positioning_interfaces__srv__Home_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        precision_positioning_interfaces__srv__Home_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
precision_positioning_interfaces__srv__Home_Request__Sequence__fini(precision_positioning_interfaces__srv__Home_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      precision_positioning_interfaces__srv__Home_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

precision_positioning_interfaces__srv__Home_Request__Sequence *
precision_positioning_interfaces__srv__Home_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  precision_positioning_interfaces__srv__Home_Request__Sequence * array = (precision_positioning_interfaces__srv__Home_Request__Sequence *)allocator.allocate(sizeof(precision_positioning_interfaces__srv__Home_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = precision_positioning_interfaces__srv__Home_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
precision_positioning_interfaces__srv__Home_Request__Sequence__destroy(precision_positioning_interfaces__srv__Home_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    precision_positioning_interfaces__srv__Home_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
precision_positioning_interfaces__srv__Home_Request__Sequence__are_equal(const precision_positioning_interfaces__srv__Home_Request__Sequence * lhs, const precision_positioning_interfaces__srv__Home_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!precision_positioning_interfaces__srv__Home_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
precision_positioning_interfaces__srv__Home_Request__Sequence__copy(
  const precision_positioning_interfaces__srv__Home_Request__Sequence * input,
  precision_positioning_interfaces__srv__Home_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(precision_positioning_interfaces__srv__Home_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    precision_positioning_interfaces__srv__Home_Request * data =
      (precision_positioning_interfaces__srv__Home_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!precision_positioning_interfaces__srv__Home_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          precision_positioning_interfaces__srv__Home_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!precision_positioning_interfaces__srv__Home_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
precision_positioning_interfaces__srv__Home_Response__init(precision_positioning_interfaces__srv__Home_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    precision_positioning_interfaces__srv__Home_Response__fini(msg);
    return false;
  }
  return true;
}

void
precision_positioning_interfaces__srv__Home_Response__fini(precision_positioning_interfaces__srv__Home_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
precision_positioning_interfaces__srv__Home_Response__are_equal(const precision_positioning_interfaces__srv__Home_Response * lhs, const precision_positioning_interfaces__srv__Home_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
precision_positioning_interfaces__srv__Home_Response__copy(
  const precision_positioning_interfaces__srv__Home_Response * input,
  precision_positioning_interfaces__srv__Home_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

precision_positioning_interfaces__srv__Home_Response *
precision_positioning_interfaces__srv__Home_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  precision_positioning_interfaces__srv__Home_Response * msg = (precision_positioning_interfaces__srv__Home_Response *)allocator.allocate(sizeof(precision_positioning_interfaces__srv__Home_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(precision_positioning_interfaces__srv__Home_Response));
  bool success = precision_positioning_interfaces__srv__Home_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
precision_positioning_interfaces__srv__Home_Response__destroy(precision_positioning_interfaces__srv__Home_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    precision_positioning_interfaces__srv__Home_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
precision_positioning_interfaces__srv__Home_Response__Sequence__init(precision_positioning_interfaces__srv__Home_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  precision_positioning_interfaces__srv__Home_Response * data = NULL;

  if (size) {
    data = (precision_positioning_interfaces__srv__Home_Response *)allocator.zero_allocate(size, sizeof(precision_positioning_interfaces__srv__Home_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = precision_positioning_interfaces__srv__Home_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        precision_positioning_interfaces__srv__Home_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
precision_positioning_interfaces__srv__Home_Response__Sequence__fini(precision_positioning_interfaces__srv__Home_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      precision_positioning_interfaces__srv__Home_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

precision_positioning_interfaces__srv__Home_Response__Sequence *
precision_positioning_interfaces__srv__Home_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  precision_positioning_interfaces__srv__Home_Response__Sequence * array = (precision_positioning_interfaces__srv__Home_Response__Sequence *)allocator.allocate(sizeof(precision_positioning_interfaces__srv__Home_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = precision_positioning_interfaces__srv__Home_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
precision_positioning_interfaces__srv__Home_Response__Sequence__destroy(precision_positioning_interfaces__srv__Home_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    precision_positioning_interfaces__srv__Home_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
precision_positioning_interfaces__srv__Home_Response__Sequence__are_equal(const precision_positioning_interfaces__srv__Home_Response__Sequence * lhs, const precision_positioning_interfaces__srv__Home_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!precision_positioning_interfaces__srv__Home_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
precision_positioning_interfaces__srv__Home_Response__Sequence__copy(
  const precision_positioning_interfaces__srv__Home_Response__Sequence * input,
  precision_positioning_interfaces__srv__Home_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(precision_positioning_interfaces__srv__Home_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    precision_positioning_interfaces__srv__Home_Response * data =
      (precision_positioning_interfaces__srv__Home_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!precision_positioning_interfaces__srv__Home_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          precision_positioning_interfaces__srv__Home_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!precision_positioning_interfaces__srv__Home_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
