set(_AMENT_PACKAGE_NAME "grid_map_filters")
set(grid_map_filters_VERSION "2.0.0")
set(grid_map_filters_MAINTAINER "Maximilian Wulf <mwulf@anybotics.com>, Yoshua Nava <ynava@anybotics.com>")
set(grid_map_filters_BUILD_DEPENDS "grid_map_cmake_helpers" "filters" "grid_map_core" "grid_map_msgs" "grid_map_ros" "pluginlib" "tbb")
set(grid_map_filters_BUILDTOOL_DEPENDS "ament_cmake")
set(grid_map_filters_BUILD_EXPORT_DEPENDS "filters" "grid_map_core" "grid_map_msgs" "grid_map_ros" "pluginlib" "tbb")
set(grid_map_filters_BUILDTOOL_EXPORT_DEPENDS )
set(grid_map_filters_EXEC_DEPENDS "filters" "grid_map_core" "grid_map_msgs" "grid_map_ros" "pluginlib" "tbb")
set(grid_map_filters_TEST_DEPENDS "ament_cmake_gtest" "ament_lint_auto" "ament_lint_common")
set(grid_map_filters_GROUP_DEPENDS )
set(grid_map_filters_MEMBER_OF_GROUPS )
set(grid_map_filters_DEPRECATED "")
set(grid_map_filters_EXPORT_TAGS)
list(APPEND grid_map_filters_EXPORT_TAGS "<build_type>ament_cmake</build_type>")
list(APPEND grid_map_filters_EXPORT_TAGS "<filters plugin=\"filter_plugins.xml\"/>")