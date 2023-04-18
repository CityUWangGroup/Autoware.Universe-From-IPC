# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_rtc_replayer_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED rtc_replayer_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(rtc_replayer_FOUND FALSE)
  elseif(NOT rtc_replayer_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(rtc_replayer_FOUND FALSE)
  endif()
  return()
endif()
set(_rtc_replayer_CONFIG_INCLUDED TRUE)

# output package information
if(NOT rtc_replayer_FIND_QUIETLY)
  message(STATUS "Found rtc_replayer: 0.1.0 (${rtc_replayer_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'rtc_replayer' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${rtc_replayer_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(rtc_replayer_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${rtc_replayer_DIR}/${_extra}")
endforeach()
