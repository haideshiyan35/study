#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vecVal = {1, 7, 7, 7, 9, 21, 7, 30, 29, 21, 12, 1, 9};
	list<int> lVal;
	
	sort(vecVal.begin(), vecVal.end());
	unique_copy(vecVal.begin(), vecVal.end(), back_inserter(lVal)); //need sort first

	for_each(lVal.begin(), lVal.end(), [](int &a){ cout << a << endl;});

	return 0;
}
