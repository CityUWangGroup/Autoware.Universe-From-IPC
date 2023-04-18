# CMake generated Testfile for 
# Source directory: /home/cityu/autoware/src/universe/external/grid_map/grid_map_cv
# Build directory: /home/cityu/autoware/build/grid_map_cv
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(cpplint "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/cityu/autoware/build/grid_map_cv/test_results/grid_map_cv/cpplint.xunit.xml" "--package-name" "grid_map_cv" "--output-file" "/home/cityu/autoware/build/grid_map_cv/ament_cpplint/cpplint.txt" "--command" "/opt/ros/galactic/bin/ament_cpplint" "--xunit-file" "/home/cityu/autoware/build/grid_map_cv/test_results/grid_map_cv/cpplint.xunit.xml" "--filters=-legal/copyright")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/cityu/autoware/src/universe/external/grid_map/grid_map_cv" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_cpplint/cmake/ament_cpplint.cmake;68;ament_add_test;/home/cityu/autoware/src/universe/external/grid_map/grid_map_cv/CMakeLists.txt;98;ament_cpplint;/home/cityu/autoware/src/universe/external/grid_map/grid_map_cv/CMakeLists.txt;0;")
add_test(grid_map_cv-test "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/cityu/autoware/build/grid_map_cv/test_results/grid_map_cv/grid_map_cv-test.gtest.xml" "--package-name" "grid_map_cv" "--output-file" "/home/cityu/autoware/build/grid_map_cv/ament_cmake_gtest/grid_map_cv-test.txt" "--command" "/home/cityu/autoware/build/grid_map_cv/grid_map_cv-test" "--gtest_output=xml:/home/cityu/autoware/build/grid_map_cv/test_results/grid_map_cv/grid_map_cv-test.gtest.xml")
set_tests_properties(grid_map_cv-test PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/cityu/autoware/build/grid_map_cv/grid_map_cv-test" TIMEOUT "60" WORKING_DIRECTORY "/home/cityu/autoware/build/grid_map_cv" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/galactic/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/cityu/autoware/src/universe/external/grid_map/grid_map_cv/CMakeLists.txt;107;ament_add_gtest;/home/cityu/autoware/src/universe/external/grid_map/grid_map_cv/CMakeLists.txt;0;")
add_test(cppcheck "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/cityu/autoware/build/grid_map_cv/test_results/grid_map_cv/cppcheck.xunit.xml" "--package-name" "grid_map_cv" "--output-file" "/home/cityu/autoware/build/grid_map_cv/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/galactic/bin/ament_cppcheck" "--xunit-file" "/home/cityu/autoware/build/grid_map_cv/test_results/grid_map_cv/cppcheck.xunit.xml" "--include_dirs" "/home/cityu/autoware/src/universe/external/grid_map/grid_map_cv/include")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "300" WORKING_DIRECTORY "/home/cityu/autoware/src/universe/external/grid_map/grid_map_cv" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_cppcheck/cmake/ament_cppcheck.cmake;61;ament_add_test;/opt/ros/galactic/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;83;ament_cppcheck;/opt/ros/galactic/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/cityu/autoware/src/universe/external/grid_map/grid_map_cv/CMakeLists.txt;122;ament_package;/home/cityu/autoware/src/universe/external/grid_map/grid_map_cv/CMakeLists.txt;0;")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/cityu/autoware/build/grid_map_cv/test_results/grid_map_cv/lint_cmake.xunit.xml" "--package-name" "grid_map_cv" "--output-file" "/home/cityu/autoware/build/grid_map_cv/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/galactic/bin/ament_lint_cmake" "--xunit-file" "/home/cityu/autoware/build/grid_map_cv/test_results/grid_map_cv/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/cityu/autoware/src/universe/external/grid_map/grid_map_cv" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;47;ament_add_test;/opt/ros/galactic/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/opt/ros/galactic/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/cityu/autoware/src/universe/external/grid_map/grid_map_cv/CMakeLists.txt;122;ament_package;/home/cityu/autoware/src/universe/external/grid_map/grid_map_cv/CMakeLists.txt;0;")
add_test(uncrustify "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/cityu/autoware/build/grid_map_cv/test_results/grid_map_cv/uncrustify.xunit.xml" "--package-name" "grid_map_cv" "--output-file" "/home/cityu/autoware/build/grid_map_cv/ament_uncrustify/uncrustify.txt" "--command" "/opt/ros/galactic/bin/ament_uncrustify" "--xunit-file" "/home/cityu/autoware/build/grid_map_cv/test_results/grid_map_cv/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/cityu/autoware/src/universe/external/grid_map/grid_map_cv" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_uncrustify/cmake/ament_uncrustify.cmake;65;ament_add_test;/opt/ros/galactic/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;34;ament_uncrustify;/opt/ros/galactic/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/cityu/autoware/src/universe/external/grid_map/grid_map_cv/CMakeLists.txt;122;ament_package;/home/cityu/autoware/src/universe/external/grid_map/grid_map_cv/CMakeLists.txt;0;")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/cityu/autoware/build/grid_map_cv/test_results/grid_map_cv/xmllint.xunit.xml" "--package-name" "grid_map_cv" "--output-file" "/home/cityu/autoware/build/grid_map_cv/ament_xmllint/xmllint.txt" "--command" "/opt/ros/galactic/bin/ament_xmllint" "--xunit-file" "/home/cityu/autoware/build/grid_map_cv/test_results/grid_map_cv/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/cityu/autoware/src/universe/external/grid_map/grid_map_cv" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/opt/ros/galactic/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/opt/ros/galactic/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/cityu/autoware/src/universe/external/grid_map/grid_map_cv/CMakeLists.txt;122;ament_package;/home/cityu/autoware/src/universe/external/grid_map/grid_map_cv/CMakeLists.txt;0;")
subdirs("gtest")
