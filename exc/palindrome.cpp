#include <algorithm>
#include "fmt/core.h"
#include "string"


auto is_palindrome(std::string string) -> bool {
    auto copyS = string;
    std::ranges::reverse(copyS);
    return (copyS == string);
}

auto main() -> int {
    fmt::println(
            "{}\n{}\n{}",
            is_palindrome("KajaK"),
            is_palindrome("ala"),
            is_palindrome("programowanie")
    );

    return 0;
}
