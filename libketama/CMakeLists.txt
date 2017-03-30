cmake_minimum_required(VERSION 3.5)
project(libketama)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
link_directories(.)

set(SOURCE_FILES
    ketama.c
    ketama.h
    md5.c
    md5.h)

set(TEST_SOURCE_FILES
    ketama.h
    ketama_test.c)

add_library(ketama ${SOURCE_FILES})
#add_executable(ketama_test ${TEST_SOURCE_FILES})
#target_link_libraries(ketama_test libketama.a)
