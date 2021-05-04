#include <iostream>
#include <math.h>

#define PI 3.14159

using std::cout;
using std::cin;
using std::endl;

int main()
{
    double durchmesser;
    double umfang;
    double flache;
    double a;

    cout << "Gebe den Durchmesser (cm) eines Kreises ein: ";
    cin >> durchmesser;

    umfang = durchmesser * PI * 2;
    cout << "Der Umfang des Kreises ist: " << umfang << "cm" << endl;

    a = pow(durchmesser, 2);
    flache = PI * a;
    cout << "Die Fläche des Kreises ist: " << flache << "cm";

}
