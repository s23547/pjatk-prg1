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
	auto const a = ask_user_for_integer(" silnia = ");
	auto silnia = 1;

    for(auto i = 1; i <= a; i++) 
    {
        silnia = silnia * i;
    }
    std::cout << silnia << std::endl;

	return 0;
}