cmake_minimum_required(VERSION 3.13)
project(DataStructure)

set(CMAKE_CXX_STANDARD 14)


ADD_SUBDIRECTORY(InsertionSort)
ADD_SUBDIRECTORY( SelectionSort)
ADD_SUBDIRECTORY(MergeSort)
ADD_SUBDIRECTORY( QuickSort)
ADD_SUBDIRECTORY(Recursive)

add_executable(DataStructure main.cpp )