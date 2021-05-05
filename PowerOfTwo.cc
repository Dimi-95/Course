#include <iostream>

using std::cout;
using std::cin;
using std::endl;

bool is_power_of_two(unsigned int number)
{
    bool is_power = false;

    if(number > 1)
    {
        number = number / 2;

        if (number % 2 == 0)
        {
            is_power = true;
        }
        else
        {
            is_power = false;
        }
    }
    else
    {

    }

    return is_power;
}

int main()
{
    unsigned int zahl;
    int answer;
    cout << "Enter a number, to determine if the number is a power of two: " << endl;
    cin >> zahl;

    answer = is_power_of_two(zahl);
    cout << answer;





    return 0;
}
