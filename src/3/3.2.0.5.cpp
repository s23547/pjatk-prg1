#include <iostream>
#include <string.h>

auto main() -> int
{
    const char *text = "testowanie";
    char wklej[5];
    memcpy(wklej, text, 4);
    std::cout << wklej << std::endl;
    return 0;
}