#include <iostream>
#include <memory>

class ScopeTest
{
public:
    ScopeTest(int val) : m_val(val)
    {
        std::cout << "Constructor: " << m_val << std::endl;
    }
    ~ScopeTest()
    {
        std::cout << "Destructor!" << std::endl;
    }
    void test()
    {
        std::cout << "Test!" << std::endl;
    }
private:
    int m_val;
};

void f1()
{
    std::shared_ptr<ScopeTest> t = std::make_shared<ScopeTest>(10);
}

int main()
{

    f1();

    getchar();
    return 0;
}
