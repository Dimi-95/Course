#include <iostream>
#include <string>
#include <fstream>

int main()
{
    std::string str;
    std::string text;

    std::ifstream iffile;
    iffile.open("C:/UdemyCpp_Template-main/5_STLStrings/Text.txt");

    if (iffile.is_open())
    {
        while (std::getline(iffile, str))
        {
            text += str + '\n';
        }
    }

    iffile.close();

    std::cout << text << std::endl;

    return 0;
}
