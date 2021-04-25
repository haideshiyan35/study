#include <iostream>

//template<typename T>
class singletonHgy {
public:
    ~singletonHgy() {
        std::cout << "destructor called!" << std::endl;
    }
    singletonHgy& operator=(const singletonHgy& ) = delete;
    singletonHgy(const singletonHgy& ) = delete;
    static singletonHgy& getInstance(){
        /*并发线程获取局部静态变量的时候是要保证静态变量被初始化的，所以此次是线程安全的*/
        static singletonHgy mInstance;

        return mInstance;
    }
private:
    singletonHgy() { 
        std::cout << "constructor called!" << std::endl;
    }
};


int main()
{
    singletonHgy& instance_1 = singletonHgy::getInstance();
    singletonHgy& instance_2 = singletonHgy::getInstance();

    return 0;
}
