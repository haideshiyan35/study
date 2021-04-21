#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<int, string> mVal = {{1, "hello"}, {2, "nihao"} };

	map<int, string>::key_type key_val = 1;
	map<int, string>::mapped_type val = mVal[key_val];

	cout << val << endl;

	return 0;
}
