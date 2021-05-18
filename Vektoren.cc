#include <iostream>
#include <vector>

using std::vector;

int main()
{
    //int* data = new...;
    //                        LEN,  Default_value
    std::vector<int> my_vector(2, 42);

    std::cout << my_vector[0] << std::endl;
    std::cout << my_vector[1] << std::endl;

    my_vector[0] = 11;
    my_vector[1] = -43;

    std::cout << my_vector[0] << std::endl;
    std::cout << my_vector[1] << std::endl;

    std::cout << my_vector.at(0) << std::endl;
    std::cout << my_vector.at(1) << std::endl;

    // puch_back addiert ein Element in die Array
    my_vector.push_back(24);

    // size in der Regel die LENGTH [0 ,1 ,2....]
    for(int i = 0; i < my_vector.size(); ++i)
    {
        std::cout << my_vector[i] << std::endl;
    }

    // pop_back subtrahiert das letze Element in der Array
    my_vector.pop_back();

    // data
    int* array = my_vector.data();

    return 0;
}
