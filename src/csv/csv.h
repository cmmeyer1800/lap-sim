#pragma once

#include <iostream>
#include <fstream>
#include <string>


class CSVReader {
    public:

        CSVReader(std::string filepath);

        std::string * to_string();

    private:

        std::ifstream file;
};