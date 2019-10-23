#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	string vStr = "FIRST,MIDDLE,LAST";

	auto recomma = find(vStr.crbegin(), vStr.crend(), ',');
	cout << string(vStr.crbegin(), recomma) << endl;
	cout << string(recomma.base(), vStr.cend()) << endl;

	return 0;
}
