#ifndef __ZNUTL_STR_OPERATION_H__
#define __ZNUTL_STR_OPERATION_H__

#include <algorithm>
#include <cctype>
#include <ios>
#include <sstream>
#include <string>
#include <vector>

std::vector<std::string> split(const std::string& str, char delim);
std::string trim(const std::string& str);

#endif //__ZNUTL_STR_OPERATION_H__