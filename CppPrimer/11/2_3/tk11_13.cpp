#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main()
{
	vector<pair<string, int>> vecVal;
	string word;
	int number;

	while(cin >> word && word != "quit")
	{
		cin >> number;
		vecVal.push_back({word, number});
		vecVal.push_back(make_pair(word, number));
		vecVal.push_back(pair<string, int>(word, number));
	}

	for( auto e : vecVal)
	{
		cout << e.first;
		cout << " ";
		cout << e.second;
		cout << endl;
	}

	return 0;
}
