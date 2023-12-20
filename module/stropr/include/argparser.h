#include "str_operation.h"
#include "string.h"

namespace znutl {

class ArgParser {
  private:
    int argc;
    char** argv;
    std::string args;
    std::vector<std::string> keys;
    void parse_args();

  public:
    ArgParser(int argc_, char** argv_, std::string args_) : argc(argc_), argv(argv_), args(args_) {}
    bool check();
    bool parse();
};

} // namespace znutl