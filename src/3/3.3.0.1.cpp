#include <iostream>
#include <string.h>

auto random_number() -> int
{
    auto liczba = (std::rand() % 50) + 7;
    std::cout<<liczba<<std::endl;
}

auto call_with_random_int(void (*fp)(int const)) -> void;


auto main() -> int
{
    auto fp=&random_number;
    call_with_random_int(5);
    return 0;
}