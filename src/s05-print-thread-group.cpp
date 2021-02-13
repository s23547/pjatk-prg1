#include <iostream>
#include <string>
#include <thread>
#include <vector>

auto print_text(std::string x) -> void
{
    std::cout << (x + "\n");
}

auto main() -> int
{
    auto groups = int{7};
    auto groups_size = int{6};

    for (auto i = 0; i < groups; i++) 
    {
        auto threads = std::vector<std::thread>{};

        std::cout << "----" << i << "----"
                  << "\n";

        for (auto j = 0; j < groups_size; j++)
        {
            auto s = std::string{"Hello, "} + std::to_string((j + 1) + (i * groups_size)) + "!";
            threads.push_back(std::thread(print_text, std::move(s)));
        }


        for (auto& each : threads) 
        {
            each.join();
        }
    }
    return 0;
}