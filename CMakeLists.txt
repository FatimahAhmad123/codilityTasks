cmake_minimum_required(VERSION 3.9)

project(CpdilityTasks)

set(task_directories
	"Arrays"
	"CountingElements"
	"Iterations"
	"PrefixSums"
	"Sorting"
	"StacksAndQueues"
	"TimeComplexity"
)

foreach(task_dir ${task_directories})
	file(GLOB task_sources "${task_dir}/*.cpp")
	file(GLOB task_headers "${task_dir}/*.h")

	get_filename_component(EXECUTABLE_NAME ${task_dir} NAME_WE)

	add_executable(${EXECUTABLE_NAME} ${task_sources} ${task_headers})
endforeach(task_dir ${task_directories})
