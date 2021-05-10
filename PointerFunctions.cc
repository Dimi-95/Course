#include <iostream>

void f(int *p_function)
{
    std::cout <<"(FUNC): p_function = " << p_function << std::endl;
    std::cout <<"(FUNC): &p_function = " << &p_function << std::endl;

}


int main()
{
    int *p_number = new int { 4 }; //creates a variable that is saved in the heap
    std::cout <<"(MAIN): p_number = " << p_number << std::endl;
    std::cout <<"(MAIN): &p_number = " << &p_number << std::endl;

    f(p_number); // not the pointer itself but the value of the pointer

    return 0;
}
