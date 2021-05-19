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


void double_vector_exp_iterator(std::vector<double> &vec)
{
    for(auto it = vec.begin(); it != vec.end(); ++it)
    {
        *it = std::exp(*it);
    }

}

void double_vector_exp_for_each(std::vector<double> &vec)
{
    for(auto &val : vec)
    {
        val = std::exp(val);
    }

}

void double_vector_log_iterator(std::vector<double> &vec)
{
    for(auto it = vec.begin(); it != vec.end(); ++it)
    {
        *it = std::log(*it);
    }

}

void double_vector_log_for_each(std::vector<double> &vec)
{
    for(auto &val : vec)
    {
        val = std::log(val);
    }

}

int main()
{

    std::vector<double> my_vector(6, 0);

    fill_double_vector(my_vector);
    print_double_vector(my_vector);

    double_vector_exp_iterator(my_vector);
    print_double_vector(my_vector);

    double_vector_log_iterator(my_vector);
    print_double_vector(my_vector);

    double_vector_exp_for_each(my_vector);
    print_double_vector(my_vector);

    double_vector_log_for_each(my_vector);
    print_double_vector(my_vector);




    return 0;
}
