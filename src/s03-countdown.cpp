#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <windows.h>


auto main(int argc, char* argv[]) -> int
{
    auto liczba = std::stoi(argv[1]);
    for(int i = liczba; i>=0; --i)
    {
        Sleep(1000);
        std::cout << i << "...\n";
    }
    std::cout << "Koniec odliczania";
 
    return 0;
}