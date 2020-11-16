#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int
{
    auto liczba = std::stoi(argv[1]);
    for ( auto i=1; i<=liczba ; ++i ) 
    {
        
        if(i % 3 == 0 && i % 5 == 0)
        {
            std::cout << " " << i;
            std::cout << " FizzBuzz\n";
        }

        else if(i % 3 == 0)
        {
            std::cout << " " << i;
            std::cout << " Fizz\n";
        }

        else if(i % 5 == 0)
        {
            std::cout << " " << i;
            std::cout << " Buzz\n";
        }

        else{

            std :: cout << " " << i << std::endl;
        }
    }
    return 0;
}
