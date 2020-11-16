#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>

auto main() -> int
{
    srand(time(NULL));
    auto liczba_losowa =(std::rand() % 100);
    int liczba;
    std::cout << "Podaj liczbe od 1 do 100:\n ";
	std::cin>>liczba;


    do{

        if (liczba>liczba_losowa)
        {
            std::cout << "Liczba jest za duza. Sprobuj ponownie" << std::endl;
            std::cin>>liczba;
        }
        else if (liczba<liczba_losowa)
        {
            std::cout << "Liczba jest za mala.Sprobuj ponownie" << std::endl;
            std::cin>>liczba;
        }
    }
    while(liczba!=liczba_losowa);
    std::cout << "Brawo! Dobrze zgadles liczbe: " << liczba_losowa << std::endl;
    return 0;

}
