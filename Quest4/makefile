all: frequency

frequency: frequency.o
	gcc -Wall -o frequency frequency.o
frequency.o: frequency.c frequency.h
	gcc -Wall -c frequency.c
.PHONY: clean all

clean:
	rm -f *o frequency
