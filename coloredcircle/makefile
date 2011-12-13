# File:     makefile
# Author:   Dan Brekke

# Description
# This makefile will make the example program of a circle class

CC=g++
OBJECTS=main.o circle.o coloredcircle.o
EXE=prog

$(EXE):		$(OBJECTS)
		$(CC) -o $(EXE) $(OBJECTS)
main.o: 	main.cpp circle.o coloredcircle.o
		$(CC) -c main.cpp
circle.o:	circle.cpp circle.h
		$(CC) -c circle.cpp
coloredcircle.o:coloredcircle.cpp coloredcircle.h circle.o
		$(CC) -c coloredcircle.cpp
clean:
		rm -rf *.o core.* $(EXE)

