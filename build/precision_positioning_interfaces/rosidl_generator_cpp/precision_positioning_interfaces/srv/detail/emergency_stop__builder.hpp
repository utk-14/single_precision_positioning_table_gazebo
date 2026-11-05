// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from precision_positioning_interfaces:srv/EmergencyStop.idl
// generated code does not contain a copyright notice

#ifndef PRECISION_POSITIONING_INTERFACES__SRV__DETAIL__EMERGENCY_STOP__BUILDER_HPP_
#define PRECISION_POSITIONING_INTERFACES__SRV__DETAIL__EMERGENCY_STOP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "precision_positioning_interfaces/srv/detail/emergency_stop__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace precision_positioning_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::precision_positioning_interfaces::srv::EmergencyStop_Request>()
{
  return ::precision_positioning_interfaces::srv::EmergencyStop_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace precision_positioning_interfaces


namespace precision_positioning_interfaces
{

namespace srv
{

namespace builder
{

class Init_EmergencyStop_Response_message
{
public:
  explicit Init_EmergencyStop_Response_message(::precision_positioning_interfaces::srv::EmergencyStop_Response & msg)
  : msg_(msg)
  {}
  ::precision_positioning_interfaces::srv::EmergencyStop_Response message(::precision_positioning_interfaces::srv::EmergencyStop_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::precision_positioning_interfaces::srv::EmergencyStop_Response msg_;
};

class Init_EmergencyStop_Response_success
{
public:
  Init_EmergencyStop_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EmergencyStop_Response_message success(::precision_positioning_interfaces::srv::EmergencyStop_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_EmergencyStop_Response_message(msg_);
  }

private:
  ::precision_positioning_interfaces::srv::EmergencyStop_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::precision_positioning_interfaces::srv::EmergencyStop_Response>()
{
  return precision_positioning_interfaces::srv::builder::Init_EmergencyStop_Response_success();
}

}  // namespace precision_positioning_interfaces

#endif  // PRECISION_POSITIONING_INTERFACES__SRV__DETAIL__EMERGENCY_STOP__BUILDER_HPP_
