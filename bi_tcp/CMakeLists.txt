# CMakeList.txt: cmakelearn 的 CMake 项目，包括源和定义
# 此处特定于项目的逻辑。
#
cmake_minimum_required (VERSION 3.8)

# 将源添加到此项目的可执行文件。
add_executable (bi_tcp bi_tcp.cpp)

set(BOOST_ROOT "D:\\boost_1_67_0")
set(BOOST_INCLUDE_DIRS "${BOOST_ROOT}")
set(BOOST_LIBRARY_DIRS "${BOOST_ROOT}\\stage\\lib")

#find_package( Boost COMPONENTS system thread filesystem REQUIRED )
#link_directories("${BOOST_LIBRARY_DIRS}")

include_directories(${BOOST_INCLUDE_DIRS})
target_link_libraries(bi_tcp 
"${BOOST_LIBRARY_DIRS}\\libboost_system-vc141-mt-gd-x64-1_67.lib"
"${BOOST_LIBRARY_DIRS}\\libboost_date_time-vc141-mt-gd-x64-1_67.lib"
"${BOOST_LIBRARY_DIRS}\\libboost_regex-vc141-mt-gd-x64-1_67.lib"
)