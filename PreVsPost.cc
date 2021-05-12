#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int val = 0;

    //Post: Erst die Code Zeile ausführen dann den Wert erhöhen
    // val2 = val + 1 (Innerhalb der Zeile)
    // val = val2     (Nach beenden der Zeile)

    //Pre: Erst den Wert erhöhen dann die Code Zeile ausführen
    // val = val + 1  (Innerhalb der Zeile)

    cout << val++ << endl; //Post
    cout << ++val << endl; //Pre


    return 0;
}
