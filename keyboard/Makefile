all:
	 gcc -c key.c
	 gcc -c main.c
	 gcc -o main key.o main.o

test_key: clean
	 gcc -c key.c
	 gcc -c test_key.c
	 gcc -o test_key.exe key.o test_key.o
	 ./test_key.exe

test:	 test_key

clean:
	 rm *.out *.o *.exe || exit 0

run:
	 gcc -c key.c
	 gcc -c main.c
	 gcc -o main.exe key.o main.o
	 ./main
