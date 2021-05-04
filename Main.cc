#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    double a;
    double umfang;
    double f_inhalt;

    cout << "Schreibe die Seitenlaenge (cm) a eines Quadrates: " << endl;
    cin >> a;

    umfang = a * 4;
    cout << "Der Umfang des Quadrates ist: " << umfang << "cm" << endl;

    f_inhalt = a * a;
    cout << "Der Flaecheninhalt des Quadrates ist: " << f_inhalt << "cm";



    return 0;
}
