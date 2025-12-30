cmake_minimum_required(VERSION 4.0)
project(cpp_basic)

set(CMAKE_CXX_STANDARD 20)

add_executable(cpp_basic main.cpp
        STL/deque/deque数据存取.cpp
        STL/list/list构造函数.cpp)