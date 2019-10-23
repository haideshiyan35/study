#include <iostream>
#include <iterator>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
	vector<int> vecVal;
	istream_iterator<int> in(cin), eof;
	list<int> lVal;

	copy(in, eof, back_inserter(vecVal));
	auto vecVal3 = vecVal.rend() - 3;
	auto vecVal7 = vecVal.rbegin() + 2;
	for(; vecVal7 != vecVal3; vecVal7++)
	{
		lVal.push_back(*vecVal7);
	}

	return 0;
}
