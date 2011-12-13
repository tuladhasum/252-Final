OBJECTS = main.o random.o 
CC=g++

prog:		$(OBJECTS)
		$(CC) -o prog $(OBJECTS)
main.o:		main.cpp *.h
		$(CC) -c main.cpp
random.o:	random.cpp
		$(CC) -c random.cpp
clean:
		rm -rf *.o core.* prog
