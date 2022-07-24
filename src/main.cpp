#include "csv.h"
#include <vector>
#include <iostream>


int main(int argc, char* argv[]){
    CSVReader csv("test.txt");

    csv.pprint();

    std::vector<std::vector<double>> d = csv.get_array_double();

    return 0;
}