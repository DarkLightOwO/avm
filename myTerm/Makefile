all: clean main

main: main.c libMyTerm.a
	gcc -lm -I. main.c -L. -l MyTerm -o main
libMyTerm.a: myTerm.c myTerm.h
	gcc -I. -c myTerm.c -o myTerm.o
	ar cr libMyTerm.a myTerm.o


clean:
	rm -rf *.[ao]


