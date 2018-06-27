enable_testing()

find_package(Check REQUIRED)
find_package(Threads REQUIRED)

include_directories(${CHECK_INCLUDE_DIRS})

include_directories(. ../src)

add_executable(tests test.c ../src/main_fun.c)

target_link_libraries(tests ${CHECK_LIBRARIES} ${CMAKE_THREAD_LIBS_INIT})
target_link_libraries(tests m)

add_test(tests ${CMAKE_CURRENT_BINARY_DIR}/tests)


