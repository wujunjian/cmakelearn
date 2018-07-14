cmake_minimum_required (VERSION 3.8)


add_library(hello hello.h hello.cpp world.h)

install (TARGETS hello DESTINATION bin)
install (FILES hello.h world.h DESTINATION include)
