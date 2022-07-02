cmake_minimum_required(VERSION 3.14)
project(my_project)

# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE Debug)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(task_test task_test.cpp)

add_library(task task.cpp)

target_link_libraries(task_test task gtest_main)

include(GoogleTest)
gtest_discover_tests(task_test)
