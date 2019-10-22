#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> val = {10,20,30};

    vector<int>::iterator index = val.begin();

    int val1 = *index++;
    int val2 = *index++;
    int val3 = *index;


    cout << val1 <<endl;
    cout << val2 << endl;
    cout << val3 << endl;

    return 0;
}
