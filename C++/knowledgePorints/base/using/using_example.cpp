#include <iostream>

using namespace std;

/*
    基本使用方法
*/

void func()
{
    cout << "::func" << endl;
}

namespace ns1 {
    void func() {
        cout << "ns1::func" << endl;
    }
}

namespace ns2 {
#ifdef isNs1
    ::func();
#elif isGlobal
    ns1::func();
#else
    void func() {
        cout << "other::func" << endl;
    }
#endif
}

/*
    改变访问属性
*/

class base {
public:
    base(int a):n(a) {}
    ssize_t size() const { return n;}
protected:
    ssize_t n;
};

class derived : private base {
public:
    using base::size; //继承类中可以以public的权限访问size
protected:
    using base::n; //继承类中可以以protected的权限访问n
};

/*
    函数重载
    特点：
        1、在继承过程中，派生类可以覆盖重载函数的0个或多个实例，一旦定义了一个重载版本，那么其他的重载版本都会变为不可见。
        2、在派生类中使用using声明语句指定一个名字而不指定形参列表，所以一条基类成员函数的using声明语句就可以把该函数的所有重载实例添加到派生类的作用域中，
        此时，派生类只需要定义其特有的函数就行了，而无需为继承而来的其他函数重新定义。
*/

class baseOverride {
public:
    void f() { cout << "f()" << endl; }
    void f(int n) { cout << "f(int n)" << endl; }
};

class derivedOverride : private baseOverride {
public:
    using baseOverride::f;
    void f(int n) {cout << "derivedOverride f(int n)" << endl; }
};

/*
    取代typedef，如下功能一致
    typedef vector<int> V1; 
    using V2 = vector<int>;
*/

int main()
{
    ns2::func(); //基本使用方法
 
    return 0;
}