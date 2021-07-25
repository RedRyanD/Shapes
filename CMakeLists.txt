cmake_minimum_required(VERSION 3.16.0)  
project(Project_Name)                          

add_executable(Executable_Name ${SOURCE_FILES})

target_include_directories(${PROJECT_NAME} PUBLIC inc)
target_sources(${PROJECT_NAME} PUBLIC scr/scr.cpp)
