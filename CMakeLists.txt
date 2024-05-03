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

