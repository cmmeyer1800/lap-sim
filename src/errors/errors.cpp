#include "errors.h"

FileNotOpen::FileNotOpen(std::string msg) : message(msg) {}

char* FileNotOpen::what() {
  return const_cast<char*>(message.c_str());
  ;
}