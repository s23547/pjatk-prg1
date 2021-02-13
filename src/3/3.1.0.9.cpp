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

auto quicksort(int a[], int lewy, int prawy) -> void
{
    if(prawy <= lewy) return;
	
	auto i = lewy - 1, j = prawy + 1, 
	pivot = a[(lewy+prawy)/2];
	while(1)
	{
		
		while(pivot>a[++i]);
		
		while(pivot<a[--j]);
		
		if( i <= j)

			std::swap(a[i],a[j]);
		else
			break;
	}

	if(j > lewy)
	quicksort(a, lewy, j);
	if(i < prawy)
	quicksort(a, i, prawy);
}

auto main() -> int
{
    int a[] = {42, 9, -1, 18, 59, 3, 101, 31, 72, 12};
    int n = 10;
    quicksort(a, 0, 9);
    for(int i=0; i < n; i++)
    {
      std::cout << a[i] << " ";  
    }
    return 0;
}