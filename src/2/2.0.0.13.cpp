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
	auto  a = ask_user_for_integer(" a = ");

    while(auto k = 0 < a)
    {
       for(auto i = 0; i < a; i++)
       {
           std::cout << "*";   
       }
    a--;
    std::cout << std::endl;
    }
    return 0;

}