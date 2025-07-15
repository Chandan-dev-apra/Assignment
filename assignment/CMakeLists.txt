cmake_minimum_required(VERSION 3.20)
project(Assignment)

set(CMAKE_CXX_STANDARD 17)
enable_testing()

# -------------------- Source files --------------------
set(SOURCE_FILES
    circle.cpp
    rectangle.cpp
    triangle.cpp
    pipelineMain.cpp
)

set(HEADER_FILES
    circle.h
    rectangle.h
    triangle.h
    Shape.h
)

# -------------------- Main executable --------------------
add_executable(Assignment
    ${SOURCE_FILES}
    ${HEADER_FILES}
)

target_include_directories(Assignment PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

# -------------------- Unit test executable --------------------
add_executable(test_assignment
    test.cpp
    circle.cpp
    rectangle.cpp
    triangle.cpp
)

# Add Boost include path manually
target_include_directories(test_assignment PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    "C:/Libraries/boost_1_88_0"
)

add_test(NAME AssignmentTest COMMAND test_assignment)
