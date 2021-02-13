#include <iostream>
#include <string>

auto print(std::string const &p) -> void
{
    std::cout << p << " = " << &p << std::endl;
}
auto main() -> int
{
    print("Witam");
    return 0;
}