// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from precision_positioning_interfaces:srv/EmergencyStop.idl
// generated code does not contain a copyright notice

#ifndef PRECISION_POSITIONING_INTERFACES__SRV__DETAIL__EMERGENCY_STOP__TRAITS_HPP_
#define PRECISION_POSITIONING_INTERFACES__SRV__DETAIL__EMERGENCY_STOP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "precision_positioning_interfaces/srv/detail/emergency_stop__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace precision_positioning_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const EmergencyStop_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EmergencyStop_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EmergencyStop_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace precision_positioning_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use precision_positioning_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const precision_positioning_interfaces::srv::EmergencyStop_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  precision_positioning_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use precision_positioning_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const precision_positioning_interfaces::srv::EmergencyStop_Request & msg)
{
  return precision_positioning_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<precision_positioning_interfaces::srv::EmergencyStop_Request>()
{
  return "precision_positioning_interfaces::srv::EmergencyStop_Request";
}

template<>
inline const char * name<precision_positioning_interfaces::srv::EmergencyStop_Request>()
{
  return "precision_positioning_interfaces/srv/EmergencyStop_Request";
}

template<>
struct has_fixed_size<precision_positioning_interfaces::srv::EmergencyStop_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<precision_positioning_interfaces::srv::EmergencyStop_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<precision_positioning_interfaces::srv::EmergencyStop_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace precision_positioning_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const EmergencyStop_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EmergencyStop_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EmergencyStop_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace precision_positioning_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use precision_positioning_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const precision_positioning_interfaces::srv::EmergencyStop_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  precision_positioning_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use precision_positioning_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const precision_positioning_interfaces::srv::EmergencyStop_Response & msg)
{
  return precision_positioning_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<precision_positioning_interfaces::srv::EmergencyStop_Response>()
{
  return "precision_positioning_interfaces::srv::EmergencyStop_Response";
}

template<>
inline const char * name<precision_positioning_interfaces::srv::EmergencyStop_Response>()
{
  return "precision_positioning_interfaces/srv/EmergencyStop_Response";
}

template<>
struct has_fixed_size<precision_positioning_interfaces::srv::EmergencyStop_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<precision_positioning_interfaces::srv::EmergencyStop_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<precision_positioning_interfaces::srv::EmergencyStop_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<precision_positioning_interfaces::srv::EmergencyStop>()
{
  return "precision_positioning_interfaces::srv::EmergencyStop";
}

template<>
inline const char * name<precision_positioning_interfaces::srv::EmergencyStop>()
{
  return "precision_positioning_interfaces/srv/EmergencyStop";
}

template<>
struct has_fixed_size<precision_positioning_interfaces::srv::EmergencyStop>
  : std::integral_constant<
    bool,
    has_fixed_size<precision_positioning_interfaces::srv::EmergencyStop_Request>::value &&
    has_fixed_size<precision_positioning_interfaces::srv::EmergencyStop_Response>::value
  >
{
};

template<>
struct has_bounded_size<precision_positioning_interfaces::srv::EmergencyStop>
  : std::integral_constant<
    bool,
    has_bounded_size<precision_positioning_interfaces::srv::EmergencyStop_Request>::value &&
    has_bounded_size<precision_positioning_interfaces::srv::EmergencyStop_Response>::value
  >
{
};

template<>
struct is_service<precision_positioning_interfaces::srv::EmergencyStop>
  : std::true_type
{
};

template<>
struct is_service_request<precision_positioning_interfaces::srv::EmergencyStop_Request>
  : std::true_type
{
};

template<>
struct is_service_response<precision_positioning_interfaces::srv::EmergencyStop_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PRECISION_POSITIONING_INTERFACES__SRV__DETAIL__EMERGENCY_STOP__TRAITS_HPP_
