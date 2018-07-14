# CMakeList.txt : 顶级 CMake 项目文件，执行全局配置
# 和此处的包含子项目。
#
cmake_minimum_required (VERSION 3.8)

project ("cmakelearn")

#set(CMAKE_CXX_COMPILER      "clang++" )         # 显示指定使用的C++编译器
#
set(CMAKE_CXX_FLAGS   "-std=c++1y")             # c++14
#set(CMAKE_CXX_FLAGS   "-g")                     # 调试信息
set(CMAKE_CXX_FLAGS   "-Wall")                  # 开启所有警告
#
#set(CMAKE_CXX_FLAGS_DEBUG   "-O0" )             # 调试包不优化
#set(CMAKE_CXX_FLAGS_RELEASE "-O2 -DNDEBUG " )   # release包优化

include_directories(${CMAKE_CURRENT_LIST_DIR}/hello)
#link_directories(${CMAKE_CURRENT_LIST_DIR}/hello)

# 包含子项目。
add_subdirectory ("cmakelearn")
add_subdirectory ("hello")

MESSAGE(STATUS "This is PROJECT_BINARY_DIR " ${PROJECT_BINARY_DIR})


#SET(PROJECT_BINARY_DIR build)
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)