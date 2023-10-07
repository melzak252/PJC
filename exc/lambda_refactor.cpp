#include "fmt/core.h"
#include "vector"
#include "set"
#include "algorithm"
#include "string"

auto example(
        std::vector<std::string> left, std::vector<std::string> right
) -> void {

    auto s = std::set<std::string>(left.begin(), left.end());
    left = std::vector<std::string>(s.begin(), s.end());

    s = std::set<std::string>(right.begin(), right.end());
    right = std::vector<std::string>(s.begin(), s.end());

    auto& vec = left;
    if(left.size() < right.size()) vec = right;

    auto starts_with_number = [](std::string word) -> bool {
        return word.front() >= '0' and word.front() <= '9';
    };

    std::ranges::sort(vec, [&starts_with_number](std::string& word1, std::string& word2) -> bool {
        if ((starts_with_number(word1) and starts_with_number(word2)) or (!starts_with_number(word1) and !starts_with_number(word2)))
            return (word2 <= word1);

        return !starts_with_number(word1);
    });
}
