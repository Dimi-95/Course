// Hier die benötigten Includes und using Befehle
#include <iostream>

using std::cout;
using std::cin;
using std::endl;



// Hier die Definition der Funktion
int main()
{

    for (int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            float zahl = (i + j) % 2;
            //cout << zahl << endl;

            if(zahl == 0 )
            {
                cout << "i: " << i << ", j: " << j << ":= " << "Gerade !"<< endl;
            }
            else
            {
                cout << "i: " << i << ", j: " << j << ":= " << "Ungerade !"<< endl;
            }






        }


    }
}





