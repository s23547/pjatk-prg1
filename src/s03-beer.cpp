#include <iostream>

auto main() -> int // argc- zlicza ilość wyrazów podanych w termianlu
{   

    for(int i = 99; i>0; --i)
    {
        std::cout << i << " bottles of beer on the wall,";
        std::cout << i << " bottles of beer.\nTake one down, pass it around,"<<std::endl;

    }

    std::cout <<"No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, 99 bottles of beer on the wall";
 
    return 0;
}
