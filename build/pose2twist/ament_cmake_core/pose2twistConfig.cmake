# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_pose2twist_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED pose2twist_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(pose2twist_FOUND FALSE)
  elseif(NOT pose2twist_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(pose2twist_FOUND FALSE)
  endif()
  return()
endif()
set(_pose2twist_CONFIG_INCLUDED TRUE)

# output package information
if(NOT pose2twist_FIND_QUIETLY)
  message(STATUS "Found pose2twist: 0.1.0 (${pose2twist_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'pose2twist' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${pose2twist_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(pose2twist_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake")
foreach(_extra ${_extras})
  include("${pose2twist_DIR}/${_extra}")
endforeach()
