﻿# CMakeList.txt: cmakelearn 的 CMake 项目，包括源和定义
# 此处特定于项目的逻辑。
#
cmake_minimum_required (VERSION 3.8)

# 将源添加到此项目的可执行文件。
add_executable (cmakelearn cmakelearn.cpp cmakelearn.h)


target_link_libraries(cmakelearn hello)

# add the install targets
#install (TARGETS cmakelearn DESTINATION bin)
install (FILES "${PROJECT_BINARY_DIR}/TutorialConfig.h"        
         DESTINATION include)