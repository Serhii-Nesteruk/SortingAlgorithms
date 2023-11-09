cmake_minimum_required(VERSION 3.0)
project(Algorithms)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCE_FILES BubbleSort/BubbleSort.cpp
				 BubbleSort/BubbleSort1.cpp
				 BubbleSort/BubbleSort2.cpp
				 BubbleSort/BubbleSort3.cpp
				 BubbleSort/BubbleSort4.cpp
				 BubbleSort/BubbleSort5.cpp
				 SelectionSort/SelectionSort.cpp
				 InsertionSort/InsertionSort.cpp
)

foreach(SOURCE_FILE ${SOURCE_FILES})
	get_filename_component(FILE_NAME ${SOURCE_FILE} NAME_WE)
	add_executable(${FILE_NAME} ${SOURCE_FILE} Utils/Utils.inl)
endforeach()