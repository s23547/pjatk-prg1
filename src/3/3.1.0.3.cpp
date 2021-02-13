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

auto asum(int a[], int n) -> int
{
    auto suma = 0;
    for(auto i = 0; i < n; i++)
    {   
        suma = suma + a[i];
    }    
    std::cout << suma << std::endl;        
    return 0;
}

auto main() -> int
{
    int a[] = {42, 9, -1, 18, 59, 3, 101, 31, 72, 12};
    asum(a, 10);
    return 0;
}