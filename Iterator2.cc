#include <iostream>
#include <vector>
#include <list>
#include <numeric>
#include <iterator>

int main()
{
    std::vector<int> my_vector(5, 0);
    std::iota(my_vector.begin(), my_vector.end(), 0);

    std::vector<int> my_list(5, 0);
    std::iota(my_list.begin(), my_list.end(), 0);

    auto it = my_list.begin();

    std::advance(it, 2); // it += 2;

    std::cout << "Vector[2]: " << my_vector[2] << std::endl;
    std::cout << "List[2]: " << *it << std::endl;

    return 0;
}
