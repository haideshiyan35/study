#include <iostream>
#include <memory>
#include <mutex>

class Singleton {
public:
    typedef std::shared_ptr<Singleton> Ptr;
    ~Singleton() {
        std::cout << "destructor called!" << std::endl;
    }
    Singleton(Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    static Ptr getInstance() {
        if(m_InstancePtr == nullptr){
            std::lock_guard<std::mutex> lk(m_Mutex);
            if(m_InstancePtr == nullptr){
                m_InstancePtr = std::shared_ptr<Singleton>(new Singleton);
            }
        }

        return m_InstancePtr;
    }

private:
    Singleton() {
        std::cout << "constructor called!" << std::endl;
    }
    /*静态成员变量在这里仅仅是声明，而没有定义（未分配内存）*/
    static Ptr m_InstancePtr;
    static std::mutex m_Mutex;
};
/*static成员变量，在这里才真正进行了定义并初始化（分配内存）*/
Singleton::Ptr Singleton::m_InstancePtr = NULL;
std::mutex Singleton::m_Mutex;

int main()
{
    Singleton::Ptr instance = Singleton::getInstance();
    Singleton::Ptr instance2 = Singleton::getInstance();

    return 0;
}
