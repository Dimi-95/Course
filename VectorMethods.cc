#include <iostream>
#include <vector>

int main()
{
    std::vector<float> my_vector;

    for( int i = 0; i < 14; ++i)
    {
        my_vector.push_back(i);
        std::cout << my_vector[i] << std::endl;
    }

    my_vector.clear();
    my_vector.shrink_to_fit();
    std::cout << my_vector.size() << std::endl;
    std::cout << my_vector.capacity() << std::endl;


    for( int i = 0; i < my_vector.size(); ++i)
    {
        my_vector.push_back(i);
        std::cout << my_vector[i] << std::endl;
    }

    for( int i = 0; i < 14; ++i)
    {
        my_vector.push_back(i);
        std::cout << my_vector[i] << std::endl;
    }

    my_vector.resize(3);

    for( int i = 0; i < my_vector.size(); ++i)
    {
        std::cout << my_vector[i] << std::endl;
    }

    std::cout << my_vector.empty() << std::endl;

    return 0;
}
