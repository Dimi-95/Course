#include <iostream>
#include <vector>
#include <math.h>


using std::cout;
using std::endl;

void fill_double_vector(std::vector<double> &vec)
{
    for(int i = 0; i <  vec.size(); ++i)
    {
         vec[i] = i;
    }
}


void print_double_vector(const std::vector<double> &vec)
{
    for(int i = 0; i < vec.size(); ++i)
    {
        cout << "Vec[" << i << "] = " << vec[i] << endl;
    }

        cout << endl;
}

void double_vector_exp(std::vector<double> &vec)
{
    for(int i = 0; i < vec.size(); ++i)
    {
        vec[i] = std::exp(vec[i]);
    }

}

void double_vector_log(std::vector<double> &vec)
{
    for(int i = 0; i < vec.size(); ++i)
    {
        vec[i] = std::log(vec[i]);
    }

}

int main()
{

    std::vector<double> my_vector(6, 0);

    fill_double_vector(my_vector);
    print_double_vector(my_vector);

    double_vector_exp(my_vector);
    print_double_vector(my_vector);

    double_vector_log(my_vector);
    print_double_vector(my_vector);




    return 0;
}
