cmake_minimum_required(VERSION 3.16)

project(TwoSumProject VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

enable_testing()

add_library(two_sum_lib src/twosum.cpp)
target_include_directories(two_sum_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

add_executable(two_sum_demo src/main.cpp)
target_link_libraries(two_sum_demo PRIVATE two_sum_lib)

add_executable(two_sum_tests
    tests/test_common.cpp
    tests/test_array.cpp
    tests/test_hashtable.cpp
    tests/main.cpp
)
target_link_libraries(two_sum_tests PRIVATE two_sum_lib)

add_test(NAME TwoSumTests COMMAND two_sum_tests)