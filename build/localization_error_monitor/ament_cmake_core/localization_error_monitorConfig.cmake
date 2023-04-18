# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_localization_error_monitor_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED localization_error_monitor_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(localization_error_monitor_FOUND FALSE)
  elseif(NOT localization_error_monitor_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(localization_error_monitor_FOUND FALSE)
  endif()
  return()
endif()
set(_localization_error_monitor_CONFIG_INCLUDED TRUE)

# output package information
if(NOT localization_error_monitor_FIND_QUIETLY)
  message(STATUS "Found localization_error_monitor: 0.1.0 (${localization_error_monitor_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'localization_error_monitor' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${localization_error_monitor_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(localization_error_monitor_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake")
foreach(_extra ${_extras})
  include("${localization_error_monitor_DIR}/${_extra}")
endforeach()
