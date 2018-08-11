cmake_minimum_required(VERSION 3.0.0)


set(EADER_FILES Hello_World.h)

set(SOURCE_FILES Hello_World.cpp)


add_library(hello_world_lib STATIC
        ${HEADER_FILES}
        ${SOURCE_FILES})