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

auto search(int a[], int n, int needle) -> int
{
    for(auto i = 0; i < n; i++)
    {
        if(a[i] == needle)
        {
            std::cout << i << std::endl;
        }
        else if(a[i] != needle)
        {
            std::cout << -1 << std::endl;
        }
        
    }
    return 0;
}

auto main() -> int
{
    int a[] = {42, 9, -1, 18, 59, 3, 101, 31, 72, 12};
    search(a, 10, 101);
    return 0;
}