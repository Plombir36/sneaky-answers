CXX=g++
CXXFLAGS=-std=c++17 -pedantic -Wall -Wextra -g

all:
	$(CXX) main.cpp $(CXXFLAGS) -o run -DNDEBUG
	./run

tests:
	$(CXX) main.cpp $(CXXFLAGS) -o run
	./run

view:
	@bat main.cpp
