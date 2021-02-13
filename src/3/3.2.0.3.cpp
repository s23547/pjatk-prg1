#include <iostream>
#include <string>

auto swap(int *a, int *b) -> void
{
    int c = *a;
    *a = *b;
    *b = c;
}
auto main() -> int
{   
    auto a = int{42};
    auto b = int{64};
    std::cout << a << " " << b << std::endl;
    swap(&a , &b );
    std::cout << a << " " << b << std::endl;
    return 0;
}