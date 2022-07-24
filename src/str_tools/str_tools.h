#pragma once

#include <string>
#include <vector>

class StrTools {
 public:
  static std::vector<std::string> str_split(std::string s,
                                            std::string delimiter);
};