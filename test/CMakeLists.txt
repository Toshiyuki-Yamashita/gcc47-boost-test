enable_testing()

file(GLOB TEST_SRC_FILES ${PROJECT_SOURCE_DIR}/test/*.cpp)
add_executable(sample_test ${TEST_SRC_FILES})

target_link_libraries(sample_test
  pthread
  ${Boost_LIBRARIES}
  sample)
