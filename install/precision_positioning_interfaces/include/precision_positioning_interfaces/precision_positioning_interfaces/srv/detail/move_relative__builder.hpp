// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from precision_positioning_interfaces:srv/MoveRelative.idl
// generated code does not contain a copyright notice

#ifndef PRECISION_POSITIONING_INTERFACES__SRV__DETAIL__MOVE_RELATIVE__BUILDER_HPP_
#define PRECISION_POSITIONING_INTERFACES__SRV__DETAIL__MOVE_RELATIVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "precision_positioning_interfaces/srv/detail/move_relative__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace precision_positioning_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveRelative_Request_distance_mm
{
public:
  Init_MoveRelative_Request_distance_mm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::precision_positioning_interfaces::srv::MoveRelative_Request distance_mm(::precision_positioning_interfaces::srv::MoveRelative_Request::_distance_mm_type arg)
  {
    msg_.distance_mm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::precision_positioning_interfaces::srv::MoveRelative_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::precision_positioning_interfaces::srv::MoveRelative_Request>()
{
  return precision_positioning_interfaces::srv::builder::Init_MoveRelative_Request_distance_mm();
}

}  // namespace precision_positioning_interfaces


namespace precision_positioning_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveRelative_Response_final_position_mm
{
public:
  explicit Init_MoveRelative_Response_final_position_mm(::precision_positioning_interfaces::srv::MoveRelative_Response & msg)
  : msg_(msg)
  {}
  ::precision_positioning_interfaces::srv::MoveRelative_Response final_position_mm(::precision_positioning_interfaces::srv::MoveRelative_Response::_final_position_mm_type arg)
  {
    msg_.final_position_mm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::precision_positioning_interfaces::srv::MoveRelative_Response msg_;
};

class Init_MoveRelative_Response_message
{
public:
  explicit Init_MoveRelative_Response_message(::precision_positioning_interfaces::srv::MoveRelative_Response & msg)
  : msg_(msg)
  {}
  Init_MoveRelative_Response_final_position_mm message(::precision_positioning_interfaces::srv::MoveRelative_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_MoveRelative_Response_final_position_mm(msg_);
  }

private:
  ::precision_positioning_interfaces::srv::MoveRelative_Response msg_;
};

class Init_MoveRelative_Response_success
{
public:
  Init_MoveRelative_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRelative_Response_message success(::precision_positioning_interfaces::srv::MoveRelative_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MoveRelative_Response_message(msg_);
  }

private:
  ::precision_positioning_interfaces::srv::MoveRelative_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::precision_positioning_interfaces::srv::MoveRelative_Response>()
{
  return precision_positioning_interfaces::srv::builder::Init_MoveRelative_Response_success();
}

}  // namespace precision_positioning_interfaces

#endif  // PRECISION_POSITIONING_INTERFACES__SRV__DETAIL__MOVE_RELATIVE__BUILDER_HPP_
