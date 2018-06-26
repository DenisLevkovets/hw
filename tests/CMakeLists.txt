enable_testing()

find_package(Check REQUIRED)
find_package(Threads REQUIRED)

include_directories(${CHECK_INCLUDE_DIRS})

include_directories(. ../src)


#add_executable(test_spline_interpolation.c test_spline_interpolation.c ../src/cubic_spline_interpolation.c)
#
#target_link_libraries(test_spline_interpolation.c ${CHECK_LIBRARIES} ${CMAKE_THREAD_LIBS_INIT})
#target_link_libraries(test_spline_interpolation.c m)
#
#add_test(test_spline_interpolation.c ${CMAKE_CURRENT_BINARY_DIR}/test_spline_interpolation)
