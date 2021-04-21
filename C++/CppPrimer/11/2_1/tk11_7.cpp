#include <iostream>
#include <iterator>
#include <map>
#include <set>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
	map<string, vector<string>> ivec;
	ostream_iterator<string> out(cout, " ");
	vector<string> vecVal;

	ivec = {{"li", {"xiaoyi", "xiaoer"}}};
	vecVal = ivec["li"];
	copy(vecVal.begin(), vecVal.end(), out);
	cout << endl;

	return 0;
}
