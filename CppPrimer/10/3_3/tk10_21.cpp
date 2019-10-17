#include <iostream>

using namespace std;

int main()
{
    int val = 32;
    bool ret = false;
    int i = 0;
    auto f = [&val]()-> bool 
    { 
        if(val == 0) 
            return false; 
        else 
            val--; 
        return true;
    };

    for(i = 0;i < 33; i++)
    {
        ret = f();
        if(!ret)
        {
            break;
        }
    }

    cout << i << endl;

    return 0;
}
