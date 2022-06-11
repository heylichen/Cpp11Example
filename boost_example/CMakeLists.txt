cmake_minimum_required(VERSION 3.22)
project(Cpp11Example)

set(CMAKE_CXX_STANDARD 11)
# case sensitive, when i wrote as BOOST REQUIRED, always generating a warning message
# work in ubuntu
find_package(Boost REQUIRED COMPONENTS thread)

if (Boost_FOUND)
    message(Boost_INCLUDE_DIRS " ${Boost_INCLUDE_DIRS}")
    message(Boost_LIBRARY_DIRS " ${Boost_LIBRARY_DIRS}")
    include_directories(${Boost_INCLUDE_DIRS})
    link_directories(${Boost_LIBRARY_DIRS})
endif ()

#each add_executable() generate a target, which you can execute
add_executable(boost_test boost_test.cpp)