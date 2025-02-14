// Created Wednesday Feb. 5th 2025
//
#include <iostream>
#include "DSVWriter.h"

struct CDSVWriter::SImplementation{
    std::unique_ptr<SImplementation> DImplementation; //Initalizing unique_ptr DImplementation
    std::shared_ptr<CDataSink> Sink; //Initalizing shared_ptr Sink
    char Delimiter; //Initalizing delimiting Character variable
    bool QuoteAll; //Initalizing bool quoteall variable

    SImplementation(std::shared_ptr<CDataSink> sink, char delimiter, bool quoteall) {
        Sink = std::move(sink);
        Delimiter = delimiter;
        QuoteAll = quoteall;
    }
};

// From Assignment: 
// Constructor for DSV writer, sink specifies the data destination, delimiter
// specifies the delimiting character, and quoteall specifies if all values
// should be quoted or only those that contain the delimiter, a double quote,
// or a newline
CDSVWriter::CDSVWriter(std::shared_ptr< CDataSink > sink, char delimiter, bool quoteall = false){
    std::cout << "CDSVWriter constructor" << std::endl;
}

// Destructor for DSV writer
CDSVWriter::~CDSVWriter(){
    std::cout << "CDSVWriter destructor" << std::endl;
}

// Returns true if the row is successfully written, one string per column
// should be put in the row vector
bool WriteRow(const std::vector<std::string> &row){
    // yeah idk yet
    return;
}