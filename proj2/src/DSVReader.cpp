// Created Wednesday Feb. 5th 2025
//
#include <iostream>
#include "DSVReader.h"

struct CDSVReader::SImplementation {
    std::shared_ptr<CDataSource> Source;

};

// Constructor for DSV reader, src specifies the data source and delimiter
// specifies the delimiting character
CDSVReader::CDSVReader(std::shared_ptr< CDataSource > src, char delimiter){
    std::cout << "CDSVReader constructor" << std::endl;
}

// Destructor for DSV reader
CDSVReader::~CDSVReader(){
    std::cout << "CDSVReader destructor" << std::endl;
}

// Returns true if all rows have been read from the DSV
bool CDSVReader::End() const{
    return DImplementation->Source->End(); //Returns value of the End() function in CDataSource class
}

// Returns true if the row is successfully read, one string will be put in
// the row per column
bool CDSVReader::ReadRow(std::vector<std::string> &row){
    // yeah idk yet 
    return;
}