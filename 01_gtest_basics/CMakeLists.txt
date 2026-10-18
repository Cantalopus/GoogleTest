cmake_minimum_required(VERSION 3.24)
project(GoogleTestBasics LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(FetchContent)

FetchContent_declare(
    googletest 
    URL
    https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

FetchContent_MakeAvailable(googletest)

add_executable(basic_test basic_test.cpp)

target_link_libraries(basic_test PRIVATE GTest::gtest_main)