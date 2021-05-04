#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int zahl;
    cout << "Willkommwn bei meinem Gluecks-Spiel" << endl;
    cout << "Bitte gebe eine Zahl aus dem Intervall [1, 10] ein: ";
    cin >> zahl;

    //Vergleichs-Operatoren:
    //Gleichheit (==), Kleiner Gleich (<=), Groesser Gleich (>=)

    // Logische Verknüpfungen:
    // Und (&&), Oder (||)

    if (zahl >= 1 && zahl <= 10)
    {

        // HP bei der Zahl  4
        // Ansonsnten, hat man verloren
        //Trost-Preis wenn der User eine Zahl eingibt, die durch 2 teilbar ist
        // [2, 4, 6, 8, 10]
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




    return 0;
}
