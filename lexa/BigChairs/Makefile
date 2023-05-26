all: clean main

main: main.c libMyBigChairs.a
	gcc -I. main.c -L. -l MyBigChairs -lm -o main
libMyBigChairs.a: myBigChairs.c myBigChairs.h myTerm.c myTerm.h
	gcc -I. -c myBigChairs.c -o myBigChairs.o
	ar cr libMyBigChairs.a myBigChairs.o 
clean:
	rm -rf *.[ao]
