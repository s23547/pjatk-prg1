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
	auto const a = ask_user_for_integer(" limit = ");
	auto const b = ask_user_for_integer(" dzielnik = ");
    auto suma = 0;
	
    for(auto i = 0; i <= a; i++)
    {
        if(i%b == 0)
        {
            suma += i;
        }
    }
    std::cout << suma << std::endl;
	return 0;
}