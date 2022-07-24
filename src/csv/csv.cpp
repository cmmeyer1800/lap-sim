#include "csv.h"

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "str_tools.h"


CSVReader::CSVReader(std::string filepath){

    file = std::ifstream (filepath);

    array = load_array();
};


std::vector<std::vector<std::string>> CSVReader::load_array(){

    std::vector<std::vector<std::string>> vals;

    std::string rowstr;

    size_t idx = 0;

    if(file.is_open()){
        while(file.good()){
            file >> rowstr;

            std::vector<std::string> row = StrTools::str_split(rowstr, ",");
            if(idx == 0){
                headers = row;
            } else {
                vals.push_back(row);
            }

            idx++;
        }
    }
    else{
        std::cout << "File Not Open!" << std::endl; 
    }

    return vals;
}


void CSVReader::pprint(){
    
    std::cout << "[" << std::endl;
    
    std::cout << "\t  ";
    size_t row_len = headers.size();
    size_t curr = 0;

    for(std::string header: headers){
        if(row_len-1 == curr){
            std::cout << header;
        } else{
            std::cout << header << ", ";
        }

        curr++;
    }

    std::cout << std::endl;

    for(std::vector<std::string> row: array){

        std::cout << "\t[ ";
        size_t row_len = row.size();
        size_t curr = 0;

        for(std::string col: row){
            if(row_len-1 == curr){
                std::cout << col << " ]";
            } else{
                std::cout << col << ", ";
            }

            curr++;
        }
        std::cout << std::endl;
    }
    std::cout << "]" << std::endl;
}


std::vector<std::vector<std::string>> CSVReader::get_array(){

    return array;
}


std::vector<std::vector<double>> CSVReader::get_array_double(){

    std::vector<std::vector<double>> out;

    for(std::vector<std::string> row: array){
        std::vector<double> d_row;
        for(std::string col: row){
            d_row.push_back(std::stod(col));
        }
        out.push_back(d_row);
    }

    return out;
}