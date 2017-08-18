CC=gcc
CFLAGS=-I.
DEPS = two-sum.h
OBJ = two-sum.o two-sum-main.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

two-sum.exe: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)

clean:
	rm *.0 *.exe
