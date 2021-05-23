cmake_minimum_required(VERSION 3.10)

project(samplelib VERSION 0.1)

include(CTest)
enable_testing()

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(samplelib_config.h.in samplelib_config.h)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_library(samplelib SHARED inc/samplelib.h src/samplelib.cxx)

target_include_directories(samplelib PUBLIC "${PROJECT_SOURCE_DIR}/inc ${PROJECT_BINARY_DIR}")
target_link_libraries(samplelib ${CONAN_LIBS})

add_subdirectory(bin)
add_subdirectory(tst)