#include <iostream>

// 1a. static_cast: convert object from one type to another (C++)
// 1b. c-style casting (C)

// C++ Casting vs. C Casting:
// Easier to read, less prone to errors

int main()
{
    double zahl = 3.14;

    int zahl2 = zahl;

    // C++ casting (static_cast)
    char zahl4 = static_cast<char>(zahl); //static_cast<NEW_DTYPE>(VARIABLE_NAME)
    std::cout << zahl4 << std::endl;



    return 0;
}
