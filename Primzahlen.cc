#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    bool is_prime = true;
    unsigned int number;

    cout << "Please enter a number: ";
    cin >> number;


    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            is_prime = false;
            break;
        }
    }

    if (is_prime == false)
        cout << "The number " << number << " is not  prime number!" << endl;
    else
        cout << "The number " << number << " is a prime number!" << endl;

    return 0;
}
