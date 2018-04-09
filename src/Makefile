#compiler choice
CXX=g++

#compiler options
CXXFLAGS=-c -g -Wall -Wextra -Wpedantic -std=c++11

all: hello

hello: hello.o curve_type.o 
	$(CXX) -o hello hello.o curve_type.o 

hello.o: 
	$(CXX) $(CXXFLAGS) types/hello.cpp 

curve_type.o: 
	$(CXX) $(CXXFLAGS) types/curve_type.cpp 

clean:
	rm hello.o curve_type.o hello
