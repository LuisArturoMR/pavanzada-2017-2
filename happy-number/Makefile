all:
	 gcc -c happy.c
	 gcc -c main.c
	 gcc -o main happy.o main.o

test_happy: clean
	 gcc -c happy.c
	 gcc -c test_happy.c
	 gcc -o test_happy.exe happy.o test_happy.o -lm
	 ./test_happy.exe

test:	 test_happy

clean:
	 rm *.out *.o *.exe || exit 0

run:
	 gcc -c happy.c
	 gcc -c main.c
	 gcc -o main.exe happy.o main.o
	 ./main
