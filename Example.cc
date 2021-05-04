#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{

    double zahl1;
    double zahl2;
    double ergebnis;

    cout << "Bitte gebe eine Zahl ein: ";
    cin >> zahl1;
    cout << "Bitte gebe eine weitere Zahl ein: ";
    cin >> zahl2;

    //Rechenoperationen: Mult *, Add +, Subtr -, Div /

    //Ergebnis Multiplikation
    ergebnis = zahl1 * zahl2;
    cout << "Ergebnis Mult. : " << ergebnis << endl;

    //Ergebnis Addition
    ergebnis = zahl1 + zahl2;
    cout << "Ergebnis Add. : " << ergebnis << endl;

    //Ergebnis Subtration
    ergebnis = zahl1 - zahl2;
    cout << "Ergebnis Sub. : " << ergebnis << endl;

    //Ergebnis Division
    ergebnis = zahl1 / zahl2;
    cout << "Ergebnis Div. : " << ergebnis << endl;

    return 0;


}
