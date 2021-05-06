#include <iostream>

using std::cout;
using std::cin;
using std::endl;

double modulo(unsigned int number, unsigned int other_number)
{
    double result;
    double result2;
    double end_result;

    result = number / other_number;
    result2 = other_number * result;
    end_result = number - result2;

    return end_result;


}

int main()
{
    double answer = modulo(20, 3);
    cout << answer;


    return 0;
}
