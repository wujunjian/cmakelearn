# CMakeList.txt : 顶级 CMake 项目文件，执行全局配置
# 和此处的包含子项目。
#
cmake_minimum_required (VERSION 3.8)


list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR})

include(HunterGate)
HunterGate(
    URL "https://github.com/ruslo/hunter/archive/v0.21.16.tar.gz"
    SHA1 "aa1faccd24f33dd2c368f85a4e9ca2e5d9c249cb"
    LOCAL
)


project (cmakelearn)

# The version number.
set (VERSION_MAJOR 1)
set (VERSION_MINOR 0)

configure_file(
	"${PROJECT_SOURCE_DIR}/Config.h.in"
	"${PROJECT_BINARY_DIR}/Config.h"
)

if(UNIX)
    add_compile_options(-std=c++1y)
else()
endif()


include_directories(${CMAKE_BINARY_DIR})
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
add_subdirectory(MathFunctions)

MESSAGE(STATUS "PROJECT_BINARY_DIR :" ${PROJECT_BINARY_DIR})


#SET(PROJECT_BINARY_DIR build)
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)


# does this system provide the log and exp functions?
include (CheckFunctionExists)
check_function_exists (log HAVE_LOG)
check_function_exists (exp HAVE_EXP)


#hunter_add_package(Boost COMPONENTS program_options filesystem system thread context fiber log)
#find_package(Boost CONFIG REQUIRED program_options filesystem system thread context fiber log)

