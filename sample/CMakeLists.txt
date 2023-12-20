cmake_minimum_required(VERSION 3.18)

project(sample)

add_executable(sample_split sample_split.cpp)
target_link_libraries(sample_split PUBLIC stropr)
