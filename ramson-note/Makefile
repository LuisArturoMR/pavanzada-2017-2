all:
	 gcc -c ramson_note.c
	 gcc -c main.c
	 gcc -o main ramson_note.o main.o

test_ramson_note: clean
	 gcc -c ramson_note.c
	 gcc -c test_ramson_note.c
	 gcc -o test_ramson_note.exe ramson_note.o test_ramson_note.o
	 ./test_ramson_note.exe

test:	 test_ramson_note

clean:
	 rm *.out *.o *.exe || exit 0

run:
	 gcc -c ramson_note.c
	 gcc -c main.c
	 gcc -o main.exe ramson_note.o main.o
	 ./main
