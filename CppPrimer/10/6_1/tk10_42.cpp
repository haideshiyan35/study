#include <iostream>
#include <algorithm>
#include <iterator>
#include <list>

using namespace std;

int main()
{
	list<string> lVal;
	auto bilVal = back_inserter(lVal);
	istream_iterator<string> in(cin), eof;
	ostream_iterator<string> out(cout, " ");

	copy(in

	return 0;
}

