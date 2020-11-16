#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int
{
	auto const dobrehaslo = std::string{ argv[1] };
	auto haslo = std::string{};
	std::cout << "Podaj haslo:\n ";
	std::getline(std::cin, haslo);
	

	while (haslo != dobrehaslo)
	{
		std::cout << "Jeszcze raz:";
		std::getline(std::cin, haslo);
		if (haslo == dobrehaslo) {
			std::cout << "ok!\n";
		}
		return 0;
	}
}