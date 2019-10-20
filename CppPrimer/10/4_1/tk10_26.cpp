#include <iostream>
#include <functional>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main(void)
{
	list<int> val(5, 0);

	list<int>::iterator mid = val.begin();
	mid++;
	mid++;
	auto ival = inserter(val, mid); // inserter instructions
	*ival = 111;
	*ival = 123;
	for_each(val.begin(), val.end(), [](int &a){ cout << a << endl;});
	cout << endl;

	auto bval = back_inserter(val); // back_inserter instructions
	*bval = 222;
	*bval = 234;
	for_each(val.begin(), val.end(), [](int &a){ cout << a << endl;});
	cout << endl;

	auto fval = front_inserter(val); //front_inserter instructions
	*fval = 333;
	*fval = 345;
	for_each(val.begin(), val.end(), [](int &a){ cout << a << endl;});

	return 0;
}
