#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    // C-Style char arrays: \0 (null-terminating character)
    cout << "Hello World!" << endl;

    char str[] = "Dimi der Dimi";
    cout << str << endl;

    for( int i = 0; i < 13; i++)
    {
        cout << str[i] << endl;
    }

    return 0;
}
