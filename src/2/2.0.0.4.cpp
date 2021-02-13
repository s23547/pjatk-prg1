#include <iostream>
#include <string>

auto ask_user_for_integer(std::string prompt) -> int
{
	std::cout << prompt;
	auto n = std::string{};
	std::getline(std::cin, n);
	return std::stoi(n);
}
bool pierwsza(int a)
{
    if(a<2)
	    return false;
		
	for(int i=2;i*i<=a;i++)
		if(a%i==0)
		return false;
	    
    return true;
}
auto main() -> int
{
	auto const a = ask_user_for_integer(" a = ");
    auto suma = 0;
	if(pierwsza(a))
		std::cout << "Liczba "<< a <<" jest pierwsza" << std::endl;
	else
		std::cout << "Liczba "<< a <<" nie jest pierwsza" << std::endl;

    return 0;
}
