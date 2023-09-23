#include "fmt/core.h"
#include "fmt/format.h"
#include <string>
#include <vector>
#include <algorithm>

auto split_string_to_words(const std::string string) -> std::vector<std::string> {
    auto words = std::vector<std::string>();

    auto start_idx = int();
    for(int cursor = 1; cursor < string.size(); cursor++){
        if(string[cursor] == ' '){
            words.push_back(string.substr(start_idx, cursor - start_idx));
            start_idx = cursor + 1;
        }
    }
    // last word
    if(start_idx < string.size()) words.push_back(string.substr(start_idx, string.size() - start_idx));

    return words;
}

auto reversed_words(const std::string string) -> std::string {
    auto words = split_string_to_words(string);
    std::ranges::reverse(words.begin(), words.end());
    return fmt::format("{}", fmt::join(words, " "));
}

auto main() -> int {
    fmt::println("{}", reversed_words("Ala ma kota"));
    fmt::println("{}", reversed_words("Ala"));
    fmt::println("{}", reversed_words(""));
    fmt::println("{}", reversed_words("1 2 3"));
    fmt::println("{}", reversed_words("Kobyła ma mały bok"));
    fmt::println("{}", reversed_words("XYZ ABC "));
    fmt::println("{}", reversed_words("Ziarniste zboże"));
    return 0;
}
