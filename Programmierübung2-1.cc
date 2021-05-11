#include <iostream>

using std::cout;
using std::cin;
using std::endl;


double array_sum(double* p_array, const unsigned int &length)
{
    double summe;
    double z_summe;

    for(int i = 0; i < length; i++)
        if(i == 50)
        {
            break;
        }
        else
        {

           summe = p_array[i] + (99 - i);


           z_summe = summe + z_summe;

        }

    return z_summe;
}


int main()
{

    unsigned int elem = 100;

    double* array = new double[elem];

    for(int i = 0; i < elem; i++)
    {
        array[i] = i; // position 0 has the number 0 in it, position 1 has the number 1 in it and so on

        cout << array[i] << endl;
    }


    //Bcout << array_sum(array, elem) << endl;

    double sum = array_sum(array, 100);
    cout << sum << "test";

    delete[] array;



    return 0;
}
