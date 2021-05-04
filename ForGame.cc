#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int spiele;

    cout << "Willkommwn bei meinem Gluecks-Spiel" << endl;
    cout << "Bitte gebe eine Zahl ein, wie viele Spiele du spielen willst: ";
    cin >> spiele;

    for(int i = 0; i < spiele; i++)
    {
        int zahl;
        cout << "Du bist im Spielverlauf " << i << endl;
        cout << "Bitte gebe eine Zahl aus dem Intervall [1, 10] ein: ";
        cin >> zahl;

        if (zahl >= 1 && zahl <= 10)
        {
            if(zahl == 4)
            {
                cout << "Gewonnen Boi ! " << endl;
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
