#include <iostream>
#include <string>

auto main() -> int
{
    std::string powitanie = "hello world!";
    std::string *p = &powitanie;
    std::cout << *p << std::endl;

    return 0;
}