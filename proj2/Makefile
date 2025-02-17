cmake_minimum_required(VERSION 3.8)

set(This Example)

project(${This} C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

add_subdirectory(googletest)

set(Headers
    StringUtils.h
)
set(Sources
    StringUtils.cpp
    StringUtilsTest.cpp
)

add_library(${This} STATIC ${Sources})

target_include_directories(${This} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(${This}_test ${Sources})

target_link_libraries(${This}_test
    PRIVATE ${This}
    PRIVATE gtest gtest_main
)

add_test(NAME ExampleTest COMMAND ${This}_test)

add_subdirectory(test)