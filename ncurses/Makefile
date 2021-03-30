all: main curses cwin
	
main: main.o
	gcc main.o -o main -lncurses

main.o:
	gcc -c main.c 

curses: curses.o
	gcc curses.o -o curses -lncurses

curses.o:
	gcc -c curses.c 

cwin: cwin.o
	gcc cwin.o -o cwin -lncurses

cwin.o:
	gcc -c cwin.c 

.PHONY: clean
clean:
	rm curses main cwin
