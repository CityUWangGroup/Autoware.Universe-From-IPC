# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/cityu/autoware/src/sensor_component/external/tamagawa_imu_driver

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cityu/autoware/build/tamagawa_imu_driver

# Include any dependencies generated for this target.
include CMakeFiles/tag_serial_driver.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tag_serial_driver.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tag_serial_driver.dir/flags.make

CMakeFiles/tag_serial_driver.dir/src/tag_serial_driver.cpp.o: CMakeFiles/tag_serial_driver.dir/flags.make
CMakeFiles/tag_serial_driver.dir/src/tag_serial_driver.cpp.o: /home/cityu/autoware/src/sensor_component/external/tamagawa_imu_driver/src/tag_serial_driver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cityu/autoware/build/tamagawa_imu_driver/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tag_serial_driver.dir/src/tag_serial_driver.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tag_serial_driver.dir/src/tag_serial_driver.cpp.o -c /home/cityu/autoware/src/sensor_component/external/tamagawa_imu_driver/src/tag_serial_driver.cpp

CMakeFiles/tag_serial_driver.dir/src/tag_serial_driver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tag_serial_driver.dir/src/tag_serial_driver.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cityu/autoware/src/sensor_component/external/tamagawa_imu_driver/src/tag_serial_driver.cpp > CMakeFiles/tag_serial_driver.dir/src/tag_serial_driver.cpp.i

CMakeFiles/tag_serial_driver.dir/src/tag_serial_driver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tag_serial_driver.dir/src/tag_serial_driver.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cityu/autoware/src/sensor_component/external/tamagawa_imu_driver/src/tag_serial_driver.cpp -o CMakeFiles/tag_serial_driver.dir/src/tag_serial_driver.cpp.s

# Object files for target tag_serial_driver
tag_serial_driver_OBJECTS = \
"CMakeFiles/tag_serial_driver.dir/src/tag_serial_driver.cpp.o"

# External object files for target tag_serial_driver
tag_serial_driver_EXTERNAL_OBJECTS =

tag_serial_driver: CMakeFiles/tag_serial_driver.dir/src/tag_serial_driver.cpp.o
tag_serial_driver: CMakeFiles/tag_serial_driver.dir/build.make
tag_serial_driver: /opt/ros/galactic/lib/librclcpp.so
tag_serial_driver: /opt/ros/galactic/lib/libsensor_msgs__rosidl_typesupport_introspection_c.so
tag_serial_driver: /opt/ros/galactic/lib/libsensor_msgs__rosidl_typesupport_c.so
tag_serial_driver: /opt/ros/galactic/lib/libsensor_msgs__rosidl_typesupport_introspection_cpp.so
tag_serial_driver: /opt/ros/galactic/lib/libsensor_msgs__rosidl_typesupport_cpp.so
tag_serial_driver: /opt/ros/galactic/lib/libcan_msgs__rosidl_typesupport_introspection_c.so
tag_serial_driver: /opt/ros/galactic/lib/libcan_msgs__rosidl_typesupport_c.so
tag_serial_driver: /opt/ros/galactic/lib/libcan_msgs__rosidl_typesupport_introspection_cpp.so
tag_serial_driver: /opt/ros/galactic/lib/libcan_msgs__rosidl_typesupport_cpp.so
tag_serial_driver: /opt/ros/galactic/lib/libament_index_cpp.so
tag_serial_driver: /opt/ros/galactic/lib/liblibstatistics_collector.so
tag_serial_driver: /opt/ros/galactic/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_introspection_c.so
tag_serial_driver: /opt/ros/galactic/lib/liblibstatistics_collector_test_msgs__rosidl_generator_c.so
tag_serial_driver: /opt/ros/galactic/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_c.so
tag_serial_driver: /opt/ros/galactic/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_introspection_cpp.so
tag_serial_driver: /opt/ros/galactic/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_cpp.so
tag_serial_driver: /opt/ros/galactic/lib/librcl.so
tag_serial_driver: /opt/ros/galactic/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so
tag_serial_driver: /opt/ros/galactic/lib/librcl_interfaces__rosidl_generator_c.so
tag_serial_driver: /opt/ros/galactic/lib/librcl_interfaces__rosidl_typesupport_c.so
tag_serial_driver: /opt/ros/galactic/lib/librcl_interfaces__rosidl_typesupport_introspection_cpp.so
tag_serial_driver: /opt/ros/galactic/lib/librcl_interfaces__rosidl_typesupport_cpp.so
tag_serial_driver: /opt/ros/galactic/lib/librmw_implementation.so
tag_serial_driver: /opt/ros/galactic/lib/librcl_logging_spdlog.so
tag_serial_driver: /opt/ros/galactic/lib/librcl_logging_interface.so
tag_serial_driver: /opt/ros/galactic/lib/librcl_yaml_param_parser.so
tag_serial_driver: /opt/ros/galactic/lib/librmw.so
tag_serial_driver: /opt/ros/galactic/lib/libyaml.so
tag_serial_driver: /opt/ros/galactic/lib/librosgraph_msgs__rosidl_typesupport_introspection_c.so
tag_serial_driver: /opt/ros/galactic/lib/librosgraph_msgs__rosidl_generator_c.so
tag_serial_driver: /opt/ros/galactic/lib/librosgraph_msgs__rosidl_typesupport_c.so
tag_serial_driver: /opt/ros/galactic/lib/librosgraph_msgs__rosidl_typesupport_introspection_cpp.so
tag_serial_driver: /opt/ros/galactic/lib/librosgraph_msgs__rosidl_typesupport_cpp.so
tag_serial_driver: /opt/ros/galactic/lib/libstatistics_msgs__rosidl_typesupport_introspection_c.so
tag_serial_driver: /opt/ros/galactic/lib/libstatistics_msgs__rosidl_generator_c.so
tag_serial_driver: /opt/ros/galactic/lib/libstatistics_msgs__rosidl_typesupport_c.so
tag_serial_driver: /opt/ros/galactic/lib/libstatistics_msgs__rosidl_typesupport_introspection_cpp.so
tag_serial_driver: /opt/ros/galactic/lib/libstatistics_msgs__rosidl_typesupport_cpp.so
tag_serial_driver: /opt/ros/galactic/lib/libtracetools.so
tag_serial_driver: /opt/ros/galactic/lib/libsensor_msgs__rosidl_generator_c.so
tag_serial_driver: /opt/ros/galactic/lib/libgeometry_msgs__rosidl_typesupport_introspection_c.so
tag_serial_driver: /opt/ros/galactic/lib/libgeometry_msgs__rosidl_generator_c.so
tag_serial_driver: /opt/ros/galactic/lib/libgeometry_msgs__rosidl_typesupport_c.so
tag_serial_driver: /opt/ros/galactic/lib/libgeometry_msgs__rosidl_typesupport_introspection_cpp.so
tag_serial_driver: /opt/ros/galactic/lib/libgeometry_msgs__rosidl_typesupport_cpp.so
tag_serial_driver: /opt/ros/galactic/lib/libcan_msgs__rosidl_generator_c.so
tag_serial_driver: /opt/ros/galactic/lib/libstd_msgs__rosidl_typesupport_introspection_c.so
tag_serial_driver: /opt/ros/galactic/lib/libstd_msgs__rosidl_generator_c.so
tag_serial_driver: /opt/ros/galactic/lib/libstd_msgs__rosidl_typesupport_c.so
tag_serial_driver: /opt/ros/galactic/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so
tag_serial_driver: /opt/ros/galactic/lib/libstd_msgs__rosidl_typesupport_cpp.so
tag_serial_driver: /opt/ros/galactic/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
tag_serial_driver: /opt/ros/galactic/lib/libbuiltin_interfaces__rosidl_generator_c.so
tag_serial_driver: /opt/ros/galactic/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
tag_serial_driver: /opt/ros/galactic/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
tag_serial_driver: /opt/ros/galactic/lib/librosidl_typesupport_introspection_cpp.so
tag_serial_driver: /opt/ros/galactic/lib/librosidl_typesupport_introspection_c.so
tag_serial_driver: /opt/ros/galactic/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
tag_serial_driver: /opt/ros/galactic/lib/librosidl_typesupport_cpp.so
tag_serial_driver: /opt/ros/galactic/lib/librosidl_typesupport_c.so
tag_serial_driver: /opt/ros/galactic/lib/librcpputils.so
tag_serial_driver: /opt/ros/galactic/lib/librosidl_runtime_c.so
tag_serial_driver: /opt/ros/galactic/lib/librcutils.so
tag_serial_driver: CMakeFiles/tag_serial_driver.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cityu/autoware/build/tamagawa_imu_driver/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tag_serial_driver"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tag_serial_driver.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tag_serial_driver.dir/build: tag_serial_driver

.PHONY : CMakeFiles/tag_serial_driver.dir/build

CMakeFiles/tag_serial_driver.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tag_serial_driver.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tag_serial_driver.dir/clean

CMakeFiles/tag_serial_driver.dir/depend:
	cd /home/cityu/autoware/build/tamagawa_imu_driver && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cityu/autoware/src/sensor_component/external/tamagawa_imu_driver /home/cityu/autoware/src/sensor_component/external/tamagawa_imu_driver /home/cityu/autoware/build/tamagawa_imu_driver /home/cityu/autoware/build/tamagawa_imu_driver /home/cityu/autoware/build/tamagawa_imu_driver/CMakeFiles/tag_serial_driver.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tag_serial_driver.dir/depend

