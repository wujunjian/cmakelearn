# CMakeList.txt: cmakelearn 的 CMake 项目，包括源和定义
# 此处特定于项目的逻辑。
#
cmake_minimum_required (VERSION 3.8)

# 将源添加到此项目的可执行文件。
add_executable (bi_tcp bi_tcp.cpp)

set(BOOST_ROOT "/root/boost_1_67_0")
set(BOOST_INCLUDE_DIRS "${BOOST_ROOT}")
set(Boost_LIBRARIES "${BOOST_ROOT}/stage/lib")

find_package(Boost REQUIRED COMPONENTS system thread filesystem )

if(Boost_FOUND)
    include_directories(${BOOST_INCLUDE_DIRS})
    link_directories("${Boost_LIBRARIES}")
    set(Boost_USE_STATIC_LIBS        ON) # only find static libs
    set(Boost_USE_MULTITHREADED      ON)
    set(Boost_USE_STATIC_RUNTIME    OFF)
    target_link_libraries(bi_tcp 
        Boost::system
        Boost::thread
    )
endif()

