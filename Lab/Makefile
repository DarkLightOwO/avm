all: main main2 main3 main4

main: main.c libmySimpleComputer.a
	gcc -I. main.c -L. -l mySimpleComputer -o main

libmySimpleComputer.a: memory.c mySimpleComputer.h
	gcc -I. -c memory.c -o memory.o
	ar cr libmySimpleComputer.a memory.o

main2: main2.c libmyTerm.a
	gcc -I. main2.c -L. -l myTerm -o main2

libmyTerm.a: myTerm.c myTerm.h
	gcc -I. -c myTerm.c -o myTerm.o
	ar cr libmyTerm.a myTerm.o

main3: main3.c libmyBigChars.a libmyTerm.a
	gcc -I. main3.c -L. -l myBigChars -l myTerm -o main3

libmyBigChars.a: myBigChars.c myBigChars.h
	gcc -I. -c myBigChars.c -o myBigChars.o
	ar cr libmyBigChars.a myBigChars.o

main4: main4.c libmyReadkey.a libmyBigChars.a libmyTerm.a
	gcc -I. main4.c -L. -l myReadkey -l myBigChars -l myTerm -o main4

libmyReadkey.a: myReadkey.c myReadkey.h
	gcc -I. -c myReadkey.c -o myReadkey.o
	ar cr libmyReadkey.a myReadkey.o
