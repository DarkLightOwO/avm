all: clean main

main: main.c libMySimpleComputer.a
	gcc -I. main.c -L. -l MySimpleComputer -o main

libMySimpleComputer.a: MySimpleComputer.c MySimpleComputer.h
	gcc -I. -c MySimpleComputer.c -o MySimpleComputer.o
	ar cr libMySimpleComputer.a MySimpleComputer.o 

clean:
	rm -rf *.[ao]
