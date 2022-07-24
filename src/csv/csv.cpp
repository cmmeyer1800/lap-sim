#include "csv.h"

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

CSVReader::CSVReader(std::string filepath){

    file = std::ifstream (filepath);
};

std::string * CSVReader::to_string(){
    std::string out;

    if(file.is_open()){
        while(file.good()){
            file >> out;
        }
    }

    return new std::string(out);
}