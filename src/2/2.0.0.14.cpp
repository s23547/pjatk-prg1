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
    
    for (int i = 0; i < a; ++i)
    {
        std::cout << "*";
    }
    std::cout << std::endl;
    for (int j = 0; j < a-2; ++j)
    {
        std::cout << "*";
        for (int i = 0; i < a-2; ++i)
        {
            std::cout << " ";
        }
        std::cout << "*" << std::endl;
    }
    for (int i = 0; i < a; ++i)
    {
        std::cout << "*";
    }
    std::cout << std::endl;

}