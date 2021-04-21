#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
	map<int, int> mVal = {{32,1},{42,2},{53,3}};
	int number;
	auto mVal_iterator = mVal.begin();

	while(cin >> number)
	{
		mVal_iterator->second = number;
		mVal_iterator++;
	}
	
	for(auto e : mVal)
	{
		cout << e.first ;
		cout << " ";
		cout << e.second <<endl;
		
	}

	return 0;
}
