// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from precision_positioning_interfaces:srv/ResetEncoder.idl
// generated code does not contain a copyright notice

#ifndef PRECISION_POSITIONING_INTERFACES__SRV__DETAIL__RESET_ENCODER__BUILDER_HPP_
#define PRECISION_POSITIONING_INTERFACES__SRV__DETAIL__RESET_ENCODER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "precision_positioning_interfaces/srv/detail/reset_encoder__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace precision_positioning_interfaces
{

namespace srv
{

namespace builder
{

class Init_ResetEncoder_Request_reset_position_mm
{
public:
  Init_ResetEncoder_Request_reset_position_mm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::precision_positioning_interfaces::srv::ResetEncoder_Request reset_position_mm(::precision_positioning_interfaces::srv::ResetEncoder_Request::_reset_position_mm_type arg)
  {
    msg_.reset_position_mm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::precision_positioning_interfaces::srv::ResetEncoder_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::precision_positioning_interfaces::srv::ResetEncoder_Request>()
{
  return precision_positioning_interfaces::srv::builder::Init_ResetEncoder_Request_reset_position_mm();
}

}  // namespace precision_positioning_interfaces


namespace precision_positioning_interfaces
{

namespace srv
{

namespace builder
{

class Init_ResetEncoder_Response_message
{
public:
  explicit Init_ResetEncoder_Response_message(::precision_positioning_interfaces::srv::ResetEncoder_Response & msg)
  : msg_(msg)
  {}
  ::precision_positioning_interfaces::srv::ResetEncoder_Response message(::precision_positioning_interfaces::srv::ResetEncoder_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::precision_positioning_interfaces::srv::ResetEncoder_Response msg_;
};

class Init_ResetEncoder_Response_success
{
public:
  Init_ResetEncoder_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ResetEncoder_Response_message success(::precision_positioning_interfaces::srv::ResetEncoder_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ResetEncoder_Response_message(msg_);
  }

private:
  ::precision_positioning_interfaces::srv::ResetEncoder_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::precision_positioning_interfaces::srv::ResetEncoder_Response>()
{
  return precision_positioning_interfaces::srv::builder::Init_ResetEncoder_Response_success();
}

}  // namespace precision_positioning_interfaces

#endif  // PRECISION_POSITIONING_INTERFACES__SRV__DETAIL__RESET_ENCODER__BUILDER_HPP_
