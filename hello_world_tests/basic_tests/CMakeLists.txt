

# Now simply link against gtest or gtest_main as needed. Eg
add_executable(example_test example_test.cpp)
target_link_libraries(example_test gtest_main)
add_test(NAME test COMMAND example_test)