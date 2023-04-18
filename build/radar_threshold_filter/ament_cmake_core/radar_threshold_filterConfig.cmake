# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_radar_threshold_filter_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED radar_threshold_filter_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(radar_threshold_filter_FOUND FALSE)
  elseif(NOT radar_threshold_filter_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(radar_threshold_filter_FOUND FALSE)
  endif()
  return()
endif()
set(_radar_threshold_filter_CONFIG_INCLUDED TRUE)

# output package information
if(NOT radar_threshold_filter_FIND_QUIETLY)
  message(STATUS "Found radar_threshold_filter: 0.1.0 (${radar_threshold_filter_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'radar_threshold_filter' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${radar_threshold_filter_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(radar_threshold_filter_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${radar_threshold_filter_DIR}/${_extra}")
endforeach()
