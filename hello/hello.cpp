
#include "hello.h"
#include <iostream>
using namespace std;


void hello::operator()(string& data) { cout << data << endl; }