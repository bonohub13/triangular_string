cmake_minimum_required(VERSION 3.1)
project(triangular_string)

add_executable(tri_echo src/triangular_echo.cpp)

# ----- only use this when add_library is used -----
function(link_lib executable_name library_name)
	add_library(${library_name} STATIC include/${library_name}.cpp)
	target_link_libraries(${executable_name} ${library_name})
	target_include_directories(${executable_name} PRIVATE include)
endfunction()
