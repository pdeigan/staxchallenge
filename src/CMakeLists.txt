# Create an executable target for main.cpp
add_executable(main main.cpp)

# Specify include directories for the executable
target_include_directories(main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../include)

# Link the Google Test library
target_link_libraries(main pthread)