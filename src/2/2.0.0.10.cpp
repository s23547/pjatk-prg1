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
	auto a = ask_user_for_integer(" silnia = ");
	auto silnia = 1;

    do
    {
        silnia = silnia * a;
        a--;
    }
    while (a > 0);
    std::cout << silnia << std::endl;

	return 0;
}