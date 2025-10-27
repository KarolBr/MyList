
set(TEST_SOURCE "test-mylist.cpp")


add_executable(${CMAKE_PROJECT_NAME}_test ${TEST_SOURCE})
target_link_libraries(${CMAKE_PROJECT_NAME}_test gtest gtest_main ${CMAKE_PROJECT_NAME}_LIB)