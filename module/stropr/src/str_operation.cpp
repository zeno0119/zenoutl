#include "str_operation.h"
#include <iostream>

std::vector<std::string> split(const std::string& str, char delim = '\n') {
    std::stringstream ss(str);
    std::vector<std::string> res;
    std::string tmp;

    while (std::getline(ss, tmp, delim)) {
        res.push_back(tmp);
    }
    return res;
}

std::string trim(const std::string& str) {
    std::string res = str;
    for (auto i = res.begin(); i != res.end();) {
        if (*i == ' ') {
            i = res.erase(i);
        } else {
            break;
        }
    }
    for (auto i = res.rbegin(); i != res.rend(); i++) {
        if (*i == ' ') {
            res.erase(std::next(i).base());
        } else {
            break;
        }
    }
    return res;
}