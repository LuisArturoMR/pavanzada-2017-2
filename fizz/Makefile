LIB := $(shell find ./lib -name '*.o')
all:
	 gcc -c fizz.c
	 gcc -c main.c
	 gcc -o fizz.exe fizz.o main.o $(LIB)

test_fizz: clean
	 gcc -c fizz.c
	 gcc -c test_fizz.c
	 gcc -o test_fizz.exe fizz.o test_fizz.o
	 ./test_fizz.exe

test:	 test_fizz

clean:
	 rm *.out *.o *.exe || exit 0

fizz: clean
	 gcc -c fizz.c
	 gcc -c main.c
	 gcc -o fizz.exe fizz.o main.o $(LIB)

run: fizz
	 ./fizz.exe

runtest: fizz
	 ./integrationtest.tcl ./fizz.exe

