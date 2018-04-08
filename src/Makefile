#compiler choice
CXX=g++

#compiler options
CXXFLAGS=-c -g -Wall -Wextra -Wpedantic -std=c++11

all: hello

hello: hello.o 
	$(CXX) -o hello hello.o 

hello.o: 
	$(CXX) $(CXXFLAGS) types/hello.cpp types/curve_types.h types/discount_factor.h types/discount_factors.h 

clean:
	rm hello.o hello
