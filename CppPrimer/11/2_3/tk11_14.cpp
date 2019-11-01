#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main()
{
	map<string, vector<pair<string, string>>> mVal;
	string surname;
	string name;
	string birth;

	while(cin >> surname && surname != "quit")
	{
		while(cin >> name && name != "quit")
		{
			cin >> birth;
			mVal[surname].push_back({name, birth});
		}
	}

	for(auto e : mVal)
	{
		cout << e.first + " "<< endl;
		for(vec : e.second)
		{
			cout << vec.first + " " + vec.second << endl;
		}
	}


	return 0;
}
