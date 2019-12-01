
CC=gcc
AR=ar
FLAGS=-Wall -g
OBJ= basicMath.o power.o

all: mymaths mymathd maind mains
power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c
basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c
main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c
mymaths: $(OBJ)
	$(AR) -rcs libmyMath.a $(OBJ)
mymathd: $(OBJ)
	$(CC) -shared -o libmyMath.so $(OBJ)
mains: main.o libmyMath.a
	$(CC) $(FLAGS) -o mains main.o libmyMath.a
maind: main.o libmyMath.so
	$(CC) $(FLAGS) -o maind main.o ./libmyMath.so
.PHONY: clean all
clean:
	rm -f *.o *.a *.so 

	
