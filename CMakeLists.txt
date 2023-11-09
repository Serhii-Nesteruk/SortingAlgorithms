cmake_minimum_required(VERSION 3.0)
project(Algorithms)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(BubbleSort BubbleSort/BubbleSort.cpp Utils/Utils.inl)
add_executable(BubbleSort1 BubbleSort/BubbleSort1.cpp Utils/Utils.inl)
add_executable(BubbleSort2 BubbleSort/BubbleSort2.cpp Utils/Utils.inl)
add_executable(BubbleSort3 BubbleSort/BubbleSort3.cpp Utils/Utils.inl)
add_executable(BubbleSort4 BubbleSort/BubbleSort4.cpp Utils/Utils.inl)
add_executable(BubbleSort5 BubbleSort/BubbleSort5.cpp Utils/Utils.inl)

# target_include_directories(BubbleSort PRIVATE Utils/Utils.inl)
# target_include_directories(BubbleSort1 PRIVATE Utils/Utils.inl)
# target_include_directories(BubbleSort2 PRIVATE Utils/Utils.inl)
# target_include_directories(BubbleSort3 PRIVATE Utils/Utils.inl)
# target_include_directories(BubbleSort4 PRIVATE Utils/Utils.inl)
# target_include_directories(BubbleSort5 PRIVATE Utils/Utils.inl)