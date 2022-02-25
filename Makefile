CC=gcc
ENTRY=src\main.c

build:
	$(CC) -c src\linkedlist.c 
	$(CC) -c $(ENTRY) 
	$(CC) linkedlist.o main.o -o bin\app
	make clean

clean:
	del *.o