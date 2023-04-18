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
CMAKE_SOURCE_DIR = /home/cityu/autoware/src/universe/autoware.universe/perception/lidar_centerpoint_tvm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cityu/autoware/build/lidar_centerpoint_tvm

# Utility rule file for centerpoint_encoder_llvm.

# Include the progress variables for this target.
include CMakeFiles/centerpoint_encoder_llvm.dir/progress.make

CMakeFiles/centerpoint_encoder_llvm: CMakeFiles/centerpoint_encoder_llvm-complete


CMakeFiles/centerpoint_encoder_llvm-complete: centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-install
CMakeFiles/centerpoint_encoder_llvm-complete: centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-mkdir
CMakeFiles/centerpoint_encoder_llvm-complete: centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-download
CMakeFiles/centerpoint_encoder_llvm-complete: centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-update
CMakeFiles/centerpoint_encoder_llvm-complete: centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-patch
CMakeFiles/centerpoint_encoder_llvm-complete: centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-configure
CMakeFiles/centerpoint_encoder_llvm-complete: centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-build
CMakeFiles/centerpoint_encoder_llvm-complete: centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-install
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/cityu/autoware/build/lidar_centerpoint_tvm/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'centerpoint_encoder_llvm'"
	/usr/bin/cmake -E make_directory /home/cityu/autoware/build/lidar_centerpoint_tvm/CMakeFiles
	/usr/bin/cmake -E touch /home/cityu/autoware/build/lidar_centerpoint_tvm/CMakeFiles/centerpoint_encoder_llvm-complete
	/usr/bin/cmake -E touch /home/cityu/autoware/build/lidar_centerpoint_tvm/centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-done

centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-install: centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-build
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/cityu/autoware/build/lidar_centerpoint_tvm/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "No install step for 'centerpoint_encoder_llvm'"
	cd /home/cityu/autoware/build/lidar_centerpoint_tvm/centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-build && /usr/bin/cmake -E echo_append
	cd /home/cityu/autoware/build/lidar_centerpoint_tvm/centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-build && /usr/bin/cmake -E touch /home/cityu/autoware/build/lidar_centerpoint_tvm/centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-install

centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/cityu/autoware/build/lidar_centerpoint_tvm/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Creating directories for 'centerpoint_encoder_llvm'"
	/usr/bin/cmake -E make_directory /home/cityu/autoware/src/universe/autoware.universe/perception/lidar_centerpoint_tvm/data/models/centerpoint_encoder
	/usr/bin/cmake -E make_directory /home/cityu/autoware/build/lidar_centerpoint_tvm/centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-build
	/usr/bin/cmake -E make_directory /home/cityu/autoware/build/lidar_centerpoint_tvm/centerpoint_encoder_llvm-prefix
	/usr/bin/cmake -E make_directory /home/cityu/autoware/build/lidar_centerpoint_tvm/centerpoint_encoder_llvm-prefix/tmp
	/usr/bin/cmake -E make_directory /home/cityu/autoware/build/lidar_centerpoint_tvm/centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp
	/usr/bin/cmake -E make_directory /home/cityu/autoware/src/universe/autoware.universe/perception/lidar_centerpoint_tvm/data/downloads
	/usr/bin/cmake -E make_directory /home/cityu/autoware/build/lidar_centerpoint_tvm/centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp
	/usr/bin/cmake -E touch /home/cityu/autoware/build/lidar_centerpoint_tvm/centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-mkdir

centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-download: centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-urlinfo.txt
centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-download: centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/cityu/autoware/build/lidar_centerpoint_tvm/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (download, verify and extract) for 'centerpoint_encoder_llvm'"
	cd /home/cityu/autoware/src/universe/autoware.universe/perception/lidar_centerpoint_tvm/data/models && /usr/bin/cmake -P /home/cityu/autoware/build/lidar_centerpoint_tvm/centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/download-centerpoint_encoder_llvm.cmake
	cd /home/cityu/autoware/src/universe/autoware.universe/perception/lidar_centerpoint_tvm/data/models && /usr/bin/cmake -P /home/cityu/autoware/build/lidar_centerpoint_tvm/centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/verify-centerpoint_encoder_llvm.cmake
	cd /home/cityu/autoware/src/universe/autoware.universe/perception/lidar_centerpoint_tvm/data/models && /usr/bin/cmake -P /home/cityu/autoware/build/lidar_centerpoint_tvm/centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/extract-centerpoint_encoder_llvm.cmake
	cd /home/cityu/autoware/src/universe/autoware.universe/perception/lidar_centerpoint_tvm/data/models && /usr/bin/cmake -E touch /home/cityu/autoware/build/lidar_centerpoint_tvm/centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-download

centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-update: centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/cityu/autoware/build/lidar_centerpoint_tvm/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "No update step for 'centerpoint_encoder_llvm'"
	/usr/bin/cmake -E echo_append
	/usr/bin/cmake -E touch /home/cityu/autoware/build/lidar_centerpoint_tvm/centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-update

centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-patch: centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/cityu/autoware/build/lidar_centerpoint_tvm/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "No patch step for 'centerpoint_encoder_llvm'"
	/usr/bin/cmake -E echo_append
	/usr/bin/cmake -E touch /home/cityu/autoware/build/lidar_centerpoint_tvm/centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-patch

centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-configure: centerpoint_encoder_llvm-prefix/tmp/centerpoint_encoder_llvm-cfgcmd.txt
centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-configure: centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-update
centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-configure: centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/cityu/autoware/build/lidar_centerpoint_tvm/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "No configure step for 'centerpoint_encoder_llvm'"
	cd /home/cityu/autoware/build/lidar_centerpoint_tvm/centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-build && /usr/bin/cmake -E echo_append
	cd /home/cityu/autoware/build/lidar_centerpoint_tvm/centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-build && /usr/bin/cmake -E touch /home/cityu/autoware/build/lidar_centerpoint_tvm/centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-configure

centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-build: centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/cityu/autoware/build/lidar_centerpoint_tvm/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "No build step for 'centerpoint_encoder_llvm'"
	cd /home/cityu/autoware/build/lidar_centerpoint_tvm/centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-build && /usr/bin/cmake -E echo_append
	cd /home/cityu/autoware/build/lidar_centerpoint_tvm/centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-build && /usr/bin/cmake -E touch /home/cityu/autoware/build/lidar_centerpoint_tvm/centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-build

centerpoint_encoder_llvm: CMakeFiles/centerpoint_encoder_llvm
centerpoint_encoder_llvm: CMakeFiles/centerpoint_encoder_llvm-complete
centerpoint_encoder_llvm: centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-install
centerpoint_encoder_llvm: centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-mkdir
centerpoint_encoder_llvm: centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-download
centerpoint_encoder_llvm: centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-update
centerpoint_encoder_llvm: centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-patch
centerpoint_encoder_llvm: centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-configure
centerpoint_encoder_llvm: centerpoint_encoder_llvm-prefix/src/centerpoint_encoder_llvm-stamp/centerpoint_encoder_llvm-build
centerpoint_encoder_llvm: CMakeFiles/centerpoint_encoder_llvm.dir/build.make

.PHONY : centerpoint_encoder_llvm

# Rule to build all files generated by this target.
CMakeFiles/centerpoint_encoder_llvm.dir/build: centerpoint_encoder_llvm

.PHONY : CMakeFiles/centerpoint_encoder_llvm.dir/build

CMakeFiles/centerpoint_encoder_llvm.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/centerpoint_encoder_llvm.dir/cmake_clean.cmake
.PHONY : CMakeFiles/centerpoint_encoder_llvm.dir/clean

CMakeFiles/centerpoint_encoder_llvm.dir/depend:
	cd /home/cityu/autoware/build/lidar_centerpoint_tvm && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cityu/autoware/src/universe/autoware.universe/perception/lidar_centerpoint_tvm /home/cityu/autoware/src/universe/autoware.universe/perception/lidar_centerpoint_tvm /home/cityu/autoware/build/lidar_centerpoint_tvm /home/cityu/autoware/build/lidar_centerpoint_tvm /home/cityu/autoware/build/lidar_centerpoint_tvm/CMakeFiles/centerpoint_encoder_llvm.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/centerpoint_encoder_llvm.dir/depend

