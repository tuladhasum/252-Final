# File:     makefile
# Author:   Dan Brekke
# Date: 

# Description
# This makefile will make the example program of a rectangleType class

CC=g++
OBJECTS=testProgInheritance.o rectangleTypeImp.o boxTypeImp.o square.o
EXE=prog

$(EXE):		$(OBJECTS)
		$(CC) -o $(EXE) $(OBJECTS)
testProgInheritance.o: 	testProgInheritance.cpp rectangleType.h boxType.h
		$(CC) -c testProgInheritance.cpp
rectangleType.o:	rectangleTypeImp.cpp rectangleType.h
		$(CC) -c rectangleTypeImp.cpp
boxType.o:	boxTypeImp.cpp boxType.h
		$(CC) -c boxType.cpp
square.o:	square.h square.cpp rectangleTypeImp.cpp rectangleType.h
		$(CC) -c square.cpp
clean:
		rm -rf *.o core.* $(EXE)

