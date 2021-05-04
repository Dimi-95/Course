#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    char auswahl;
    cout << "Wahle einen Schokoriegel (a-d): ";
    cin >> auswahl;


     switch (auswahl)
    {
    case 'a': cout << " Du bekommst einen Aounty" << endl; break;
    case 'b': cout << " Du bekommst einen Bwix " << endl; break;
    case 'c': cout << " Du bekommst einen Vars " << endl; break;
    case 'd': cout << " Du bekommst einen lickers " << endl; break;
    default: cout << "Falsche Eingabe! " << endl;
    }



    return 0;
}
