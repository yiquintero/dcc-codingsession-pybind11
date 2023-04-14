cmake_minimum_required (VERSION 2.8.11)

project(mymathapp)

# All cpp files that will be compiled as part of the app
set(SOURCE_FILES 
	main.cpp
	mymath.cpp)

# Ask CMake to build an executable called mymathapp 
add_executable(mymathapp ${SOURCE_FILES})

# Tell CMake in which folder to place the app
install(TARGETS mymathapp RUNTIME DESTINATION bin)