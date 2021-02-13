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
    auto c = ask_user_for_integer(" krok = ");
    for(auto i = a; i < b; i++)
    {
        if(c == 0)
        {
            std::cout << "KROK MUSI BYC ROZNY OD ZERA" << "\n";
            return 1;
        }
        else if(c < 0)
        {
            c = c * -1;
            i = i + c;
        }
        else
        {
            i = i + c;
        }
        for(i; i < b; i++)
        {
            std::cout << i << "\n";
        }
    }
    return 0;
}
