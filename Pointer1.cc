#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int number = 1337;
    cout << "Value of Number: " << number << endl;
    cout << "Memory adress of Number: " << &number << endl;

    //Pointer muss auf eine Speicheradresse zeigen
    //pointer: Memory adress
    //*Pointer: Value of that memory adress
    int* pointer = &number;
    cout << "The Memory adress that the variable 'pointer' points to: " << pointer << endl;
    cout << "The Value that the variable 'pointer' points to: " << *pointer << endl;

    return 0;
}
