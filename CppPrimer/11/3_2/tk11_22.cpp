#include <iostream>
#include <map>
#include <vector>
#include <utility>

using namespace std;

int main()
{
	map<string, vector<int>> mVal;
	vector<int> vVal = {1,2,3,4};
	pair<map<string, vector<int>>::iterator, bool> ret = mVal.insert(pair<string, vector<int>>("hello", vVal));

	return 0;
}

