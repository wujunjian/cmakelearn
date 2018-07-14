# CMakeList.txt : 顶级 CMake 项目文件，执行全局配置
# 和此处的包含子项目。
#
cmake_minimum_required (VERSION 3.8)

project ("cmakelearn")

add_compile_options(-std=c++11)

include_directories(${CMAKE_CURRENT_LIST_DIR}/hello)
link_directories(${CMAKE_CURRENT_LIST_DIR}/hello)

# 包含子项目。
add_subdirectory ("cmakelearn")
add_subdirectory ("hello")

MESSAGE(STATUS "PROJECT_BINARY_DIR :" ${PROJECT_BINARY_DIR})


#SET(PROJECT_BINARY_DIR build)
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)