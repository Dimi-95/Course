#include <iostream>


namespace computation
{
    struct Dataset
    {
        double mean_array_a;
        double mean_array_b;

    };



        double mean_array_value(int *array, const unsigned int &length)
    {
        double sum;

        for(int i = 0; i < length; i++)

        {
            sum += array[i];
        }

        sum = sum / length;

        return sum;
    }

    double mean_array_value(double *array, const unsigned int &length)
    {
        double sum;

        for(int i = 0; i < length; i++)

        {
            sum += array[i];
        }

        sum = sum / length;

        return sum;
    }
}

using std::cout;
using std::cin;
using std::endl;



int main()
{

    const unsigned int array_elements = 5;

    int array_a[array_elements] = {1, 2, 3, 4, 5};
    double array_b[array_elements] = {1.0, 2.5, 3.5, 4.5, 10.0};

    double mean_array_a = computation::mean_array_value(array_a, array_elements);
    double mean_array_b = computation::mean_array_value(array_b, array_elements);

    // cout << mean_array_a << endl;
    // cout << mean_array_b << endl;

    computation::Dataset data{ mean_array_a, mean_array_b};

    cout << data.mean_array_a << endl;
    cout << data.mean_array_b << endl;

    return 0;
}
