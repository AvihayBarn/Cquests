CC=gcc
AR=ar
FLAGS= -Wall -g

all: myBank main

main.o: main.c
	$(CC) $(FLAGS) -c main.c
myBank.o: myBank.c
	$(CC) $(FLAGS) -fPIC -c myBank.c
myBank: myBank.o
	$(CC) $(FLAGS) -shared -o libmyBank.so myBank.o
main: main.o libmyBank.so
	$(CC) $(FLAGS) -o main main.o ./libmyBank.so
.PHONY: clean all
clean:
	rm -f *.o
