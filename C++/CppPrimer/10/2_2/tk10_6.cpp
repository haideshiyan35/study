#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a1[10] = {1,2,3,4,5,6,7,8,9,10};

    fill_n(begin(a1), 10, 0);

    for(int i = 0; i < 10; i++)
    {
        cout << a1[i] << endl;
    }

    return 0;
}
