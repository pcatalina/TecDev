all: rational poly main

rational: rational.o mainrational.o
	gcc mainrational.o rational.o -o rational -lm

poly: rational.o poly.o mainpoly.o
	gcc mainpoly.o poly.o rational.o -o poly -lm

main: rational.o poly.o devlimln.o main.o
	gcc main.o devlimln.o poly.o rational.o -o devLim -lm

rational.o: rational.c rational.h
	gcc -c rational.c

mainrational.o: mainrational.c rational.h
	gcc -c mainrational.c

poly.o: poly.c poly.h rational.h
	gcc -c poly.c

mainpoly.o: mainpoly.c poly.h rational.h
	gcc -c mainpoly.c

devlimln.o: devlimln.c devlimln.h poly.h rational.h
	gcc -c devlimln.c

main.o: main.c devlimln.h
	gcc -c main.c
