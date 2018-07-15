﻿// cmakelearn.cpp: 定义应用程序的入口点。
//

#include "cmakelearn.h"
#include <chrono>
#include <ctime>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <stdlib.h> 
#include "hello.h"
#include "world.h"
#include "Config.h"
//#include <boost/algorithm/string.hpp>
using namespace std;

int main()
{
	std::time_t t = std::time(nullptr);
	//cout.imbue(std::locale(""));
	cout << "Hello CMake。"  << time(NULL) << endl;
#if defined (HAVE_LOG)
		cout << "have log" << endl;
#endif
	//	cout << log(2.5) << endl;

	hello()(string("hello"));
	world()(string("world"));
	
	//cout << cout.getloc().name() << endl;
	//cout << std::locale("en_US.UTF8").name().c_str() << "..." << endl;

	return 0;
}
