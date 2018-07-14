#include <iostream>
#include <string>


using namespace std;


class world
{
public:
	void operator()(const string& data)
	{
		cout << data << endl;
	}
};