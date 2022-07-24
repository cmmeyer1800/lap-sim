#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>


class CSVReader {
    public:

        CSVReader(std::string filepath);

        std::vector<std::vector<std::string>> get_array();

        std::vector<std::vector<double>> get_array_double();

        void pprint();

    private:

        std::vector<std::string> headers;

        std::vector<std::vector<std::string>> load_array();

        std::ifstream file;

        std::vector<std::vector<std::string>> array;
};