#include <iostream>

/*
友元函数的声明：
    friend <类型><友元函数名>(<参数表>);
友元类的声明：
    friend class <友元类名>;
特点：
    1、友元类关系没有继承特性
    2、友元类关系没有传递特性
*/

class A {
public:
    A(int a):ca(a) {}
    friend int getCa(A& a); //友元函数的声明
    friend class B; //友元类的声明
private:
    int ca;
};

int getCa(A& a)
{
    return a.ca;
}

class B{
public:
    B() {}
    int getCa(A& a){
        return a.ca;
    }
};

class C : B {
public:
    C(){}
    int getCa(A& a) {
 //       return a.ca; //error friend不具有继承关系
    }
};

int main()
{
    A a(10);
    B b;
    C c;
    std::cout << "friend func a = " << getCa(a) << std::endl;
    std::cout << "friend class a = " << b.getCa(a) << std::endl;
    std::cout << "inherit class B a = " << c.getCa(a) << std::endl;

    return 0;
}
