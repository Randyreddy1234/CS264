# Define the compiler
CXX = g++
CXXFLAGS = -Wall -std=c++17

# Target executable
TARGET = main

# Source files
SRCS = TestMatrix.cpp Matrix.cpp

# Default rule to build the program
main: $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

# Rule to run the program
run: $(TARGET)
	./$(TARGET)

# Rule to clean build files
clean:
	rm -f $(TARGET)

# Phony targets
.PHONY: main run clean
