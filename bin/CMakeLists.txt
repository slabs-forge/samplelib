
add_executable(run_samplelib run_samplelib.cxx)

target_include_directories(run_samplelib PUBLIC "${PROJECT_SOURCE_DIR}/inc")
target_link_libraries(run_samplelib samplelib)