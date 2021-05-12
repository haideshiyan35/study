#include <iostream>

using namespace std;
class example {
public:
    example(){}
    static int i;
    
};
int example::i = 1;
int main()
{
    example ex;
    ex.i = 10;

    cout << "i = " << ex.i << endl;;

    return 0;
}