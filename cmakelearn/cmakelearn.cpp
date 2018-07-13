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
	cout << "Hello CMake。" << std::put_time(std::localtime(&t), "%c %Z") << endl;


	hello()(string("hello"));
	world()(string("world"));

	cin.get();
	return 0;
}
