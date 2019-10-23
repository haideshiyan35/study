#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
	vector<int> vecVal;
	istream_iterator<int> in(cin), eof;
	ostream_iterator<int> out(cout, " ");

	copy(in, eof, back_inserter(vecVal));
	for(auto index = vecVal.cbegin(); index != vecVal.cend(); index++)
	{
		*out++ = *index;
	}

	return 0;
}
