#include <iostream>

auto ask_user_for_integer(std::string prompt) -> int
{
    if (not prompt.empty()) {
    std::cout << prompt ;
}
    auto value = std::string{};
    std::getline(std::cin, value);
    return std::stoi(value);
}

auto iota(int a[], int n, int start) -> void
{
                   
    for(auto i = 0; i < n; i++)
    {
        a[i] = start;
        ++start;
    }
    std::cout << "testowy element tablicy = " << a[2] << std::endl;
}

auto main() -> int
{
    int a[] = {};

    //auto const n = ask_user_for_integer(" rozmiar tablicy = ");
    //auto start = ask_user_for_integer(" od jakiej liczby chcesz zaczac tablice = ");
    iota(a, 4, 5);
    return 0;
}