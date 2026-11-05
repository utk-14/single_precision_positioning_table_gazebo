# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target precision_positioning_interfaces::precision_positioning_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${precision_positioning_interfaces_TARGETS}.
if(precision_positioning_interfaces_TARGETS AND NOT TARGET precision_positioning_interfaces::precision_positioning_interfaces)
  add_library(precision_positioning_interfaces::precision_positioning_interfaces INTERFACE IMPORTED)
  set_target_properties(precision_positioning_interfaces::precision_positioning_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${precision_positioning_interfaces_TARGETS}")
endif()
