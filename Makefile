# @AryanKaizo


CC:=gcc
CFLAGS:=-Wall -Wextra
OPT:=-O0


CFILES=main.c matrix.c
OFILES=main.o matrix.o
EXEC=main.out

all: main.out run


run: $(EXEC)
	./$(EXEC)

$(EXEC): $(OFILES)
	$(CC) $(CFLAGS) $(OPT) $(OFILES) -o $(EXEC)


main.o:matrix.h main.c
	$(CC) $(CFLAGS) $(OPT) -c main.c -o main.o

matrix.o:matrix.h matrix.c
	$(CC) $(CFLAGS) $(OPT) -c matrix.c -o matrix.o



clean:
	rm -f $(OFILES) $(EXEC)


