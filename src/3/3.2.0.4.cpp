#include <iostream>
#include <string.h>

auto main() -> int
{
    char text[] = "testowanie";
    memset(text,'*', 3);
    std::cout << text << std::endl;
    return 0;
}