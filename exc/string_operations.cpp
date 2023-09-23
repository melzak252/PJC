#include <cassert>
#include <algorithm>
#include "iostream"
#include "fmt/core.h"
#include "string"

auto main() -> int {
    auto word = std::string();
    fmt::print("Insert word to modify: ");
    std::cin >> word;
    assert(!word.empty());
    fmt::println("{}", word.front());
    fmt::println("'{}'", word.back());
    fmt::println("{}", word.size());
    fmt::println("\"{}\"", word.at(word.size() / 2));
    fmt::println("[{}]", word);
    std::ranges::sort(word.begin(), word.end());
    fmt::println("{}", word);

    return 0;
}