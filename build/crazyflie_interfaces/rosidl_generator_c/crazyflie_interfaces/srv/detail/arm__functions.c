// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from crazyflie_interfaces:srv/Arm.idl
// generated code does not contain a copyright notice
#include "crazyflie_interfaces/srv/detail/arm__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
crazyflie_interfaces__srv__Arm_Request__init(crazyflie_interfaces__srv__Arm_Request * msg)
{
  if (!msg) {
    return false;
  }
  // arm
  return true;
}

void
crazyflie_interfaces__srv__Arm_Request__fini(crazyflie_interfaces__srv__Arm_Request * msg)
{
  if (!msg) {
    return;
  }
  // arm
}

bool
crazyflie_interfaces__srv__Arm_Request__are_equal(const crazyflie_interfaces__srv__Arm_Request * lhs, const crazyflie_interfaces__srv__Arm_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // arm
  if (lhs->arm != rhs->arm) {
    return false;
  }
  return true;
}

bool
crazyflie_interfaces__srv__Arm_Request__copy(
  const crazyflie_interfaces__srv__Arm_Request * input,
  crazyflie_interfaces__srv__Arm_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // arm
  output->arm = input->arm;
  return true;
}

crazyflie_interfaces__srv__Arm_Request *
crazyflie_interfaces__srv__Arm_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crazyflie_interfaces__srv__Arm_Request * msg = (crazyflie_interfaces__srv__Arm_Request *)allocator.allocate(sizeof(crazyflie_interfaces__srv__Arm_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crazyflie_interfaces__srv__Arm_Request));
  bool success = crazyflie_interfaces__srv__Arm_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
crazyflie_interfaces__srv__Arm_Request__destroy(crazyflie_interfaces__srv__Arm_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    crazyflie_interfaces__srv__Arm_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
crazyflie_interfaces__srv__Arm_Request__Sequence__init(crazyflie_interfaces__srv__Arm_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crazyflie_interfaces__srv__Arm_Request * data = NULL;

  if (size) {
    data = (crazyflie_interfaces__srv__Arm_Request *)allocator.zero_allocate(size, sizeof(crazyflie_interfaces__srv__Arm_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crazyflie_interfaces__srv__Arm_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crazyflie_interfaces__srv__Arm_Request__fini(&data[i - 1]);
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
crazyflie_interfaces__srv__Arm_Request__Sequence__fini(crazyflie_interfaces__srv__Arm_Request__Sequence * array)
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
      crazyflie_interfaces__srv__Arm_Request__fini(&array->data[i]);
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

crazyflie_interfaces__srv__Arm_Request__Sequence *
crazyflie_interfaces__srv__Arm_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crazyflie_interfaces__srv__Arm_Request__Sequence * array = (crazyflie_interfaces__srv__Arm_Request__Sequence *)allocator.allocate(sizeof(crazyflie_interfaces__srv__Arm_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = crazyflie_interfaces__srv__Arm_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
crazyflie_interfaces__srv__Arm_Request__Sequence__destroy(crazyflie_interfaces__srv__Arm_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    crazyflie_interfaces__srv__Arm_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
crazyflie_interfaces__srv__Arm_Request__Sequence__are_equal(const crazyflie_interfaces__srv__Arm_Request__Sequence * lhs, const crazyflie_interfaces__srv__Arm_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crazyflie_interfaces__srv__Arm_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crazyflie_interfaces__srv__Arm_Request__Sequence__copy(
  const crazyflie_interfaces__srv__Arm_Request__Sequence * input,
  crazyflie_interfaces__srv__Arm_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crazyflie_interfaces__srv__Arm_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    crazyflie_interfaces__srv__Arm_Request * data =
      (crazyflie_interfaces__srv__Arm_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crazyflie_interfaces__srv__Arm_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          crazyflie_interfaces__srv__Arm_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!crazyflie_interfaces__srv__Arm_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
crazyflie_interfaces__srv__Arm_Response__init(crazyflie_interfaces__srv__Arm_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
crazyflie_interfaces__srv__Arm_Response__fini(crazyflie_interfaces__srv__Arm_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
crazyflie_interfaces__srv__Arm_Response__are_equal(const crazyflie_interfaces__srv__Arm_Response * lhs, const crazyflie_interfaces__srv__Arm_Response * rhs)
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
crazyflie_interfaces__srv__Arm_Response__copy(
  const crazyflie_interfaces__srv__Arm_Response * input,
  crazyflie_interfaces__srv__Arm_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

crazyflie_interfaces__srv__Arm_Response *
crazyflie_interfaces__srv__Arm_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crazyflie_interfaces__srv__Arm_Response * msg = (crazyflie_interfaces__srv__Arm_Response *)allocator.allocate(sizeof(crazyflie_interfaces__srv__Arm_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crazyflie_interfaces__srv__Arm_Response));
  bool success = crazyflie_interfaces__srv__Arm_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
crazyflie_interfaces__srv__Arm_Response__destroy(crazyflie_interfaces__srv__Arm_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    crazyflie_interfaces__srv__Arm_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
crazyflie_interfaces__srv__Arm_Response__Sequence__init(crazyflie_interfaces__srv__Arm_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crazyflie_interfaces__srv__Arm_Response * data = NULL;

  if (size) {
    data = (crazyflie_interfaces__srv__Arm_Response *)allocator.zero_allocate(size, sizeof(crazyflie_interfaces__srv__Arm_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crazyflie_interfaces__srv__Arm_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crazyflie_interfaces__srv__Arm_Response__fini(&data[i - 1]);
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
crazyflie_interfaces__srv__Arm_Response__Sequence__fini(crazyflie_interfaces__srv__Arm_Response__Sequence * array)
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
      crazyflie_interfaces__srv__Arm_Response__fini(&array->data[i]);
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

crazyflie_interfaces__srv__Arm_Response__Sequence *
crazyflie_interfaces__srv__Arm_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crazyflie_interfaces__srv__Arm_Response__Sequence * array = (crazyflie_interfaces__srv__Arm_Response__Sequence *)allocator.allocate(sizeof(crazyflie_interfaces__srv__Arm_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = crazyflie_interfaces__srv__Arm_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
crazyflie_interfaces__srv__Arm_Response__Sequence__destroy(crazyflie_interfaces__srv__Arm_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    crazyflie_interfaces__srv__Arm_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
crazyflie_interfaces__srv__Arm_Response__Sequence__are_equal(const crazyflie_interfaces__srv__Arm_Response__Sequence * lhs, const crazyflie_interfaces__srv__Arm_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crazyflie_interfaces__srv__Arm_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crazyflie_interfaces__srv__Arm_Response__Sequence__copy(
  const crazyflie_interfaces__srv__Arm_Response__Sequence * input,
  crazyflie_interfaces__srv__Arm_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crazyflie_interfaces__srv__Arm_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    crazyflie_interfaces__srv__Arm_Response * data =
      (crazyflie_interfaces__srv__Arm_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crazyflie_interfaces__srv__Arm_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          crazyflie_interfaces__srv__Arm_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!crazyflie_interfaces__srv__Arm_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
