CC=gcc
AR=ar -rcs 
FLAGS=-Wall -g

all: isort txtfind

isort:	libisort.a MainIS.o
	$(CC) $(FLAGS) -o isort MainIS.o libisort.a
txtfind: libtxtfind.a MainTXT.o
	$(CC) $(FLAGS) -o txtfind MainTXT.o libtxtfind.a

isort.o: isort.c isort.h
	$(CC) $(FLAGS) -c isort.c
txtfind.o: txtfind.c txtfind.h
	$(CC) $(FLAGS) -c txtfind.c

MainIS.o: MainIS.c isort.h
	$(CC) $(FLAGS) -c MainIS.c
MainTXT.o: MainTXT.c txtfind.h
	$(CC) $(FLAGS) -c MainTXT.c

libisort.a: isort.o
	$(AR) libisort.a isort.o
libtxtfind.a: txtfind.o
	$(AR) libtxtfind.a txtfind.o

.PHONY: clean all

clean:
	rm -f *.o *.a 
	

