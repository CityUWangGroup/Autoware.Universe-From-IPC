# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_vehicle_cmd_gate_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED vehicle_cmd_gate_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(vehicle_cmd_gate_FOUND FALSE)
  elseif(NOT vehicle_cmd_gate_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(vehicle_cmd_gate_FOUND FALSE)
  endif()
  return()
endif()
set(_vehicle_cmd_gate_CONFIG_INCLUDED TRUE)

# output package information
if(NOT vehicle_cmd_gate_FIND_QUIETLY)
  message(STATUS "Found vehicle_cmd_gate: 0.1.0 (${vehicle_cmd_gate_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'vehicle_cmd_gate' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${vehicle_cmd_gate_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(vehicle_cmd_gate_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${vehicle_cmd_gate_DIR}/${_extra}")
endforeach()
