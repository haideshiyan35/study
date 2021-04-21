#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>


using namespace std;
using namespace std::placeholders;

void elimDumps(vector<string> &words)
{
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

bool sortBySize(string a, string b)
{
	return a.size() < b.size();
}

bool compareVal(string a, vector<string>::size_type val)
{
	return a.size() > val;
}

void print(string a)
{
	cout << a << endl;
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
	elimDumps(words);
	stable_sort(words.begin(), words.end(), bind(sortBySize, _1, _2));
	auto wc = find_if(words.begin(), words.end(), bind(compareVal, _1, sz));
	auto count = wc - words.end();
	for_each(wc, words.end(), print);
	cout << endl;
}

int main()
{
    vector<string> words = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    
	biggies(words, 4);

    return 0;
}

