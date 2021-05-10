#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//int* input_array <=> int input_array[]

int array_maximum(int* input_array, unsigned int length)
{
    int current_max_value = 0;

    for(int i = 0; i < length; i++ )
    {
        if( i == 0)
        {
            current_max_value = input_array[i];
        }
        else if (input_array[i] > current_max_value)
        {
            current_max_value = input_array[i];
        }

    }

    return current_max_value;
}

int main()

{
    unsigned int array_size = 10;

    //Heap Allocation
    int* p = new int[ array_size ] ;
    cout << sizeof(p) << "test "<< endl;
    cout << sizeof(*p) << endl;

    for(int i = 0; i < array_size; i++)
    {
        p[i] = i;
    }

    cout << array_maximum(p, array_size);

    //Heap Deallocation
    delete[] p;


    return 0;
}
