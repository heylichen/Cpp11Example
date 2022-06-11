cmake_minimum_required(VERSION 3.22)
project(Cpp11Example)

set(CMAKE_CXX_STANDARD 11)
#search header files in include dirs
include_directories(include)

add_subdirectory(boost_example)

#each add_executable() generate a target, which you can execute
add_executable(Insertion_test sort/Insertion_test.cpp)
add_executable(Quick3way_test sort/Quick3way_test.cpp)