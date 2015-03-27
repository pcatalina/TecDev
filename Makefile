main: rational.o poly.o main.o
	gcc main.o poly.o rational.o -o poly -lm

rational.o: rational.c rational.h
	gcc -c rational.c

poly.o: poly.c poly.h rational.h
	gcc -c poly.c

main.o: main.c poly.h
	gcc -c main.c
