#include <iostream>

using namespace std;

int main()
{
    int val = 10;

    auto f = [val](int a) {return val + a;};

    cout << f(5) << endl;

    return 0;
}
