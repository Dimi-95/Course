#include <iostream>
#include <string>

int main()
{

    std::string s = "Hallo das ist ein Text";

    std::size_t index = s.find("Hallo");

    //npos Wert wird angenommen wenn die String nicht gefunden werden kann
    //npos = 2^64 - 1
    if (index != std::string::npos)
    {
        std::cout << "Substring found at Index = " << index << std::endl;
    }
    else
    {
        std::cout << "Substring not found!"<< std::endl;
    }

    return 0;
}
