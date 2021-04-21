#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<string, size_t> word_count;
	string word;

	while(cin >> word)
	{
		if(word == "quit")
			break;
		++word_count.insert({word, 0}).first->second;
	}
	
	for(auto e : word_count)
	{
		cout << e.first + " ";
		cout << e.second << endl;
	}

	return 0;
}
