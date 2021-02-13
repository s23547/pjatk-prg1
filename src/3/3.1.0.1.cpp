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

auto init(int a[], int n) -> void
{
    
    for(auto i = 0; i < n; i++)
    {        
        a[i] = 0;
    }
    std::cout << "testowy element tablicy = " << a[5] << std::endl;
}

auto main() -> int
{
    int a[] = {};
    auto const n = ask_user_for_integer(" rozmiar tablicy = ");
    init(a, n);
    return 0;
}