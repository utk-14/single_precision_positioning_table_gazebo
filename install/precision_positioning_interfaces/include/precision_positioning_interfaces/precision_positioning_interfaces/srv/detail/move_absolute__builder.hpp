// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from precision_positioning_interfaces:srv/MoveAbsolute.idl
// generated code does not contain a copyright notice

#ifndef PRECISION_POSITIONING_INTERFACES__SRV__DETAIL__MOVE_ABSOLUTE__BUILDER_HPP_
#define PRECISION_POSITIONING_INTERFACES__SRV__DETAIL__MOVE_ABSOLUTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "precision_positioning_interfaces/srv/detail/move_absolute__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace precision_positioning_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveAbsolute_Request_target_position_mm
{
public:
  Init_MoveAbsolute_Request_target_position_mm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::precision_positioning_interfaces::srv::MoveAbsolute_Request target_position_mm(::precision_positioning_interfaces::srv::MoveAbsolute_Request::_target_position_mm_type arg)
  {
    msg_.target_position_mm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::precision_positioning_interfaces::srv::MoveAbsolute_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::precision_positioning_interfaces::srv::MoveAbsolute_Request>()
{
  return precision_positioning_interfaces::srv::builder::Init_MoveAbsolute_Request_target_position_mm();
}

}  // namespace precision_positioning_interfaces


namespace precision_positioning_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveAbsolute_Response_final_position_mm
{
public:
  explicit Init_MoveAbsolute_Response_final_position_mm(::precision_positioning_interfaces::srv::MoveAbsolute_Response & msg)
  : msg_(msg)
  {}
  ::precision_positioning_interfaces::srv::MoveAbsolute_Response final_position_mm(::precision_positioning_interfaces::srv::MoveAbsolute_Response::_final_position_mm_type arg)
  {
    msg_.final_position_mm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::precision_positioning_interfaces::srv::MoveAbsolute_Response msg_;
};

class Init_MoveAbsolute_Response_message
{
public:
  explicit Init_MoveAbsolute_Response_message(::precision_positioning_interfaces::srv::MoveAbsolute_Response & msg)
  : msg_(msg)
  {}
  Init_MoveAbsolute_Response_final_position_mm message(::precision_positioning_interfaces::srv::MoveAbsolute_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_MoveAbsolute_Response_final_position_mm(msg_);
  }

private:
  ::precision_positioning_interfaces::srv::MoveAbsolute_Response msg_;
};

class Init_MoveAbsolute_Response_success
{
public:
  Init_MoveAbsolute_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveAbsolute_Response_message success(::precision_positioning_interfaces::srv::MoveAbsolute_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MoveAbsolute_Response_message(msg_);
  }

private:
  ::precision_positioning_interfaces::srv::MoveAbsolute_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::precision_positioning_interfaces::srv::MoveAbsolute_Response>()
{
  return precision_positioning_interfaces::srv::builder::Init_MoveAbsolute_Response_success();
}

}  // namespace precision_positioning_interfaces

#endif  // PRECISION_POSITIONING_INTERFACES__SRV__DETAIL__MOVE_ABSOLUTE__BUILDER_HPP_
