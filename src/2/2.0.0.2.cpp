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
    auto const c = ask_user_for_integer(" dzielnik = ");
    for(auto i = a; i < b; i++)
    {
        if(c == 0)
        {
            std::cout << "NIE DZIELI SIE PRZEZ ZERO" << "\n";
            return 1;
        }
        else if(i % c == 0)
        {
            std::cout << i << "\n";
        }
    }
    return 0;
}
