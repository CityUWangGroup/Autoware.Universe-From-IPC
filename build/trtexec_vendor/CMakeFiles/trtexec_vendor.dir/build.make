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
CMAKE_SOURCE_DIR = /home/cityu/autoware/src/universe/autoware.universe/common/trtexec_vendor

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cityu/autoware/build/trtexec_vendor

# Include any dependencies generated for this target.
include CMakeFiles/trtexec_vendor.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/trtexec_vendor.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/trtexec_vendor.dir/flags.make

CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/trtexec/trtexec.cpp.o: CMakeFiles/trtexec_vendor.dir/flags.make
CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/trtexec/trtexec.cpp.o: _deps/tensorrt-src/samples/trtexec/trtexec.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cityu/autoware/build/trtexec_vendor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/trtexec/trtexec.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/trtexec/trtexec.cpp.o -c /home/cityu/autoware/build/trtexec_vendor/_deps/tensorrt-src/samples/trtexec/trtexec.cpp

CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/trtexec/trtexec.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/trtexec/trtexec.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cityu/autoware/build/trtexec_vendor/_deps/tensorrt-src/samples/trtexec/trtexec.cpp > CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/trtexec/trtexec.cpp.i

CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/trtexec/trtexec.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/trtexec/trtexec.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cityu/autoware/build/trtexec_vendor/_deps/tensorrt-src/samples/trtexec/trtexec.cpp -o CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/trtexec/trtexec.cpp.s

CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleEngines.cpp.o: CMakeFiles/trtexec_vendor.dir/flags.make
CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleEngines.cpp.o: _deps/tensorrt-src/samples/common/sampleEngines.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cityu/autoware/build/trtexec_vendor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleEngines.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleEngines.cpp.o -c /home/cityu/autoware/build/trtexec_vendor/_deps/tensorrt-src/samples/common/sampleEngines.cpp

CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleEngines.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleEngines.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cityu/autoware/build/trtexec_vendor/_deps/tensorrt-src/samples/common/sampleEngines.cpp > CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleEngines.cpp.i

CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleEngines.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleEngines.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cityu/autoware/build/trtexec_vendor/_deps/tensorrt-src/samples/common/sampleEngines.cpp -o CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleEngines.cpp.s

CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleInference.cpp.o: CMakeFiles/trtexec_vendor.dir/flags.make
CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleInference.cpp.o: _deps/tensorrt-src/samples/common/sampleInference.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cityu/autoware/build/trtexec_vendor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleInference.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleInference.cpp.o -c /home/cityu/autoware/build/trtexec_vendor/_deps/tensorrt-src/samples/common/sampleInference.cpp

CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleInference.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleInference.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cityu/autoware/build/trtexec_vendor/_deps/tensorrt-src/samples/common/sampleInference.cpp > CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleInference.cpp.i

CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleInference.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleInference.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cityu/autoware/build/trtexec_vendor/_deps/tensorrt-src/samples/common/sampleInference.cpp -o CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleInference.cpp.s

CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleOptions.cpp.o: CMakeFiles/trtexec_vendor.dir/flags.make
CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleOptions.cpp.o: _deps/tensorrt-src/samples/common/sampleOptions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cityu/autoware/build/trtexec_vendor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleOptions.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleOptions.cpp.o -c /home/cityu/autoware/build/trtexec_vendor/_deps/tensorrt-src/samples/common/sampleOptions.cpp

CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleOptions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleOptions.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cityu/autoware/build/trtexec_vendor/_deps/tensorrt-src/samples/common/sampleOptions.cpp > CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleOptions.cpp.i

CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleOptions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleOptions.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cityu/autoware/build/trtexec_vendor/_deps/tensorrt-src/samples/common/sampleOptions.cpp -o CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleOptions.cpp.s

CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleReporting.cpp.o: CMakeFiles/trtexec_vendor.dir/flags.make
CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleReporting.cpp.o: _deps/tensorrt-src/samples/common/sampleReporting.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cityu/autoware/build/trtexec_vendor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleReporting.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleReporting.cpp.o -c /home/cityu/autoware/build/trtexec_vendor/_deps/tensorrt-src/samples/common/sampleReporting.cpp

CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleReporting.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleReporting.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cityu/autoware/build/trtexec_vendor/_deps/tensorrt-src/samples/common/sampleReporting.cpp > CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleReporting.cpp.i

CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleReporting.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleReporting.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cityu/autoware/build/trtexec_vendor/_deps/tensorrt-src/samples/common/sampleReporting.cpp -o CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleReporting.cpp.s

CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/logger.cpp.o: CMakeFiles/trtexec_vendor.dir/flags.make
CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/logger.cpp.o: _deps/tensorrt-src/samples/common/logger.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cityu/autoware/build/trtexec_vendor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/logger.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/logger.cpp.o -c /home/cityu/autoware/build/trtexec_vendor/_deps/tensorrt-src/samples/common/logger.cpp

CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/logger.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/logger.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cityu/autoware/build/trtexec_vendor/_deps/tensorrt-src/samples/common/logger.cpp > CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/logger.cpp.i

CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/logger.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/logger.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cityu/autoware/build/trtexec_vendor/_deps/tensorrt-src/samples/common/logger.cpp -o CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/logger.cpp.s

CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleUtils.cpp.o: CMakeFiles/trtexec_vendor.dir/flags.make
CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleUtils.cpp.o: _deps/tensorrt-src/samples/common/sampleUtils.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cityu/autoware/build/trtexec_vendor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleUtils.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleUtils.cpp.o -c /home/cityu/autoware/build/trtexec_vendor/_deps/tensorrt-src/samples/common/sampleUtils.cpp

CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleUtils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleUtils.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cityu/autoware/build/trtexec_vendor/_deps/tensorrt-src/samples/common/sampleUtils.cpp > CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleUtils.cpp.i

CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleUtils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleUtils.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cityu/autoware/build/trtexec_vendor/_deps/tensorrt-src/samples/common/sampleUtils.cpp -o CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleUtils.cpp.s

# Object files for target trtexec_vendor
trtexec_vendor_OBJECTS = \
"CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/trtexec/trtexec.cpp.o" \
"CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleEngines.cpp.o" \
"CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleInference.cpp.o" \
"CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleOptions.cpp.o" \
"CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleReporting.cpp.o" \
"CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/logger.cpp.o" \
"CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleUtils.cpp.o"

# External object files for target trtexec_vendor
trtexec_vendor_EXTERNAL_OBJECTS =

trtexec: CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/trtexec/trtexec.cpp.o
trtexec: CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleEngines.cpp.o
trtexec: CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleInference.cpp.o
trtexec: CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleOptions.cpp.o
trtexec: CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleReporting.cpp.o
trtexec: CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/logger.cpp.o
trtexec: CMakeFiles/trtexec_vendor.dir/_deps/tensorrt-src/samples/common/sampleUtils.cpp.o
trtexec: CMakeFiles/trtexec_vendor.dir/build.make
trtexec: /usr/local/cuda/lib64/libcudart_static.a
trtexec: /usr/lib/x86_64-linux-gnu/librt.so
trtexec: /usr/lib/x86_64-linux-gnu/libnvinfer.so
trtexec: /usr/lib/x86_64-linux-gnu/libnvinfer_plugin.so
trtexec: /usr/lib/x86_64-linux-gnu/libnvparsers.so
trtexec: /usr/lib/x86_64-linux-gnu/libnvonnxparser.so
trtexec: CMakeFiles/trtexec_vendor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cityu/autoware/build/trtexec_vendor/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable trtexec"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/trtexec_vendor.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/trtexec_vendor.dir/build: trtexec

.PHONY : CMakeFiles/trtexec_vendor.dir/build

CMakeFiles/trtexec_vendor.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/trtexec_vendor.dir/cmake_clean.cmake
.PHONY : CMakeFiles/trtexec_vendor.dir/clean

CMakeFiles/trtexec_vendor.dir/depend:
	cd /home/cityu/autoware/build/trtexec_vendor && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cityu/autoware/src/universe/autoware.universe/common/trtexec_vendor /home/cityu/autoware/src/universe/autoware.universe/common/trtexec_vendor /home/cityu/autoware/build/trtexec_vendor /home/cityu/autoware/build/trtexec_vendor /home/cityu/autoware/build/trtexec_vendor/CMakeFiles/trtexec_vendor.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/trtexec_vendor.dir/depend

