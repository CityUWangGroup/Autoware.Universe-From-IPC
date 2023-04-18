# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_autoware_ad_api_specs_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED autoware_ad_api_specs_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(autoware_ad_api_specs_FOUND FALSE)
  elseif(NOT autoware_ad_api_specs_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(autoware_ad_api_specs_FOUND FALSE)
  endif()
  return()
endif()
set(_autoware_ad_api_specs_CONFIG_INCLUDED TRUE)

# output package information
if(NOT autoware_ad_api_specs_FIND_QUIETLY)
  message(STATUS "Found autoware_ad_api_specs: 0.0.0 (${autoware_ad_api_specs_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'autoware_ad_api_specs' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${autoware_ad_api_specs_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(autoware_ad_api_specs_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_include_directories-extras.cmake")
foreach(_extra ${_extras})
  include("${autoware_ad_api_specs_DIR}/${_extra}")
endforeach()