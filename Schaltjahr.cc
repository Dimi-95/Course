#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int jahr;
    //double resultat;

    cout << "Tippe ein Jahr ein um zu sehen ob es ein Schaltjahr ist: " << endl;
    cin >> jahr;

    if ( jahr % 4 == 0)
    {
        if (jahr % 100 == 0)
        {
            if ( jahr % 400 == 0)
            {
                cout << "Das Jahr ist in der Tat ein Schaltjahr! " << endl;
            }
            else
            {
                cout << "Das Jahr ist kein Schaltjahr :( " << endl;
            }

        }
        else
        {
            cout << "Das Jahr ist in der Tat ein Schaltjahr!  :=D " << endl;
        }

    }
    else
    {
        cout << "Das Jahr ist kein Schaltjahr :( " << endl;
    }

    return 0;
}
