// Created Wednesday Feb. 5th 2025
#include <iostream>
#include "DSVReader.h"

// Constructor for DSV reader, src specifies the data source and delimiter
// specifies the delimiting character
CDSVReader::CDSVReader(CDSVReader(std::shared_ptr< CDataSource > src, char delimiter)){
    std::cout << "CDSVReader constructor" << std::endl;
}

// Destructor for DSV reader
CDSVReader::~CDSVReader(){
    std::cout << "CDSVReader destructor" << std::endl;
}

// Returns true if all rows have been read from the DSV
bool End() const{
    // yeah idk yet
    return;
}

// Returns true if the row is successfully read, one string will be put in
// the row per column
bool ReadRow(std::vector<std::string> &row){
    // yeah idk yet 
    return;
}