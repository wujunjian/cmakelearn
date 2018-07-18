# CMakeList.txt: cmakelearn 的 CMake 项目，包括源和定义
# 此处特定于项目的逻辑。
#
cmake_minimum_required (VERSION 3.8)

# 将源添加到此项目的可执行文件。

if(WIN32)
	set(BOOST_ROOT "D:\\boost_1_67_0")
	MESSAGE(STATUS "WINDOWS platform")
else()
	set(BOOST_ROOT "/root/boost_1_67_0")
endif()

set(Boost_NO_SYSTEM_PATHS ON)

find_package(Boost REQUIRED COMPONENTS system thread filesystem )

if(Boost_FOUND)
    include_directories(${BOOST_ROOT})
    link_directories("${BOOST_ROOT}/stage/lib")
    set(Boost_USE_STATIC_LIBS        ON) # only find static libs
    set(Boost_USE_MULTITHREADED      ON)
    set(Boost_USE_STATIC_RUNTIME     ON)

	add_executable (bi_tcp bi_tcp.cpp)
    target_link_libraries(bi_tcp 
        Boost::system
        Boost::thread
    )

	#install (TARGETS bi_tcp DESTINATION bin)
else()
    MESSAGE(STATUS "Boost not FOUND")
endif()

