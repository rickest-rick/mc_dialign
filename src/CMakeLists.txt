
cmake_minimum_required(VERSION 3.0)
project(MC_DIALIGN)

option(BUILD_TESTS "Run tests using CATCH framework" ON)

set(CMAKE_CXX_STANDARD 11)
if (MSVC)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4")
elseif (CMAKE_COMPILER_IS_GNUCC OR CMAKE_COMPILER_IS_GNUCXX)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -pedantic")
endif()

set (TARGET_SRC
        ${CMAKE_SOURCE_DIR}/site.cpp
        ${CMAKE_SOURCE_DIR}/main.cpp)

find_package(Boost)
if (NOT ${Boost_FOUND})
    message(STATUS "Boost not found. Using own...")
    set(BOOST_ROOT "${CMAKE_SOURCE_DIR}/../boost-graph")
endif()

add_executable(mc_dialign ${CMAKE_SOURCE_DIR}/main.cpp ${TARGET_SRC})

#moved catch interface to different cmake

# test targets
if(BUILD_TESTS)
    add_subdirectory(tests)
endif(BUILD_TESTS)
