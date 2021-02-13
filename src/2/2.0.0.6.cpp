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
    auto const c = ask_user_for_integer(" c = ");
    auto const d = ask_user_for_integer(" d = ");
    auto const e = ask_user_for_integer(" e = ");
    auto const f = ask_user_for_integer(" f = ");
	if(a == b)
    {
        std::cout << a << " = " << b << std::endl;
    }
    else if(a > b)
    {
        std::cout << a << " > " << b << std::endl;
    }
    else if(a < b)
    {
        std::cout << a << " < " << b << std::endl;
    }
    if(a == c)
    {
        std::cout << a << " = " << c << std::endl;
    }
    else if(a > c)
    {
        std::cout << a << " > " << c << std::endl;
    }
    else if(a < c)
    {
        std::cout << a << " < " << c << std::endl;
    }
    if(a == d)
    {
        std::cout << a << " = " << d << std::endl;
    }
    else if(a > d)
    {
        std::cout << a << " > " << d << std::endl;
    }
    else if(a < d)
    {
        std::cout << a << " < " << d << std::endl;
    }
    if(a == e)
    {
        std::cout << a << " = " << e << std::endl;
    }
    else if(a > e)
    {
        std::cout << a << " > " << e << std::endl;
    }
    else if(a < e)
    {
        std::cout << a << " < " << e << std::endl;
    }
    if(a == f)
    {
        std::cout << a << " = " << f << std::endl;
    }
    else if(a > f)
    {
        std::cout << a << " > " << f << std::endl;
    }
    else if(a < f)
    {
        std::cout << a << " < " << f << std::endl;
    }
	return 0;
}