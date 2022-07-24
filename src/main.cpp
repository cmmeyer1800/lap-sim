#include "csv.h"


int main(int argc, char* argv[]){
    CSVReader csv("test.txt");

    std::string * val = csv.to_string();

    std::cout << *val << std::endl;

    free(val);
    return 0;
}