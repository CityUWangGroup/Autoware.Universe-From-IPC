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
CMAKE_SOURCE_DIR = /home/cityu/autoware/src/universe/autoware.universe/common/tvm_utility

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cityu/autoware/build/tvm_utility

# Utility rule file for yolo_v2_tiny_llvm.

# Include the progress variables for this target.
include CMakeFiles/yolo_v2_tiny_llvm.dir/progress.make

CMakeFiles/yolo_v2_tiny_llvm: CMakeFiles/yolo_v2_tiny_llvm-complete


CMakeFiles/yolo_v2_tiny_llvm-complete: yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-install
CMakeFiles/yolo_v2_tiny_llvm-complete: yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-mkdir
CMakeFiles/yolo_v2_tiny_llvm-complete: yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-download
CMakeFiles/yolo_v2_tiny_llvm-complete: yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-update
CMakeFiles/yolo_v2_tiny_llvm-complete: yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-patch
CMakeFiles/yolo_v2_tiny_llvm-complete: yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-configure
CMakeFiles/yolo_v2_tiny_llvm-complete: yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-build
CMakeFiles/yolo_v2_tiny_llvm-complete: yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-install
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/cityu/autoware/build/tvm_utility/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'yolo_v2_tiny_llvm'"
	/usr/bin/cmake -E make_directory /home/cityu/autoware/build/tvm_utility/CMakeFiles
	/usr/bin/cmake -E touch /home/cityu/autoware/build/tvm_utility/CMakeFiles/yolo_v2_tiny_llvm-complete
	/usr/bin/cmake -E touch /home/cityu/autoware/build/tvm_utility/yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-done

yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-install: yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-build
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/cityu/autoware/build/tvm_utility/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "No install step for 'yolo_v2_tiny_llvm'"
	cd /home/cityu/autoware/build/tvm_utility/yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-build && /usr/bin/cmake -E echo_append
	cd /home/cityu/autoware/build/tvm_utility/yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-build && /usr/bin/cmake -E touch /home/cityu/autoware/build/tvm_utility/yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-install

yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/cityu/autoware/build/tvm_utility/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Creating directories for 'yolo_v2_tiny_llvm'"
	/usr/bin/cmake -E make_directory /home/cityu/autoware/src/universe/autoware.universe/common/tvm_utility/data/models/yolo_v2_tiny
	/usr/bin/cmake -E make_directory /home/cityu/autoware/build/tvm_utility/yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-build
	/usr/bin/cmake -E make_directory /home/cityu/autoware/build/tvm_utility/yolo_v2_tiny_llvm-prefix
	/usr/bin/cmake -E make_directory /home/cityu/autoware/build/tvm_utility/yolo_v2_tiny_llvm-prefix/tmp
	/usr/bin/cmake -E make_directory /home/cityu/autoware/build/tvm_utility/yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp
	/usr/bin/cmake -E make_directory /home/cityu/autoware/src/universe/autoware.universe/common/tvm_utility/data/downloads
	/usr/bin/cmake -E make_directory /home/cityu/autoware/build/tvm_utility/yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp
	/usr/bin/cmake -E touch /home/cityu/autoware/build/tvm_utility/yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-mkdir

yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-download: yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-urlinfo.txt
yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-download: yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/cityu/autoware/build/tvm_utility/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (verify and extract) for 'yolo_v2_tiny_llvm'"
	cd /home/cityu/autoware/src/universe/autoware.universe/common/tvm_utility/data/models && /usr/bin/cmake -P /home/cityu/autoware/build/tvm_utility/yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/verify-yolo_v2_tiny_llvm.cmake
	cd /home/cityu/autoware/src/universe/autoware.universe/common/tvm_utility/data/models && /usr/bin/cmake -P /home/cityu/autoware/build/tvm_utility/yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/extract-yolo_v2_tiny_llvm.cmake
	cd /home/cityu/autoware/src/universe/autoware.universe/common/tvm_utility/data/models && /usr/bin/cmake -E touch /home/cityu/autoware/build/tvm_utility/yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-download

yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-update: yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/cityu/autoware/build/tvm_utility/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "No update step for 'yolo_v2_tiny_llvm'"
	/usr/bin/cmake -E echo_append
	/usr/bin/cmake -E touch /home/cityu/autoware/build/tvm_utility/yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-update

yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-patch: yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/cityu/autoware/build/tvm_utility/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "No patch step for 'yolo_v2_tiny_llvm'"
	/usr/bin/cmake -E echo_append
	/usr/bin/cmake -E touch /home/cityu/autoware/build/tvm_utility/yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-patch

yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-configure: yolo_v2_tiny_llvm-prefix/tmp/yolo_v2_tiny_llvm-cfgcmd.txt
yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-configure: yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-update
yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-configure: yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/cityu/autoware/build/tvm_utility/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "No configure step for 'yolo_v2_tiny_llvm'"
	cd /home/cityu/autoware/build/tvm_utility/yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-build && /usr/bin/cmake -E echo_append
	cd /home/cityu/autoware/build/tvm_utility/yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-build && /usr/bin/cmake -E touch /home/cityu/autoware/build/tvm_utility/yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-configure

yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-build: yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/cityu/autoware/build/tvm_utility/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "No build step for 'yolo_v2_tiny_llvm'"
	cd /home/cityu/autoware/build/tvm_utility/yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-build && /usr/bin/cmake -E echo_append
	cd /home/cityu/autoware/build/tvm_utility/yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-build && /usr/bin/cmake -E touch /home/cityu/autoware/build/tvm_utility/yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-build

yolo_v2_tiny_llvm: CMakeFiles/yolo_v2_tiny_llvm
yolo_v2_tiny_llvm: CMakeFiles/yolo_v2_tiny_llvm-complete
yolo_v2_tiny_llvm: yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-install
yolo_v2_tiny_llvm: yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-mkdir
yolo_v2_tiny_llvm: yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-download
yolo_v2_tiny_llvm: yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-update
yolo_v2_tiny_llvm: yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-patch
yolo_v2_tiny_llvm: yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-configure
yolo_v2_tiny_llvm: yolo_v2_tiny_llvm-prefix/src/yolo_v2_tiny_llvm-stamp/yolo_v2_tiny_llvm-build
yolo_v2_tiny_llvm: CMakeFiles/yolo_v2_tiny_llvm.dir/build.make

.PHONY : yolo_v2_tiny_llvm

# Rule to build all files generated by this target.
CMakeFiles/yolo_v2_tiny_llvm.dir/build: yolo_v2_tiny_llvm

.PHONY : CMakeFiles/yolo_v2_tiny_llvm.dir/build

CMakeFiles/yolo_v2_tiny_llvm.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/yolo_v2_tiny_llvm.dir/cmake_clean.cmake
.PHONY : CMakeFiles/yolo_v2_tiny_llvm.dir/clean

CMakeFiles/yolo_v2_tiny_llvm.dir/depend:
	cd /home/cityu/autoware/build/tvm_utility && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cityu/autoware/src/universe/autoware.universe/common/tvm_utility /home/cityu/autoware/src/universe/autoware.universe/common/tvm_utility /home/cityu/autoware/build/tvm_utility /home/cityu/autoware/build/tvm_utility /home/cityu/autoware/build/tvm_utility/CMakeFiles/yolo_v2_tiny_llvm.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/yolo_v2_tiny_llvm.dir/depend
