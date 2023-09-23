#include <fmt/core.h>
#include <vector>
#include <string>
#include <algorithm>

bool str_compare(const std::string& a, const std::string& b) {
    return a.size() < b.size();
}

void box_print(std::vector<std::string> words, char frame = '*') {
    auto max_size = int();
    if(!words.empty()){
        const auto result = std::max_element(words.begin(), words.end(), str_compare);
        max_size = result -> size();
    }

    auto top_bottom = std::string();
    for(int i = 0; i < max_size + 2; i++) top_bottom += frame;

    fmt::println("{}", top_bottom);
    for(auto word: words) fmt::println("{0}{1:<{2}}{0}", frame, word, max_size);
    fmt::println("{}\n", top_bottom);

}

int main(){
    box_print({"a", "quick", "brown", "fox"});
    box_print({"a", "quick", "brown", "fox"}, '*');
    box_print({"a", "quick", "brown", "fox"}, '#');
    box_print(std::vector<std::string>{"a", "quick", "brown", "fox"}, '#');
    box_print({""});
    box_print({});
    box_print({}, '#');
    box_print({"", "hmmmm", ""});
    box_print({"", "", ""});
}


