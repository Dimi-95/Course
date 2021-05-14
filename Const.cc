#include <iostream>

#define LEN 10

void print_value(const unsigned int &value)
{
    std::cout << value << std::endl;
}

int main()
{

    // 1. Zahl reinschreiben
    int arr1[10];
    // 2. Preprocessor Define
    int arr2[LEN];
    // 3. Const Variable
    const unsigned int length = 10;
    int arr3[length];

    // Const Parameters in Functions
    print_value(length);

    // 4. constexpr variable
    constexpr unsigned int length2 = 5;
    int arr4[length2];

    return 0;
}
