#include <iostream>
#include <string>

auto ask_user_for_integer(std::string prompt) -> int
{
    if (not prompt.empty()) {
    std::cout << prompt ;
}
    auto value = std::string{};
    std::getline(std::cin, value);
    return std::stoi(value);
}
auto main() -> int
{
	auto a = ask_user_for_integer(" a = ");

    if(a == 0)
        {
            std::cout << a << std::endl;
        }
    else if(a > 0)
        {
            std::cout << a << std::endl;
        }
    else if(a < 0)
        {
            a = a * -1;
            std::cout << a << std::endl;
        }
	return 0;
}