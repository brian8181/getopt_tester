# Output setting
SRC=.
BUILD=.

# Compiler settings - Can be customized.
CXXFLAGS = -std=c++11 -Wall

all: getopt getopt_long

debug: CXXFLAGS += -DDEBUG -g
debug: getopt getopt_long

debuggdb: CXXFLAGS += -DDEBUG -ggdb
debuggdb: getopt getopt_long

getopt: getopt.o
	g++ $(CXXFLAGS) getopt.o -o getopt

getopt.o: getopt.cpp 
	g++ $(CXXFLAGS) -c getopt.cpp -o getopt.o

getopt_long: getopt_long.o
	g++ $(CXXFLAGS) getopt_long.o -o getopt_long

getopt_long.o: getopt_long.cpp 
	g++ $(CXXFLAGS) -c getopt_long.cpp -o getopt_long.o

pout: pout.o
	g++ $(CXXFLAGS) pout.o -o pout

pout.o: pout.cpp 
	g++ $(CXXFLAGS) -c pout.cpp -o pout.o

pin: pin.o
	g++ $(CXXFLAGS) pin.o -o pin

pin.o: pin.cpp 
	g++ $(CXXFLAGS) -c pin.cpp -o pin.o


# utility.o: utility.cpp
# 	g++ $(CXXFLAGS) -c utility.cpp -o utility.o

# clean all build
# .PHONY: test
# test: regx unit_test
# 	unit_test

# just object files *.o
.PHONY: cleanobj
cleanobj:
	rm *o

# clean all build
.PHONY: clean
clean:
	rm getopt; rm getopt_long; rm pout; rm pin; rm *.o