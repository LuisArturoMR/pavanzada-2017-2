LIB := $(shell find ./lib -name '*.o')
all:
	 gcc -c perfectNumber.c
	 gcc -c main.c
	 gcc -o perfectNumber.exe perfectNumber.o main.o $(LIB)

test_perfectNumber: clean
	 gcc -c perfectNumber.c
	 gcc -c test_perfectNumber.c
	 gcc -o test_perfectNumber.exe perfectNumber.o test_perfectNumber.o
	 ./test_perfectNumber.exe

test:	 test_perfectNumber

clean:
	 rm *.out *.o *.exe || exit 0

perfectNumber: clean
	 gcc -c perfectNumber.c
	 gcc -c main.c
	 gcc -o perfectNumber.exe perfectNumber.o main.o $(LIB)

run: perfectNumber
	 ./perfectNumber.exe

runtest: perfectNumber
	 ./integrationtest.tcl ./perfectNumber.exe

