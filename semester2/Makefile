FILE?=A1.cpp
TARGET=run

CXX=g++
CXXFLAFS=-std=c++17 -Wall -Wextra -pedantic -g

all:
	$(CXX) $(FILE) $(CXXFLAGS) -o $(TARGET) -DNDEBUG
	./$(TARGET)

tests:
	$(CXX) $(FILE) $(CXXFLAGS) -o $(TARGET)
	./$(TARGET)
