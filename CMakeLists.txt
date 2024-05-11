cmake_minimum_required(VERSION 3.0.2)
project(moderncpp_study)

## Compile as C++11, supported in ROS Kinetic and newer
add_compile_options(-std=c++17)

# find_package(Boost REQUIRED COMPONENTS system)
find_package(Eigen3 REQUIRED)
find_package(PCL REQUIRED)
find_package(Boost REQUIRED COMPONENTS system filesystem)

include_directories(
	${PCL_INCLUDE_DIRS}
)



add_executable(rvo_test src/rvo_test.cpp)
target_link_libraries(rvo_test ${PCL_LIBRARIES})

add_executable(sorting_with_lambda_expressions src/lambda_expressions/sorting_with_lambda_expressions.cpp)
target_link_libraries(sorting_with_lambda_expressions ${PCL_LIBRARIES})

add_executable(anonymous_function_w_lambda_function src/lambda_expressions/anonymous_function_with_lambda_expression.cpp)
target_link_libraries(anonymous_function_w_lambda_function ${PCL_LIBRARIES})

# Functional program examples in STL algorithms
add_executable(std_for_each src/stl_examples/std_for_each.cpp)
target_link_libraries(std_for_each ${PCL_LIBRARIES})

add_executable(std_insert_for_elements src/stl_examples/std_insert_for_elements.cpp)
target_link_libraries(std_insert_for_elements ${PCL_LIBRARIES})

add_executable(std_insert_for_vector src/stl_examples/std_insert_for_vector.cpp)
target_link_libraries(std_insert_for_vector ${PCL_LIBRARIES})

add_executable(std_insert_for_set src/stl_examples/std_insert_for_set.cpp)
target_link_libraries(std_insert_for_set ${PCL_LIBRARIES})

add_executable(std_move_example src/stl_examples/std_move_example.cpp)
target_link_libraries(std_move_example ${PCL_LIBRARIES})

add_executable(std_move src/stl_examples/std_move.cpp)
target_link_libraries(std_move ${PCL_LIBRARIES})

add_executable(std_transform src/stl_examples/std_transform.cpp)
target_link_libraries(std_transform ${PCL_LIBRARIES})

add_executable(std_accumulation src/stl_examples/std_accumulation.cpp)
target_link_libraries(std_accumulation ${PCL_LIBRARIES})

add_executable(std_accumulation_w_struct src/stl_examples/std_accumulation_w_struct.cpp)
target_link_libraries(std_accumulation_w_struct ${PCL_LIBRARIES})



