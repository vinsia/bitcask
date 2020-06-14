set(SRC_LIST entity.cc)

message(STATUS "This is BINARY dir " ${PROJECT_BINARY_DIR})
message(STATUS "This is SOURCE dir " ${PROJECT_SOURCE_DIR})

add_executable(bitcask ${SRC_LIST})

# Now simply link against gtest or gtest_main as needed. Eg

# Add test command for entity.
add_executable(entity_test entity_test.cc entity.cc)
target_link_libraries(entity_test gtest_main)
#add_test(NAME example_test COMMAND entity_test)
