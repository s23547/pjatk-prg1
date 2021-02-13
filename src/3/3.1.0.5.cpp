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

auto amax(int a[], int n) -> int
{
    auto pierwsza = a[0];
    auto index = 0;
    for(auto i = 0; i < n; i++)
    {   
        if(pierwsza < a[i])
        {
            pierwsza = a[i];
            index = i;
        }
    }     
    std::cout << pierwsza << " " << index << std::endl;       
    return 0;
}

auto main() -> int
{
    int a[] = {42, 9, -1, 18, 59, 3, 101, 31, 72, 12};
    amax(a, 10);
    return 0;
}