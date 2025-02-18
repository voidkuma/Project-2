# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -g

# Source files
SRCS = DSVReader.cpp DSVTest.cpp DSVWriter.cpp StringDataSink.cpp StringDataSource.cpp StringUtils.cpp XMLReader.cpp XMLTest.cpp XMLWriter.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Rule to compile .cpp files into .o files
%.o: %.cpp
$(CXX) $(CXXFLAGS) -c $< -o $@

cmake_minimum_required(VERSION 3.8 )

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

add_subdirectory(googletest)

set(Headers
    StringUtils.h
)
set(Sources
    StringUtils.cpp
    StringUtilsTest.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})

add_subdirectory((test))

# Clean rule to remove generated files
clean:
    del $(OBJS)