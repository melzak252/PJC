#include <fmt/core.h>
#include <vector>
#include <cassert>
#include <numeric>

auto dot_product(const std::vector<double>& vec_a, const std::vector<double>& vec_b) -> double{
    assert(vec_a.size() == vec_b.size());
    auto result = std::inner_product(vec_a.begin(), vec_a.end(), vec_b.begin(), 0.0);
    return result;
}

int main(){
    fmt::println("{}", dot_product({1, 1, 1}, {1, 1, 1}));
    fmt::println("{}", dot_product({1, 1, 1}, {1, 1, 0}));
    fmt::println("{}", dot_product({1, 1, 1}, {1, 0, 0}));
    fmt::println("{}", dot_product({1, 1, 1}, {0, 0, 0}));
    fmt::println("{}", dot_product({1, 2, 3}, {1, 1, 1}));
    fmt::println("{}", dot_product({1, 2, 3}, {1, 2, 3}));
    fmt::println("{}", dot_product({1, 0, 0}, {0, 1, 0}));
}


