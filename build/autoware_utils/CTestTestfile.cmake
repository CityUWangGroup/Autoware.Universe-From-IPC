# CMake generated Testfile for 
# Source directory: /home/cityu/autoware/src/core/autoware_common/autoware_utils
# Build directory: /home/cityu/autoware/build/autoware_utils
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_autoware_utils "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_ros/cmake/run_test_isolated.py" "/home/cityu/autoware/build/autoware_utils/test_results/autoware_utils/test_autoware_utils.gtest.xml" "--package-name" "autoware_utils" "--output-file" "/home/cityu/autoware/build/autoware_utils/ament_cmake_gtest/test_autoware_utils.txt" "--command" "/home/cityu/autoware/build/autoware_utils/test_autoware_utils" "--gtest_output=xml:/home/cityu/autoware/build/autoware_utils/test_results/autoware_utils/test_autoware_utils.gtest.xml")
set_tests_properties(test_autoware_utils PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/cityu/autoware/build/autoware_utils/test_autoware_utils" TIMEOUT "60" WORKING_DIRECTORY "/home/cityu/autoware/build/autoware_utils" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/opt/ros/galactic/share/ament_cmake_ros/cmake/ament_add_ros_isolated_gtest.cmake;33;ament_add_gtest;/home/cityu/autoware/src/core/autoware_common/autoware_utils/CMakeLists.txt;13;ament_add_ros_isolated_gtest;/home/cityu/autoware/src/core/autoware_common/autoware_utils/CMakeLists.txt;0;")
subdirs("gtest")
