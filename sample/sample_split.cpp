#include "str_operation.h"
#include <iostream>

int main(int argc, char** argv) {
    std::string tmp = "kitty on your lap";
    if (argc == 2) {
        tmp = std::string(argv[1]);
    }
    std::cout << tmp << std::endl;
    const auto res = split(tmp, ' ');
    for (const auto& el : res) {
        std::cout << el << std::endl;
    }

    std::string trim_test = "a   kitty on your lag     test  a";
    std::cout << trim(trim_test) << ":end" << std::endl;
}