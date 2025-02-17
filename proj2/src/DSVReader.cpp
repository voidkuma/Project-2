// Created Wednesday Feb. 5th 2025
//
#include "DSVReader.h"
#include <vector>
#include <iostream>
#include <sstream>

struct CDSVReader::SImplementation {
    std::shared_ptr<CDataSource> Source;
    char Delimiter; //Initalizing Delimiter char variable
    std::string Leftovers; //Leftovers = text we didn't process yet
    SImplementation(std::shared_ptr<CDataSource> src, char delimiter){
        Source = src; //Initalizing src as Source
        Delimiter = delimiter; //Initalizing Delimiter as delimiter 
    }
};
//Assignment:
// Constructor for DSV reader that takes in two parameters,
// src specifies the data source
// delimiter specifies the delimiting character
CDSVReader::CDSVReader(std::shared_ptr< CDataSource > src, char delimiter){
    DImplementation = std::make_unique<SImplementation>(src, delimiter);
    std::cout << "CDSVReader constructor" << std::endl; //Default constructor print statement
}
// Assignment:
// Destructor for DSV reader
CDSVReader::~CDSVReader(){
    std::cout << "CDSVReader destructor" << std::endl; //Default destructor print statement
}

// Returns true if all rows have been read from the DSV
bool CDSVReader::End() const{
    return DImplementation->Source->End(); //Returns bool status of End()
}
// Assignment: 
// Returns true if the row is successfully read, 
// one string will be put in the row per column
bool CDSVReader::ReadRow(std::vector<std::string> &row){
    row.clear();  // Clear the output vector

    // Buffer might have leftover data from previous reads
    std::string line;
    if (!DImplementation->Leftovers.empty()) {
        size_t newlinePos = DImplementation->Leftovers.find('\n');
        if (newlinePos != std::string::npos) {
            line = DImplementation->Leftovers.substr(0, newlinePos);
            DImplementation->Leftovers.erase(0, newlinePos + 1);
        } else {
            line = DImplementation->Leftovers;
            DImplementation->Leftovers.clear();
        }
    } else if (!DImplementation->Source->Read(line)) {
        return false; // No more lines to read
    }

    std::stringstream ss(line);
    std::string cell;
    bool insideQuotes = false;
    std::string temp;

    while (ss) {
        char ch;
        ss.get(ch);

        if (ch == '"') {
            insideQuotes = !insideQuotes;
            temp += '"';
        } else if (ch == DImplementation->Delimiter && !insideQuotes) {
            row.push_back(temp);
            temp.clear();
        } else {
            temp += ch;
        }
    }

    row.push_back(temp);
    return true;
}