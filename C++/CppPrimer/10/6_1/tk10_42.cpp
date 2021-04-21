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

	while(1)
	{
		if(*in == string("quit"))
			break;
		lVal.push_back(*in);
		in++;
	}	

	lVal.sort();
	lVal.unique();
	copy(lVal.begin(), lVal.end(), out);
	cout << endl;

	return 0;
}

