cmake_minimum_required(VERSION 3.20)
project(Assignment)

set(CMAKE_CXX_STANDARD 17)
enable_testing()

# -------------------- Source files --------------------
set(SOURCE_FILES
    src/circle.cpp
    src/rectangle.cpp
    src/triangle.cpp
    src/pipelineMain.cpp
)

set(HEADER_FILES
    include/circle.h
    include/rectangle.h
    include/triangle.h
    include/Shape.h
)

# -------------------- Main executable --------------------
add_executable(Assignment
    ${SOURCE_FILES}
    ${HEADER_FILES}
)

target_include_directories(Assignment PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# -------------------- Unit test executable --------------------
add_executable(test_assignment
    src/test.cpp
    src/circle.cpp
    src/rectangle.cpp
    src/triangle.cpp
)

target_include_directories(test_assignment PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    "C:/Libraries/boost_1_88_0"
)

add_test(NAME AssignmentTest COMMAND test_assignment)
