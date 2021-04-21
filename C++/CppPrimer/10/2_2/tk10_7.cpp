#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vec;

    vec.reserve(10);
    fill_n(vec.begin(), 10, 0);

    return 0;
}
