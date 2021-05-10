#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//Call by value
void f1(int number)
{
    number++;
}


//Call by reference
void f2(int &number)

{
    number++;
}


int main()
{

    int num = 5;
    cout << num << endl;

    f1(num);
    cout << num << endl;

    f2(num);
    cout << num << endl;

    return 0;
}
