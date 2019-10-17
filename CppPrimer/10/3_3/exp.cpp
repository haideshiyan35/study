#include <iostream>

using namespace std;

int main()
{
    int val = 42;

    auto f = [&val]() { return ++val;}; //捕获val若是值捕获，lambda中不能改变val的值，若想修改val的值，需要 [val]() mutable {return ++val;};
    // auto f = [val]() mutable {return ++val;}; 
    val = 0;
    int j = f();
    //int j = f();
    cout << j << endl;
    //cout << j << endl; // j = 43;
    return 0;
}
