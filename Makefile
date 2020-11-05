CXX = g++
CXXFLAGS = -g -std=c++11 -Wall

SRCS = $(wildcard *.hpp)
OBJECTS = $(SRCS: .hpp=.o)

all: testAlg

clean:
	rm -rf *.dSYM
	$(RM) *.o *.gc* test/*.o testAlg core main

testAlg: $(OBJECTS) Run.cpp Algorithms.cpp Algorithms.hpp
	$(CXX) $(CXXFLAGS) -o $@ $^
