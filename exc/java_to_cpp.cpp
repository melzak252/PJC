#include <cassert>
#include <set>
#include "iostream"
#include "string"
#include "random"
#include "fmt/core.h"
#include "fmt/format.h"

auto is_prime(int number) -> bool {
    if (number < 2) return false;

    for (int i = 2; i <= sqrt(number); i++) {
        if (!(number % i)) return false;
    }

    return true;
}

auto main() -> int {
    // Greetings
    auto name = std::string();

    fmt::print("Input ur name: ");
    std::cin >> name;
    if (name == "Einstein") fmt::println("I know u!");
    else fmt::println("Greetings.");

    // Guess the number
    auto rd = std::random_device();
    auto gen = std::mt19937(rd());
    std::uniform_int_distribution<int> dis(0, 100);

    auto number_to_guess = dis(gen);
    auto guessed_number = -1;

    while (number_to_guess != guessed_number) {
        fmt::print("Guess number: ");
        std::cin >> guessed_number;

        if (guessed_number < number_to_guess) fmt::println("Higher!!!!");
        else if(guessed_number > number_to_guess) fmt::println("lower...");
        else fmt::println("CONGRATS!!!");
    }


    // Is prime
    fmt::println("Pls input the numbers.");
    fmt::println("Type in a negative number to stop.");
    auto number = int();
    auto numbers_to_check = std::set<int>();

    fmt::print("First number: ", fmt::join(numbers_to_check, ", "));
    for (std::cin >> number; number >= 0; std::cin >> number) {
        numbers_to_check.insert(number);
        fmt::print("current numbers: [{}], Next number: ", fmt::join(numbers_to_check, ", "));
    }

    for(auto num: numbers_to_check){
        if(is_prime(num)) fmt::println("{} is prime.", num);
        else fmt::println("{} is not prime", num);
    }

    return 0;
}