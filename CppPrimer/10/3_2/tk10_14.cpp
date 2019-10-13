#include <iostream>

using namespace std;

int main()
{
    auto f = [](int a, int b){ //[]用于捕获局部非静态变量，多个变量用逗号隔开；()lambda表达参数列表，多个参数用逗号隔开；{}lambda表达式函数体
        return a + b;
    };

    cout << f(3, 4) << endl;

    return 0;
}
