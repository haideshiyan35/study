#include <iostream>
#include <algorithm>
#include <iterator>
#include <list>

using namespace std;

int main()
{
	list<int> lVal;
	istream_iterator<int> in(cin), eof;

	copy(in, eof, back_inserter(lVal));
	auto res = find(lVal.crbegin(), lVal.crend(), 0);

	cout << *res << endl;

	return 0;
}
