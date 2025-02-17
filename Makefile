# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -g

# Directories
OBJ_DIR = obj
BIN_DIR = bin

# Source and Object Files
SRC = $(wildcard *.cpp)
OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)

# Output Executable
EXEC = $(BIN_DIR)/main

# Targets
all: $(EXEC)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(EXEC): $(OBJ)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Clean up
clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)

.PHONY: all clean
