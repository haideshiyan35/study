#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;

int main()
{
	multiset<string> cVal = {"one", "two", "three", "four"};
	vector<string> vecVal = {"five", "six", "seven", "eight"};

	copy(cVal.begin(), cVal.end(), inserter(vecVal, vecVal.end()));
	copy(cVal.begin(), cVal.end(), back_inserter(vecVal));
	copy(vecVal.begin(), vecVal.end(), inserter(cVal, cVal.end()));
//	copy(vecVal.begin, vecVal.end(), back_inserter(cVal)); //multiset 没有push_back函数，导致错误

	return 0;
}
