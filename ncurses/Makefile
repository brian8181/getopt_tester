all: main curses cwin bt fileindexer 
	
main: main.o
	gcc main.o -lncurses -o main 

main.o:
	gcc -c main.c -o main.o

curses: curses.o
	gcc curses.o -lncurses -o curses 

curses.o:
	gcc -c curses.c -o curses.o

cwin: cwin.o
	gcc cwin.o -lncurses -o cwin

cwin.o:
	gcc -c cwin.c -o cwin.o

bt: bt.o
	g++ -g bt.o -o bt

bt.o:
	g++ -g -c bt.cpp -o bt.o

fileindexer: fileindexer.o
	g++ -g fileindexer.o -o fileindexer

fileindexer.o:
	g++ -g -c fileindexer.cpp -o fileindexer.o

.PHONY: clean
clean:
	rm curses main cwin bt fileindexer *.o
