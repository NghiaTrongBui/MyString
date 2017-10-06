Ex_string: Ex_string.o main.o
	cc -o Ex_string Ex_string.o main.o

Ex_string.o: Ex_string.h Ex_string.c
	cc -c Ex_string.c
main.o: main.c Ex_string.h
	cc -c main.c 

.PHONY: clean 
clean:
	rm -f Ex_string.o main.o Ex_string
