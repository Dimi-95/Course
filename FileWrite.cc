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

    std::string search_str = "Dimi";
    std::string replace = "Kas";
    auto idx = text.find(search_str);
    text.replace(idx, search_str.size(), replace );

    std::cout << text << std::endl;

    std::ofstream offile;
    offile.open("TextOutput.txt");

    if (offile.is_open())
    {
        offile << text;
    }

    offile.close();

    return 0;
}
