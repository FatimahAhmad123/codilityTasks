cmake_minimum_required(VERSION 3.9)

project(CodilityTasks)

file(GLOB_RECURSE task_sources "${CMAKE_SOURCE_DIR}/*.cpp")
file(GLOB_RECURSE task_headers "${CMAKE_SOURCE_DIR}/*.h")

foreach(source_file ${task_sources})
	get_filename_component(EXECUTABLE_NAME ${source_file} NAME_WE)
	add_executable(${EXECUTABLE_NAME} ${source_file} ${task_headers})
endforeach(source_file ${task_sources})