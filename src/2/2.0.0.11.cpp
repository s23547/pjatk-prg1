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
	auto const a = ask_user_for_integer(" a = ");
    auto const b = ask_user_for_integer(" b = ");

    for(auto j = 0; j < a; j++)
    {
        for(auto i = 0; i < b; i++)
        {
            std::cout << "*";        
        }
    std::cout << std::endl;
    }
	return 0;
}