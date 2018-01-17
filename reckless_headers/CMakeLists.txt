cmake_minimum_required(VERSION 2.8)
project(reckless_headers)

find_package(gazebo REQUIRED)

add_executable(reckless_headers reckless.cpp)
target_include_directories(reckless_headers PRIVATE ${GAZEBO_INCLUDE_DIRS})
target_link_libraries(reckless_headers ${GAZEBO_LIBRARIES})

add_executable(careful_headers careful.cpp)
target_link_libraries(careful_headers ${GAZEBO_LIBRARIES})
