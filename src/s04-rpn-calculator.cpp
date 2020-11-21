#include <math.h>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <stack>
#include <stdexcept>
#include <string>
#include <vector>
 
auto pop_top(std::stack<double>& stack) -> double
{
    if (stack.empty()) {
        throw std::logic_error{"empty stack"};
    }
    auto element = std::move(stack.top());
    stack.pop();
    return element;
}
 
auto dodawanie(std::stack<double>& stack) -> void
{
    if (stack.size() < 2) {
        throw std::logic_error{"not enough operands for +"};
    }
    auto const b = pop_top(stack);
    auto const a = pop_top(stack);
    stack.push(a + b);
}
 
auto odejmowanie(std::stack<double>& stack) -> void
{
    if (stack.size() < 2) {
        throw std::logic_error{"not enough operands for -"};
    }
    auto const b = pop_top(stack);
    auto const a = pop_top(stack);
    stack.push(a - b);
}
 
auto dzielenie(std::stack<double>& stack) -> void
{
    if (stack.size() < 2) {
        throw std::logic_error{"not enough operands for /"};
    }
    auto const b = pop_top(stack);
    auto const a = pop_top(stack);
    if (b == 0) {
        std::cout << "Don`t divide by zero n";
    } else {
        stack.push(a / b);
    }
}
 
auto dzielenie_calkowite(std::stack<double>& stack) -> void
{
    if (stack.size() < 2) {
        throw std::logic_error{"not enough operands for //"};
    }
    auto const b = pop_top(stack);
    auto const a = pop_top(stack);
    if (b == 0) {
        std::cout << "Don`t divide by zero n";
    } else {
        stack.push((int)a / (int)b);
    }
}
 
auto modulo(std::stack<double>& stack) -> void
{
    if (stack.size() < 2) {
        throw std::logic_error{"not enough operands for %"};
    }
    auto const b = pop_top(stack);
    auto const a = pop_top(stack);
    if (b == 0) {
        std::cout << "Don`t divide by zero n";
    } else {
        stack.push((int)a % (int)b);
    }
}
 
auto mnozenie(std::stack<double>& stack) -> void
{
    if (stack.size() < 2) {
        throw std::logic_error{"not enough operands for *"};
    }
    auto const b = pop_top(stack);
    auto const a = pop_top(stack);
    stack.push(a * b);
}
 
auto potegowanie(std::stack<double>& stack) -> void
{
    if (stack.size() < 2) {
        throw std::logic_error{"not enough operands for **"};
    }
    auto const b = pop_top(stack);
    auto const a = pop_top(stack);
    stack.push(pow(a, b));
}
 
auto pierwiastkowanie(std::stack<double>& stack) -> void
{
    if (stack.size() < 1) {
        throw std::logic_error{"not enough operands for sqrt"};
    }
    auto const a = pop_top(stack);
    stack.push(sqrt(a));
}
 
auto za_malo_arg(std::stack<double>& stack) -> void
{
    if (stack.size() < 1) {
        throw std::logic_error{"not enough operands for ceil"};
    }
    auto const a = pop_top(stack);
    stack.push(fabs(a));
}
 
auto make_args(int argc, char* argv[]) -> std::vector<std::string>
{
    auto args = std::vector<std::string>{};
    std::copy_n(argv, argc, std::back_inserter(args));
    return args;
}
 
auto main(int argc, char* argv[]) -> int
{
    auto const args = make_args(argc - 1, argv + 1);
 
    auto stack = std::stack<double>{};
    for (auto const each : args) {
        try {
            if (each == "p") {
                std::cout << pop_top(stack) << "n";
            } else if (each == "+") {
                dodawanie(stack);
            } else if (each == "-") {
                odejmowanie(stack);
            } else if (each == "/") {
                dzielenie(stack);
            } else if (each == "//") {
                dzielenie_calkowite(stack);
            } else if (each == "%") {
                modulo(stack);
            } else if (each == "*") {
               mnozenie(stack);
            } else if (each == "**") {
                potegowanie(stack);
            } else if (each == "sqrt") {
                pierwiastkowanie(stack);
            } else if (each == "fabs") {
                za_malo_arg(stack);
            } else {
                stack.push(std::stod(each));
            }
        } catch (std::logic_error const& e) {
            std::cerr << "error: " << each << ": " << e.what() << "n";
        }
    }
 
    return 0;
}