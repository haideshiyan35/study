#include <iostream>
#include <iterator>
#include <algorithm>
#include <list>
#include <vector>

using namespace std;

int main()
{
	vector<int> vecVal;
	istream_iterator<int> in(cin), eof;
	ostream_iterator<int> out(cout, " ");
	list<int> lVal;

	copy(in, eof, back_inserter(vecVal));
	auto vecVal3 = vecVal.rend() - 2;
	auto vecVal7 = vecVal.rbegin() + 3;
	for(; vecVal7 != vecVal3; vecVal7++)
	{
		lVal.push_back(*vecVal7);
	}
	
	copy(lVal.begin(), lVal.end(), out);

	return 0;
}
