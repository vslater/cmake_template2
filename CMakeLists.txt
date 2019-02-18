cmake_minimum_required(VERSION 2.4)

set (CMAKE_CXX_STANDARD 11)

project(hello_world)

include_directories(${PROJECT_SOURCE_DIR})
add_executable(app main.cpp foo.cpp)  # be sure there's exactly one main() function in the source files

link_directories(${PROJECT_SOURCE_DIR}/libs)                # Add all your libraries in this folder, don't add subfolders

# When you add a new library insert it here without the -l flag: for example gtest will be -lgtest
#target_link_libraries(tests gtest)

include_directories(include /source)  # Insert all sources and includes in the subdirectories,
                                      # for example look gtest in the named directories

enable_testing()
add_executable(runUnitTests test.cpp foo.cpp)
target_link_libraries(runUnitTests gtest gtest_main)
add_test(
    NAME runUnitTests
    COMMAND runUnitTests
)