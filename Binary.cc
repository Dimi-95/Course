#include <iostream>
#include <bitset>
#include <string>


int main()
{

    std::bitset<8> my_byte1(std::string("00011101"));
    std::bitset<8> my_byte2(std::string("10010101"));

    std::cout << my_byte1 << std::endl;
    std::cout << my_byte2 << std::endl;

    std::cout << (my_byte1 & my_byte2) << std::endl;

    unsigned char hex1 = 0x01; // 0000 0001
    unsigned char hex1 = 0xff; // 1111 1111

    return 0;
}
