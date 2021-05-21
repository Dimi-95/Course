#include <iostream>
#include <vector>
#include <list>
#include <numeric>

int main()
{
    std::vector<int> my_vector(5, 0);
    std::iota(my_vector.begin(), my_vector.end(), 0);

    std::vector<int> my_list(5, 0);
    std::iota(my_list.begin(), my_list.end(), 0);

    //ForwardIterator

    std::vector<int>::iterator it1 = my_vector.begin();
    std::vector<int>::iterator it2 = my_vector.end();

    for(it1; it1 != it2; ++it1)
    {
        std::cout << *it1 << " " << &(*it1) << " " << &it1 << std::endl;
    }

    //Const ForwardIterator

    std::vector<int>::const_iterator it3 = my_vector.begin();
    std::vector<int>::const_iterator it4 = my_vector.end();

    for(it3; it3 != it4; ++it3)
    {
        std::cout << *it3 << " " << &(*it3) << " " << &it3 << std::endl;
    }


    return 0;
}
