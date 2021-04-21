#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std;
using namespace std::placeholders;

bool compareVal(int a, int val)
{
	return a > val;
}


int greaterVal(vector<int> &value, string &str)
{
	auto wc = find_if(value.begin(), value.end(), bind(compareVal, _1, str.size())); 

	return *wc;
}

int main(void)
{
	string str = "hello";
	vector<int> val = {1, 3, 2, 5, 7, 9, 1, 10};

	int lval = greaterVal(val, str);

	cout << lval << endl;

	return 0;
}
