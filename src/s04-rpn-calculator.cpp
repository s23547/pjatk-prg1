#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <cstdio>
#include <math.h>


auto main ( int argc , char * argv []) -> int
{

    int Polecenie, a, b;
    Polecenie = 0;
   
    do {
        std::cout << "[1] MNOZENIE"
        << std::endl << "[2] DZIELENIE"
        << std::endl << "[3] DZIELENIE LICZB CALKOWITYCH"
        << std::endl << "[4] RESZTA Z DZIELENIA"
        << std::endl << "[5] POTEGOWANIE"
        << std::endl << "[6] PIERWIASTEK KWADRATOWY"
        << std::endl << "[7] LOGARYTM DZIESIETNY"
        << std::endl << "[8] Rezygnuj"
        << std::endl << "Twoje polecenie:";
       
        std::cin >> Polecenie;
       
        switch( Polecenie ) {
        case 1:
            std::cout << "Podaj pierwsza liczbe:";
            std::cin >> a;
            std::cout << "Podaj druga liczbe:";
            std::cin >> b;
            std::cout << "Wynik: " << a * b << std::endl;
            break;
           
        case 2:
            std::cout << "Podaj pierwsza liczbe:";
            std::cin >> a;
            std::cout << "Podaj druga liczbe:";
            std::cin >> b;
            std::cout << "Wynik: " << a / b << std::endl;
            break;
           
        case 3:
            std::cout << "Podaj pierwsza liczbe:";
            std::cin >> a;
            std::cout << "Podaj druga liczbe:";
            std::cin >> b;
            std::cout << "Wynik: " << round(a / b) << std::endl;
            break;
           
        case 4:
            std::cout << "Podaj pierwsza liczbe:";
            std::cin >> a;
            std::cout << "Podaj druga liczbe:";
            std::cin >> b;
            std::cout << "Wynik: " << a % b << std::endl;
           
            break;

        case 5:
            std::cout << "Podaj pierwsza liczbe:";
            std::cin >> a;
            std::cout << "Podaj druga liczbe:";
            std::cin >> b;
            std::cout << "Wynik: " << pow(a , b)<< std::endl;
           
            break; 

        case 6:
            std::cout << "Podaj pierwsza liczbe:";
            std::cin >> a;
            std::cout << "Wynik: " << sqrt(a) << std::endl;
           
            break;

        case 7:
            std::cout << "Podaj pierwsza liczbe:";
            std::cin >> a;
            std::cout << "Wynik: " << log10(a) << std::endl;
           
            break;  
             
        case 8:
            break;
           
        default:
            std::cout << "Nieprawidlowe polecenie." << std::endl;
        }
    } while( Polecenie != 8 );
   
    std::cout << "Koniec ";
    return 0;
   
}