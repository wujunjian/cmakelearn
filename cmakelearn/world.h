#include <iostream>
#include <string>


using namespace std;


class world
{
public:
	void operator()(string& data)
	{
		cout << data << endl;
	}
};