cmake_minimum_required(VERSION 3.0.0)

project(jenkins-test-build-project)
set(CMAKE_CXX_STANDARD 14)

if( ${CMAKE_TEST_VARIABLE} STREQUAL "test_variable")
    message("Ii is equal to test_variable")
else()
    message( "It is ${CMAKE_TEST_VARIABLE}")
endif()



set(SOURCE_FILES main.cpp)
add_executable(hello_world_run ${SOURCE_FILES})

include_directories(hello_world)

add_subdirectory(hello_world)
add_subdirectory(hello_world_tests)

target_link_libraries(hello_world_run hello_world_lib)