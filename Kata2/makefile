CC=gcc
CFLAGS=-I.
DEPS = kata2.h
OBJ = getLength.o main.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

two-sum.exe: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)

clean:
	rm *.0 *.exe
