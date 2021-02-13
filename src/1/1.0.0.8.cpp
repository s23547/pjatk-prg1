#include <iostream>
#include <string>

auto ask_user_for_integer(std::string prompt) -> int
{
	std::cout << prompt;
	auto n = std::string{};
	std::getline(std::cin, n);
	return std::stoi(n);
}
auto main() -> int
{
	auto const a = ask_user_for_integer(" a = ");
	auto const b = ask_user_for_integer(" b = ");
    auto const c = ask_user_for_integer(" c = ");
    if (a > b)
    {
        if(a > c)
        {
            std::cout << a << "\n";
        }
        else
        {
            std::cout << c << "\n";
        }
    }
    else if(b > c)
    {
        std::cout << b << "\n";
    }
    else
    {
        std::cout << c << "\n";
    }
    
    
	return 0;
}