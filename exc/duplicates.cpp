#include <iostream>
#include "fmt/core.h"
#include "set"
#include "string"
#include "fmt/format.h"

auto main() -> int {
    auto name = std::string();
    auto names = std::set<std::string>();
    for(int i = 0; i < 10; i++){
        std::cin >> name;
        names.insert(name);
    }

    fmt::println("{}", fmt::join(names, " "));
}