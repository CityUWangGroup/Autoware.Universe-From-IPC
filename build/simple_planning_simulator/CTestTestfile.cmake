# CMake generated Testfile for 
# Source directory: /home/cityu/autoware/src/universe/autoware.universe/simulator/simple_planning_simulator
# Build directory: /home/cityu/autoware/build/simple_planning_simulator
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_simple_planning_simulator "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_ros/cmake/run_test_isolated.py" "/home/cityu/autoware/build/simple_planning_simulator/test_results/simple_planning_simulator/test_simple_planning_simulator.gtest.xml" "--package-name" "simple_planning_simulator" "--output-file" "/home/cityu/autoware/build/simple_planning_simulator/ament_cmake_gtest/test_simple_planning_simulator.txt" "--command" "/home/cityu/autoware/build/simple_planning_simulator/test_simple_planning_simulator" "--gtest_output=xml:/home/cityu/autoware/build/simple_planning_simulator/test_results/simple_planning_simulator/test_simple_planning_simulator.gtest.xml")
set_tests_properties(test_simple_planning_simulator PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/cityu/autoware/build/simple_planning_simulator/test_simple_planning_simulator" TIMEOUT "120" WORKING_DIRECTORY "/home/cityu/autoware/build/simple_planning_simulator" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/opt/ros/galactic/share/ament_cmake_ros/cmake/ament_add_ros_isolated_gtest.cmake;33;ament_add_gtest;/home/cityu/autoware/src/universe/autoware.universe/simulator/simple_planning_simulator/CMakeLists.txt;31;ament_add_ros_isolated_gtest;/home/cityu/autoware/src/universe/autoware.universe/simulator/simple_planning_simulator/CMakeLists.txt;0;")
add_test(copyright "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/cityu/autoware/build/simple_planning_simulator/test_results/simple_planning_simulator/copyright.xunit.xml" "--package-name" "simple_planning_simulator" "--output-file" "/home/cityu/autoware/build/simple_planning_simulator/ament_copyright/copyright.txt" "--command" "/opt/ros/galactic/bin/ament_copyright" "--xunit-file" "/home/cityu/autoware/build/simple_planning_simulator/test_results/simple_planning_simulator/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/cityu/autoware/src/universe/autoware.universe/simulator/simple_planning_simulator" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_copyright/cmake/ament_copyright.cmake;46;ament_add_test;/opt/ros/galactic/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;18;ament_copyright;/opt/ros/galactic/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/opt/ros/galactic/share/ament_cmake_auto/cmake/ament_auto_package.cmake;102;ament_package;/home/cityu/autoware/src/universe/autoware.universe/simulator/simple_planning_simulator/CMakeLists.txt;41;ament_auto_package;/home/cityu/autoware/src/universe/autoware.universe/simulator/simple_planning_simulator/CMakeLists.txt;0;")
add_test(cppcheck "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/cityu/autoware/build/simple_planning_simulator/test_results/simple_planning_simulator/cppcheck.xunit.xml" "--package-name" "simple_planning_simulator" "--output-file" "/home/cityu/autoware/build/simple_planning_simulator/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/galactic/bin/ament_cppcheck" "--xunit-file" "/home/cityu/autoware/build/simple_planning_simulator/test_results/simple_planning_simulator/cppcheck.xunit.xml" "--include_dirs" "/home/cityu/autoware/src/universe/autoware.universe/simulator/simple_planning_simulator/include")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "300" WORKING_DIRECTORY "/home/cityu/autoware/src/universe/autoware.universe/simulator/simple_planning_simulator" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_cppcheck/cmake/ament_cppcheck.cmake;61;ament_add_test;/opt/ros/galactic/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;83;ament_cppcheck;/opt/ros/galactic/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/opt/ros/galactic/share/ament_cmake_auto/cmake/ament_auto_package.cmake;102;ament_package;/home/cityu/autoware/src/universe/autoware.universe/simulator/simple_planning_simulator/CMakeLists.txt;41;ament_auto_package;/home/cityu/autoware/src/universe/autoware.universe/simulator/simple_planning_simulator/CMakeLists.txt;0;")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/cityu/autoware/build/simple_planning_simulator/test_results/simple_planning_simulator/lint_cmake.xunit.xml" "--package-name" "simple_planning_simulator" "--output-file" "/home/cityu/autoware/build/simple_planning_simulator/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/galactic/bin/ament_lint_cmake" "--xunit-file" "/home/cityu/autoware/build/simple_planning_simulator/test_results/simple_planning_simulator/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/cityu/autoware/src/universe/autoware.universe/simulator/simple_planning_simulator" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;47;ament_add_test;/opt/ros/galactic/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/opt/ros/galactic/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/opt/ros/galactic/share/ament_cmake_auto/cmake/ament_auto_package.cmake;102;ament_package;/home/cityu/autoware/src/universe/autoware.universe/simulator/simple_planning_simulator/CMakeLists.txt;41;ament_auto_package;/home/cityu/autoware/src/universe/autoware.universe/simulator/simple_planning_simulator/CMakeLists.txt;0;")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/cityu/autoware/build/simple_planning_simulator/test_results/simple_planning_simulator/xmllint.xunit.xml" "--package-name" "simple_planning_simulator" "--output-file" "/home/cityu/autoware/build/simple_planning_simulator/ament_xmllint/xmllint.txt" "--command" "/opt/ros/galactic/bin/ament_xmllint" "--xunit-file" "/home/cityu/autoware/build/simple_planning_simulator/test_results/simple_planning_simulator/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/cityu/autoware/src/universe/autoware.universe/simulator/simple_planning_simulator" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/opt/ros/galactic/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/opt/ros/galactic/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/opt/ros/galactic/share/ament_cmake_auto/cmake/ament_auto_package.cmake;102;ament_package;/home/cityu/autoware/src/universe/autoware.universe/simulator/simple_planning_simulator/CMakeLists.txt;41;ament_auto_package;/home/cityu/autoware/src/universe/autoware.universe/simulator/simple_planning_simulator/CMakeLists.txt;0;")
subdirs("gtest")
