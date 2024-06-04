enable_testing()

# Add test executable for DoublyLinkedListTest
add_executable(DoublyLinkedListTest DoublyLinkedListTest.cpp)
target_include_directories(DoublyLinkedListTest PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../include)
target_link_libraries(DoublyLinkedListTest gtest gtest_main pthread)

# Add test executable for NodeTest
add_executable(NodeTest NodeTest.cpp)
target_include_directories(NodeTest PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../include)
target_link_libraries(NodeTest gtest gtest_main pthread)

# Register tests with CTest
add_test(DoublyLinkedListTest DoublyLinkedListTest)
add_test(NodeTest NodeTest)