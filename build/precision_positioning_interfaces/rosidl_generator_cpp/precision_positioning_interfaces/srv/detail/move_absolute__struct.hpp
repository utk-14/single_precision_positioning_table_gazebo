// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from precision_positioning_interfaces:srv/MoveAbsolute.idl
// generated code does not contain a copyright notice

#ifndef PRECISION_POSITIONING_INTERFACES__SRV__DETAIL__MOVE_ABSOLUTE__STRUCT_HPP_
#define PRECISION_POSITIONING_INTERFACES__SRV__DETAIL__MOVE_ABSOLUTE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__precision_positioning_interfaces__srv__MoveAbsolute_Request __attribute__((deprecated))
#else
# define DEPRECATED__precision_positioning_interfaces__srv__MoveAbsolute_Request __declspec(deprecated)
#endif

namespace precision_positioning_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveAbsolute_Request_
{
  using Type = MoveAbsolute_Request_<ContainerAllocator>;

  explicit MoveAbsolute_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_position_mm = 0.0;
    }
  }

  explicit MoveAbsolute_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_position_mm = 0.0;
    }
  }

  // field types and members
  using _target_position_mm_type =
    double;
  _target_position_mm_type target_position_mm;

  // setters for named parameter idiom
  Type & set__target_position_mm(
    const double & _arg)
  {
    this->target_position_mm = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    precision_positioning_interfaces::srv::MoveAbsolute_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const precision_positioning_interfaces::srv::MoveAbsolute_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<precision_positioning_interfaces::srv::MoveAbsolute_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<precision_positioning_interfaces::srv::MoveAbsolute_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      precision_positioning_interfaces::srv::MoveAbsolute_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<precision_positioning_interfaces::srv::MoveAbsolute_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      precision_positioning_interfaces::srv::MoveAbsolute_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<precision_positioning_interfaces::srv::MoveAbsolute_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<precision_positioning_interfaces::srv::MoveAbsolute_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<precision_positioning_interfaces::srv::MoveAbsolute_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__precision_positioning_interfaces__srv__MoveAbsolute_Request
    std::shared_ptr<precision_positioning_interfaces::srv::MoveAbsolute_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__precision_positioning_interfaces__srv__MoveAbsolute_Request
    std::shared_ptr<precision_positioning_interfaces::srv::MoveAbsolute_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveAbsolute_Request_ & other) const
  {
    if (this->target_position_mm != other.target_position_mm) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveAbsolute_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveAbsolute_Request_

// alias to use template instance with default allocator
using MoveAbsolute_Request =
  precision_positioning_interfaces::srv::MoveAbsolute_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace precision_positioning_interfaces


#ifndef _WIN32
# define DEPRECATED__precision_positioning_interfaces__srv__MoveAbsolute_Response __attribute__((deprecated))
#else
# define DEPRECATED__precision_positioning_interfaces__srv__MoveAbsolute_Response __declspec(deprecated)
#endif

namespace precision_positioning_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveAbsolute_Response_
{
  using Type = MoveAbsolute_Response_<ContainerAllocator>;

  explicit MoveAbsolute_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->final_position_mm = 0.0;
    }
  }

  explicit MoveAbsolute_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->final_position_mm = 0.0;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _final_position_mm_type =
    double;
  _final_position_mm_type final_position_mm;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__final_position_mm(
    const double & _arg)
  {
    this->final_position_mm = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    precision_positioning_interfaces::srv::MoveAbsolute_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const precision_positioning_interfaces::srv::MoveAbsolute_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<precision_positioning_interfaces::srv::MoveAbsolute_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<precision_positioning_interfaces::srv::MoveAbsolute_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      precision_positioning_interfaces::srv::MoveAbsolute_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<precision_positioning_interfaces::srv::MoveAbsolute_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      precision_positioning_interfaces::srv::MoveAbsolute_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<precision_positioning_interfaces::srv::MoveAbsolute_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<precision_positioning_interfaces::srv::MoveAbsolute_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<precision_positioning_interfaces::srv::MoveAbsolute_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__precision_positioning_interfaces__srv__MoveAbsolute_Response
    std::shared_ptr<precision_positioning_interfaces::srv::MoveAbsolute_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__precision_positioning_interfaces__srv__MoveAbsolute_Response
    std::shared_ptr<precision_positioning_interfaces::srv::MoveAbsolute_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveAbsolute_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->final_position_mm != other.final_position_mm) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveAbsolute_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveAbsolute_Response_

// alias to use template instance with default allocator
using MoveAbsolute_Response =
  precision_positioning_interfaces::srv::MoveAbsolute_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace precision_positioning_interfaces

namespace precision_positioning_interfaces
{

namespace srv
{

struct MoveAbsolute
{
  using Request = precision_positioning_interfaces::srv::MoveAbsolute_Request;
  using Response = precision_positioning_interfaces::srv::MoveAbsolute_Response;
};

}  // namespace srv

}  // namespace precision_positioning_interfaces

#endif  // PRECISION_POSITIONING_INTERFACES__SRV__DETAIL__MOVE_ABSOLUTE__STRUCT_HPP_
