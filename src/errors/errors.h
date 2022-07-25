#pragma once

#include <iostream>
#include <string>

class FileNotOpen : public std::exception {
 private:
  std::string message;

 public:
  FileNotOpen(std::string msg);

  char* what();
};