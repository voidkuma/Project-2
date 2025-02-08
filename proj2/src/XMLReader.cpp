// Created Wednesday Feb. 5th 2025
#include <iostream>
#include "XMLReader.h"

// Constructor
CXMLReader::CXMLReader(std::shared_ptr<CDataSource> src)
{
    std::cout << "CXMLVReader constructor" << std::endl;
    //
}

// Destructor
CXMLReader::~CXMLReader()
{
    std::cout << "CXMLReader destructor" << std::endl;
    //
}

// Check if end of data source is reached
bool CXMLReader::End() const
{
    //
    return; 
}

// Read an XML entity
bool CXMLReader::ReadEntity(SXMLEntity &entity, bool skipcdata)
{
    //
    return;
}
