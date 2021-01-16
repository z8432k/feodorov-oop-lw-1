set(CMAKE_INCLUDE_CURRENT_DIR_IN_INTERFACE  ON)


add_compile_options("-Wno-unused-function" "-Wno-unused-variable" "-Wno-unused-function")

link_libraries(rangechecker)

add_executable(test_1 test_1.cc)
add_test(NAME "Test_rangechecker" COMMAND $<TARGET_FILE:test_1>)

