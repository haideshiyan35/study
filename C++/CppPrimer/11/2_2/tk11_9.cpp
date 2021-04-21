#include <iostream>
#include <map>
#include <list>

using namespace std;

int main(void)
{
	map<string, list<int>> word_container;
	string word;
	int number;

	while(cin >> word)
	{
		if(word == "quit")
			break;
		while(cin >> number && number != 9999)
		{
			word_container[word].push_back(number);
		}
	}

	for(auto val : word_container)
	{
		cout << val.first;

		for(auto it = val.second.begin(); it != val.second.end(); it++)
		{
			cout << *it <<endl;
		}
		cout << endl;
	}

	return 0;
}


