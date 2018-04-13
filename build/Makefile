#compiler choice
CXX=g++

#compiler options
CXXFLAGS=-c -g -Wall -Wextra -Wpedantic -std=c++11

#PATH
SRC=./../src/types

all: hello

hello: hello.o curve_type.o curve_symbol.o curve_symbols.o discount_factor.o discount_factors.o 
	$(CXX) -o hello hello.o curve_type.o curve_symbol.o curve_symbols.o discount_factor.o discount_factors.o  

hello.o: 
	$(CXX) $(CXXFLAGS) $(SRC)/hello.cpp 

curve_type.o: 
	$(CXX) $(CXXFLAGS) $(SRC)/curve_type.cpp 

curve_symbol.o: 
	$(CXX) $(CXXFLAGS) $(SRC)/curve_symbol.cpp 

curve_symbols.o: 
	$(CXX) $(CXXFLAGS) $(SRC)/curve_symbols.cpp 

discount_factor.o: 
	$(CXX) $(CXXFLAGS) $(SRC)/discount_factor.cpp 

discount_factors.o: 
	$(CXX) $(CXXFLAGS) $(SRC)/discount_factors.cpp 

clean:
	rm *.o hello
