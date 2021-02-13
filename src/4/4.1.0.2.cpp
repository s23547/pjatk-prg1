#include <iostream>
#include <cstring>
#include <string.h>

auto main() -> int
{
    std::cout << "Size of char : " << sizeof(std::string*) << "\n";
    std::cout << "Size of char : " << sizeof(int*) << "\n";
    std::cout << "Size of char : " << sizeof(uint16_t*) << "\n";
    std::cout << "Size of char : " << sizeof(char*) << "\n";


    return 0;
}