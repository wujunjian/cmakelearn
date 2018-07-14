# CMakeList.txt : 顶级 CMake 项目文件，执行全局配置
# 和此处的包含子项目。
#
cmake_minimum_required (VERSION 3.8)

project (cmakelearn)

# The version number.
set (Tutorial_VERSION_MAJOR 1)
set (Tutorial_VERSION_MINOR 0)

configure_file(
	"${PROJECT_SOURCE_DIR}/TutorialConfig.h.in"
	"${PROJECT_BINARY_DIR}/TutorialConfig.h"
)

if(UNIX)
    add_compile_options(-std=c++1y)
else()
endif()

include_directories(${CMAKE_CURRENT_LIST_DIR}/hello)
link_directories(${CMAKE_CURRENT_LIST_DIR}/hello)

# should we use our own hello functions?
option (USE_MYHELLO "Use tutorial provided hello implementation" ON)

if (USE_MYHELLO)
	MESSAGE(STATUS "USE_MYHELLO")
endif (USE_MYHELLO)

# 包含子项目。
add_subdirectory ("cmakelearn")
add_subdirectory ("hello")

MESSAGE(STATUS "PROJECT_BINARY_DIR :" ${PROJECT_BINARY_DIR})


#SET(PROJECT_BINARY_DIR build)
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)