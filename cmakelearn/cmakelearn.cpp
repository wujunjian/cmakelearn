// cmakelearn.cpp: 定义应用程序的入口点。
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
using namespace std;

int main()
{
	std::time_t t = std::time(nullptr);
	//cout.imbue(std::locale(""));
	cout << "Hello CMake。" << std::put_time(std::localtime(&t), "%c %Z") << endl;


	hello()(string("hello"));
	world()(string("world"));
	
	//cout << cout.getloc().name() << endl;
	//cout << std::locale("en_US.UTF8").name().c_str() << "..." << endl;

	return 0;
}
