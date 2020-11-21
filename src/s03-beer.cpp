#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int // argc- zlicza ilość wyrazów podanych w termianlu
{   
    auto ilosc_butelek = std::stoi(argv[1]);
    for(ilosc_butelek; ilosc_butelek>0; --ilosc_butelek)
    {
        std::cout << ilosc_butelek << " bottles of beer on the wall,";
        std::cout << ilosc_butelek << " bottles of beer.\nTake one down, pass it around,"<<std::endl;

    }

    std::cout <<"No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, 99 bottles of beer on the wall";
 
    return 0;
}
