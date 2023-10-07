cmake_minimum_required(VERSION 3.26)
project(PJC)

set(CMAKE_CXX_STANDARD 23)

include(FetchContent)

FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt
        GIT_TAG 10.1.1
)

FetchContent_MakeAvailable(fmt)

add_executable(PJC main.cpp)
add_executable(BOX_PRINT exc/box_print.cpp)
add_executable(REVERSE_WORDS exc/reverse_words.cpp)
add_executable(DOT_PRODUCT exc/dot_product.cpp)
add_executable(JAVA_TO_CPP exc/java_to_cpp.cpp)
add_executable(PALINDROME exc/palindrome.cpp)
add_executable(STRING_OPERATIONS exc/string_operations.cpp)
add_executable(COMPARE_INPUTS exc/compare_inputs.cpp)
add_executable(DUPLICATES exc/duplicates.cpp)
add_executable(SORT_HALF exc/sort_bigger_half.cpp)
add_executable(MAX_ELEMENTS exc/max_elements.cpp)
add_executable(LAMBDA_REFACTOR exc/lambda_refactor.cpp)

target_link_libraries(PJC fmt)
target_link_libraries(BOX_PRINT fmt)
target_link_libraries(REVERSE_WORDS fmt)
target_link_libraries(DOT_PRODUCT fmt)
target_link_libraries(JAVA_TO_CPP fmt)
target_link_libraries(PALINDROME fmt)
target_link_libraries(STRING_OPERATIONS fmt)
target_link_libraries(COMPARE_INPUTS fmt)
target_link_libraries(DUPLICATES fmt)
target_link_libraries(SORT_HALF fmt)
target_link_libraries(MAX_ELEMENTS fmt)
target_link_libraries(LAMBDA_REFACTOR fmt)
