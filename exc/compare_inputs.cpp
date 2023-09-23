#include <iostream>
#include <vector>
#include <algorithm>
#include "fmt/core.h"
#include "set"
auto main() -> int {
    fmt::print("Insert 10 numbers: ");

    auto first_half = std::vector<int>();
    auto second_half = std::vector<int>();
    int temp;
    for(int i = 0; i < 5; i++){
        std::cin >> temp;
        first_half.push_back(temp);
    }

    for(int i = 0; i < 5; i++){
        std::cin >> temp;
        second_half.push_back(temp);
    }
    std::ranges::sort(first_half);
    std::ranges::sort(second_half);

    if(first_half == second_half) fmt::println("They're the same pictures!");
    else fmt::println("!");
}
