#include "vector"
#include "fmt/core.h"
#include "numeric"
#include "fmt/format.h"
#include "algorithm"

auto sort_bigger_half(std::vector<int>& vec) {
    auto first_half = std::ranges::subrange(vec.begin(), vec.begin() + vec.size() / 2);
    auto second_half = std::ranges::subrange(vec.begin() + vec.size() / 2, vec.end());

    auto sum1 = std::accumulate(first_half.begin(), first_half.end(), 0);
    auto sum2 = std::accumulate(second_half.begin(),second_half.end(), 0);

    if(sum1 > sum2) std::ranges::sort(first_half);
    else std::ranges::sort(second_half);
}


auto main() -> int {
    auto firstHalfBigger = std::vector<int>{3, 2, 1, 0, 1, 0};
    auto secondHalfBigger = std::vector<int>{3, 2, 1, 6, 5, 4};
    auto bothHalvesSame = std::vector<int>{5, 4, 5, 4};
    auto temp = std::vector<int>{5, 4, 2, 5, 4};

    sort_bigger_half(firstHalfBigger);
    sort_bigger_half(secondHalfBigger);
    sort_bigger_half(bothHalvesSame);
    sort_bigger_half(temp);

    fmt::println(
            "[{0}]\n[{1}]\n[{2}]\n[{3}]",
            fmt::join(firstHalfBigger, ", "),
            fmt::join(secondHalfBigger, ", "),
            fmt::join(bothHalvesSame, ", "),
            fmt::join(temp, ", ")
    );
}
