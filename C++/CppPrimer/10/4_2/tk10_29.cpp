#include <iostream>
#include <vector>
#include <iterator>
#include <fstream>

using namespace std;

int main()
{
	
	vector<string> vecVal;
	auto ivecVal = back_inserter(vecVal);

	ifstream in("test.txt");
	istream_iterator<string> str(in), str_eof;
	ostream_iterator<string> out_iter(cout, " ");
	while(str != str_eof)
	{
		ivecVal = *str++;
	}

	for(auto e : vecVal)
		*out_iter++ = e;

	cout << endl;
	in.close();

	return 0;
}
