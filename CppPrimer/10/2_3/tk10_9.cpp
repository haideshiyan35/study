#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

void elimDumps(vector<string> &words)
{
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

int main()
{
    vector<string> words = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    
    elimDumps(words);

    for(vector<string>::iterator index = words.begin(); index != words.end(); index++)
    {
        cout << *index << endl;
    }

    return 0;
}

