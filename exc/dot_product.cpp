#include <fmt/core.h>
#include <vector>
#include <string>
#include <cassert>

auto dot_product(const std::vector<double>& vec_a, const std::vector<double>& vec_b) -> double{
    assert(vec_a.size() == vec_b.size());
    auto result = double ();
    for(int i = 0; i < vec_a.size(); i++){
        result += vec_a[i] * vec_b[i];
    }

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


