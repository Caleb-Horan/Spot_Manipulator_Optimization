# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_spot_viz_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED spot_viz_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(spot_viz_FOUND FALSE)
  elseif(NOT spot_viz_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(spot_viz_FOUND FALSE)
  endif()
  return()
endif()
set(_spot_viz_CONFIG_INCLUDED TRUE)

# output package information
if(NOT spot_viz_FIND_QUIETLY)
  message(STATUS "Found spot_viz: 2.0.0 (${spot_viz_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'spot_viz' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${spot_viz_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(spot_viz_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${spot_viz_DIR}/${_extra}")
endforeach()
