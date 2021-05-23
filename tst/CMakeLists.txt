
include(Catch)

add_executable(samplelib_test samplelib_test.cxx)
target_include_directories(samplelib_test PUBLIC "${PROJECT_SOURCE_DIR}/inc" )
target_link_libraries(samplelib_test samplelib)
catch_discover_tests(samplelib_test)