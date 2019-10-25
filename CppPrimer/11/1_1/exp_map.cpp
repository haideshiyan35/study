#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	map<string, size_t> word_count;
	string word;

	while(cin >> word)
	{
		if(word == string("quit"))
			break;
		++word_count[word];
	}

	for(const auto &w : word_count)
		cout << w.first << " occurs " << w.second
			<< ((w.second > 1) ? " times" : " time") << endl;


	return 0;
}
