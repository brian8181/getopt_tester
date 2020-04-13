# Output setting
SRC=.
BUILD=.

# Compiler settings - Can be customized.
CXXFLAGS = -std=c++11 -Wall

all: getopt

debug: CXXFLAGS += -DDEBUG -g
debug: getopt

debuggdb: CXXFLAGS += -DDEBUG -ggdb
debuggdb: getopt

getopt: getopt.o
	g++ $(CXXFLAGS) getopt.o -o getopt

getopt.o: getopt.cpp 
	g++ $(CXXFLAGS) -c getopt.cpp -o getopt.o

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
	rm getopt; rm *.o