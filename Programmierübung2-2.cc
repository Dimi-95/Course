#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int* array_constructor(const int &value, const unsigned int &length)
{
    int* array;

    for(int i = 0; i < length; i++)
    {
         array[i] = value;
    }

    return;
}




int main()
{

    int* array = array_constructor(5, 3);

    cout << array;

    return 0;
}

//	// Aufgabe 2
//	unsigned int input_array_length;
//	int input_array_value;
//
//	cout <<  endl<< "Gebe Array Length ein!" << endl;
//	cin >> input_array_length;
//	cout << endl << "Gebe Array Wert ein!" << endl;
//	cin >> input_array_value;
//
//	int *p_array_exercise2 = array_constructor(input_array_value, input_array_length);
//
//	for (int i = 0; i < input_array_length; i++)
//	{
//		cout << p_array_exercise2[i] << endl;
//	}
//
//	return 0;
//}
