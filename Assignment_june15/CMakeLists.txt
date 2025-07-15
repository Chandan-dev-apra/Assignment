cmake_minimum_required(VERSION 3.20)
project(Assignment_june15)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

set(SOURCE_FILES
    src/hyundai.cpp
    src/maruti.cpp
    src/tata.cpp
    src/testmain.cpp
)

add_executable(Assignment_june15 ${SOURCE_FILES})

enable_testing()

add_executable(test_cars
    src/test_car.cpp
    src/hyundai.cpp
    src/maruti.cpp
    src/tata.cpp
)

target_include_directories(test_cars PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    "$ENV{BOOST_ROOT}"
)

add_test(NAME AllCarTests COMMAND test_cars)
