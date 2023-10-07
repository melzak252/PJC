#include <iostream>
#include <cassert>
#include "algorithm"
#include "fmt/core.h"
#include "set"
#include "vector"
#include "string"
#include "fmt/format.h"

auto suffix(std::set<int>& s, std::vector<int> v){
    assert(s.size() >= v.size());
    std::ranges::sort(v);
    auto its = s.end();
    std::advance(its, -v.size());
    return std::ranges::equal(std::ranges::subrange(its, s.end()), v);
}

auto main() -> int {
    auto s = std::set<int>({1, 2, 3, 4, 5});
    auto v = {1, 2, 3};
    auto v1 = {2, 3, 4, 5, 6};
    auto v2 = {4, 5};
    auto v3 = {3, 4, 5};
    auto v4 = {1, 3, 4, 5};
    auto v5 = {5, 4, 3};
    auto v6 = {5, 3, 4, 5};
    auto v7 = {6, 3, 4, 5};
    auto v8 = {2, 4, 3, 5};

    fmt::println("Is suffix: {}", suffix(s, v));
    fmt::println("Is suffix: {}", suffix(s, v1));
    fmt::println("Is suffix: {}", suffix(s, v2));
    fmt::println("Is suffix: {}", suffix(s, v3));
    fmt::println("Is suffix: {}", suffix(s, v4));
    fmt::println("Is suffix: {}", suffix(s, v5));
    fmt::println("Is suffix: {}", suffix(s, v6));
    fmt::println("Is suffix: {}", suffix(s, v7));
    fmt::println("Is suffix: {}", suffix(s, v8));
}