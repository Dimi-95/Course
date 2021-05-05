//Definition
#include <iostream>
#include "Spiel.h"

using std::cout;
using std::cin;
using std::endl;

void game()
{
     bool gewonnen = false;
    cout << "Willkommen bei meinem Gluecks-Spiel" << endl;


    while(gewonnen == false)
    {
        int zahl;
        cout << "Bitte gebe eine Zahl aus dem Intervall [1, 10] ein: ";
        cin >> zahl;

        if (zahl >= 1 && zahl <= 10)
        {
            if(zahl == 4)
            {
                cout << "Gewonnen Boi ! " << endl;
                gewonnen = true;
            }
            else if(zahl % 2 == 0 )
            {
                cout << "du hast einen Trostpreis gewonnen! " << endl;
            }
            else
            {
                cout << "LOSER !" << endl;
            }


        }
        else
        {
            cout << "Falsche Zahl";
        }
    }
}
