cmake_minimum_required(VERSION 3.10)
project(DoublyLinkedList)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_subdirectory(src)
add_subdirectory(tests)

# GoogleTest
add_subdirectory(external/gtest)
