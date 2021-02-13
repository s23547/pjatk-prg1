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
    for(auto i = a; i < b; i++)
    {
        std::cout << i << "\n";
    }
    return 0;
}
