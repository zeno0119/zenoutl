#include "argparser.h"

namespace znutl {
bool check() {
}

void ArgParser::parse_args() {
    /*
    document
    argument | initial value | message at help | [abbrev arguments1, 2, ...]

    */
    auto key_str = split(args, '\n');
    for (const auto& el : key_str) {
        auto line = split(args, '|');
        for (auto& el : line) {
            el = trim(el);
        }
        if (line.size() == 4) {
            auto abbrev_keys = split(line[3], ',');
        } else if (line.size() == 3) {
        }
    }
}
} // namespace znutl