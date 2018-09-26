cmake_minimum_required(VERSION 3.6)
project(scratch)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /D_DEBUG /MDd /Zi /D_ITERATOR_DEBUG_LEVEL=0")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MD")

set(CMAKE_EXE_LINKER_FLAGS_DEBUG "/DEBUG")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /std:c++latest /EHsc /permissive-")

add_library(testlib STATIC testlib.cpp testlib.hpp)

add_executable(myexe main.cpp)
target_link_libraries(myexe PRIVATE testlib)
