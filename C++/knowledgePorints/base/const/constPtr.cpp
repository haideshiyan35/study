#include <iostream>

void constObjPtr()
{
    const int *ptr = NULL;
    int val = 10;

    ptr = &val;
    std::cout << "*ptr = " << *ptr << std::endl;
    val = 20;
    std::cout << "*ptr = " << *ptr << std::endl; 
    *ptr = 30; //这种方式会报错
}

void constPtr()
{
    
}

int main()
{

    return 0;
}
