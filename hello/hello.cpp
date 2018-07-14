
#include "hello.h"
#include <iostream>
using namespace std;


void hello::operator()(const string& data) 
{ 
	cout << data << endl; 
}