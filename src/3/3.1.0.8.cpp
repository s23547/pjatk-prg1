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

auto sort_desc(int a[], int n) -> int
{
    for(auto i = 0; i < n; i++)
    {   
        for(auto i=0;i<n;i++)
        {
            for(auto j=1; j < n-i; j++)
            {    if(a[j-1] < a[j])
                {
                    std::swap(a[j-1], a[j]);
                }
            }
        }
    }     
    for(int i=0; i < n; i++)
    {
      std::cout << a[i] << " ";  
    }
    return 0;
}

auto main() -> int
{
    int a[] = {42, 9, -1, 18, 59, 3, 101, 31, 72, 12};
    sort_desc(a, 10);
    return 0;
}