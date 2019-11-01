#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
	map<string, size_t> word_count;
	string word;

	while(cin >> word)
	{
		if(word == "quit")
			break;
		auto ret = word_count.insert({word, 1});
		if(!ret.second)
		{
			++ret.first->second;
		}
	}

	for(auto val : word_count)
	{
		cout << val.first ;
		cout << " ";
		cout << val.second;
		cout << endl;
	}

	return 0;
}
