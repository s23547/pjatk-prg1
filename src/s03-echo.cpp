#include <iostream>

auto main(int argc, char* argv[]) -> int
{   
    for (auto i = 1; i < argc; ++i) 
    {
        std::cout << " " << argv[ i ];
    }
    
    return 0;
}